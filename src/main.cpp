#include <Arduino.h>

unsigned long startTime;            // Startzeit
unsigned long currentTime;          // Aktuelle Zeit
const unsigned long period = 1000;  // Pausenlänge (Intervall)
const byte ledPin = 13;
int a = 0;
void setup()
{
    pinMode(ledPin, OUTPUT);
    startTime = millis();  //initial start time
    Serial.begin(9600);
}
void loop()
{
    currentTime = millis();
    if (currentTime - startTime >= period) //Pause abgelaufen?
    {
        // Anweisung ausführen (z. B. LED blinkt)
        startTime = currentTime;
        Serial.println(startTime);
        Serial.println("LED blinkt");
    }
    a=a+1;
    Serial.println(a);
}