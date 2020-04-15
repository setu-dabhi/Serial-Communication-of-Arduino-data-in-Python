#include <M5StickC.h>
# define Mpin 36 //Connecting the Analog Pin of the Moisture Sensor
void setup() {
  M5.begin();
  Serial.begin(115200);
  pinMode(Mpin, INPUT);
  M5.Lcd.setRotation(3);
  M5.Lcd.setCursor(45, 30);
  M5.Lcd.setTextSize(2);

}
void loop(void) {
  M5.Lcd.setCursor(45, 30);
  Serial.println(analogRead(Mpin));
  M5.Lcd.print(analogRead(Mpin));
  delay(500);  
}
