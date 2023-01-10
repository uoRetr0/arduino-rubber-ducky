#include "Keyboard.h"

void setup() {
  pinMode(8, INPUT);
  Keyboard.begin();

  if (digitalRead(8) == HIGH) {
    delay(1000);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(200);
    Keyboard.releaseAll();
    Keyboard.print("notepad");
    Keyboard.press(KEY_RETURN);
    delay(200);  
    Keyboard.print("Hello Github!");
    
  }
  Keyboard.end();
}


void loop() {
}
