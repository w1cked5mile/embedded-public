#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClientSecure.h>

const char *ssid = "YourSSID"; // Replace with your WiFi SSID
const char *password = "YourPass";       // Replace with your WiFi password

void fetchGitHubFile(); // Function prototype declaration

void setup()
{
  Serial.begin(9600);         // Starts the serial communication
  WiFi.begin(ssid, password); // Connect to WiFi

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("Connected to WiFi");
}

void loop()
{
  fetchGitHubFile();
  delay(10000); // Delay for 101 seconds
}

void fetchGitHubFile()
{
  WiFiClientSecure client; // Create a secure WiFiClient object
  HTTPClient http;

  client.setInsecure();   // Bypass SSL security (only for testing)
  http.setTimeout(10000); // Set timeout to 10 seconds

  // URL to the raw content of the file on GitHub
  String url = "https://raw.githubusercontent.com/w1cked5mile/Control/main/bb.txt?nocache=" + String(millis());

  http.begin(client, url); // Begin with WiFiClientSecure and URL
  int httpCode = http.GET();

  if (httpCode > 0)
  {
    String payload = http.getString();
    Serial.println(payload);
  }
  else
  {
    Serial.println("Error on HTTP request: " + String(httpCode));
  }

  http.end();
}