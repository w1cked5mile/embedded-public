#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>
#include <secrets.h>



void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
WiFiManager wifiManager;
Serial.println("Conecting.....");
wifiManager.autoConnect(wifi_ssid, wifi_password);
Serial.println("Connected");
}
void loop() {
// put your main code here, to run repeatedly:
}