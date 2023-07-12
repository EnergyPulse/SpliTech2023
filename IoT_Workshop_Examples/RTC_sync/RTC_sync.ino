#include <RTClib.h>
#include <Wire.h>

RTC_DS3231 rtc;  // Create an instance of the DS3231 class
char t[32];      // Create a character array to store the formatted date and time

void setup()
{
  Serial.begin(9600);  // Initialize serial communication at 9600 baud
  Wire.begin();        // Initialize I2C bus
  rtc.begin();         // Initialize the DS3231 module
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));  // Set the DS3231 module with the current date and time from the computer
}

void loop()
{
  DateTime now = rtc.now();  // Get the current date and time from the DS3231 module

  // Format the date and time string using sprintf
  sprintf(t, "%02d:%02d:%02d %02d/%02d/%02d", now.hour(), now.minute(), now.second(), now.day(), now.month(), now.year()); 

  Serial.print(F("Date/Time: "));  // Print a label for the date and time
  Serial.println(t);               // Print the formatted date and time to the serial monitor

  delay(1000);  // Delay for 1 second before the next iteration of the loop
}
