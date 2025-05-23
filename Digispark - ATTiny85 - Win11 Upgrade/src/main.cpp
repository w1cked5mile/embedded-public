// Payload for Digispark ATTiny85
//
// DigiSpark script opens https://fakeUpdate.net/win11 then maximizes it using F11
// FakeUpdate.net is a harmless website to prank your friends. It looks like a Windows 11 Update screen.
// This script is for educational purposes only. I am not responsible for any damage caused by this script.
// 
// This script is licensed under the MIT License.

#include "Arduino.h"
#include "DigiKeyboard.h"

void setup() {
  //empty
}
void loop() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("http://fakeupdate.net/win11");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  for(;;){ /*empty*/ }
}