#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>
int sensorVal=0;
int mg=0;
const int buttonPin=2;
int buttonState=0;
SoftwareSerial MyBlue(0, 1  ); // RX |  TX

LiquidCrystal_I2C lcd(0x3F,16,2);
int cal;
void setup() {
lcd.init();
lcd.backlight();
  MyBlue.begin(9600);
  Serial.begin(9600);
pinMode(buttonPin,INPUT);
pinMode(3,OUTPUT);
pinMode(A0,INPUT);
pinMode(A1,OUTPUT);
cal=callibration();
lcd.begin(16,2);
lcd.print("Press and blow");
digitalWrite(3,HIGH);
digitalWrite(A1,HIGH);

}

void loop() {
buttonState=digitalRead(buttonPin);

if (buttonState==HIGH)
{
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Get Ready to Blow");
  delay(1000);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
    lcd.print("Blow");
    lcd.setCursor(0,1);
    delay(5000);
    lcd.print("Stop");
    delay(10000);
  sensorVal=analogRead(A0);
  sensorVal=(133.81)+((-7.02)*sensorVal)+((0.19526)*pow(sensorVal,2))+((-0.00174)*pow(sensorVal,3));
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Glucose level: ");
  lcd.setCursor(0,1);
  lcd.print(int(sensorVal),DEC);
  Serial.println(int(sensorVal));
  lcd.setCursor(5,1);
  lcd.print("mg/dL");
  }
  else
  return;
}
int callibration()  //the sensor calliberation part 
{
  int s=0;
  int call=0;
  lcd.print("Callibrating");
  for (int i=0;i<20;i++)
  {
    s=analogRead(A0);
    call=call+s;
    delay(1000);
    }
call=call/20;
  return call;
  }
  

