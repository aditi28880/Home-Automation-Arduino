Code for the Project:

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
const int pingPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor
const int pingPin1 = 9; // Trigger Pin of Ultrasonic Sensor
const int echoPin1 = 10;
const int buzzer = 8;
const int led= 13;
#define MQ2pin A0
float sensorValue;

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
   Serial.begin(9600); // Starting Serial Terminal
   lcd.init();                      // initialize the lcd 
   lcd.init();
   lcd.backlight();
   pinMode(buzzer, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(led, OUTPUT);
   pinMode(12,OUTPUT);
   digitalWrite(12,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(led,LOW);
}

void loop() {
   long duration, inches, cm,duration1, inches1, cm1;
  
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(100);

   if(inches<2)
   {
     digitalWrite(buzzer,HIGH);
     lcd.setCursor(0,0);
     lcd.print("Visitor");
     lcd.setCursor(0,1);
     lcd.print("Dectected !!!");
     delay(500);
     digitalWrite(buzzer,LOW);
     delay(1000);
     lcd.clear();
   }

    sensorValue = analogRead(MQ2pin);
   Serial.print("Sensor Value: ");
   Serial.println(sensorValue);
    if(sensorValue > 250)
  {
    Serial.print(" | Smoke detected!");
     digitalWrite(buzzer,HIGH);
     delay(100);
     digitalWrite(buzzer,LOW);
     delay(100);
     lcd.print("Smoke Dectected");
     delay(2000);
     lcd.clear();
  }

   pinMode(pingPin1, OUTPUT);
   digitalWrite(pingPin1, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin1, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin1, LOW);
   pinMode(echoPin1, INPUT);
   duration1 = pulseIn(echoPin1, HIGH);
   inches1 = microsecondsToInches(duration1);
   cm1 = microsecondsToCentimeters(duration1);
   Serial.print(inches1);
   Serial.print("in1, ");
   Serial.print(cm1);
   Serial.print("cm1");
   Serial.println();
   delay(100);
   if(inches1<5)
   {                                                              //led logiccc
     digitalWrite(led,HIGH);
     delay(200);
   }
   else
   {
    digitalWrite(led,LOW);
     delay(100);
   }
 
}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}
