#include <BleKeyboard.h>


BleKeyboard bleKeyboard;

void setup() {
  
  Serial.begin(115200);
  
  // Initialize BLE keyboard
  bleKeyboard.begin();
  
  // Wait for BLE to be ready
  while (!bleKeyboard.isConnected()) {
    Serial.println("Waiting for BLE to connect...");
    delay(1000);
  }


  bleKeyboard.press(KEY_LEFT_GUI); // Windows key
  bleKeyboard.press('x');          // 'x' key
  bleKeyboard.releaseAll();
  delay (500);
  bleKeyboard.press('u');
  bleKeyboard.releaseAll(); 
  bleKeyboard.press('u');
  bleKeyboard.releaseAll();       // Release all keys
  
 
  bleKeyboard.end();
  

}

void loop() {
}
