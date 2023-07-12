#include <Wire.h>     // This line includes the Wire library, which provides the necessary functions for I2C communication.
#include <RTClib.h>   // Include the DS3231 library for interacting with the RTC module

RTClib RTC;           // Create an instance of the RTClib class named RTC

void setup () {
    Serial.begin(57600);   // Initialize serial communication at 57600 baud
    Wire.begin();          // Initialize the I2C bus
    delay(500);            // This line introduces a delay of 500 milliseconds to allow the system to stabilize after initialization
    Serial.println("Nano Ready!");   // Print a message to indicate that the setup is complete
}

void loop () {
    delay(1000);          // Delay for 1 second
    
    DateTime now = RTC.now();   // Get the current date and time from the RTC module
    
    // Print the date and time in the specified format to the serial monitor
    Serial.print(now.year(), DEC);
    Serial.print('/');
    Serial.print(now.month(), DEC);
    Serial.print('/');
    Serial.print(now.day(), DEC);
    Serial.print(' ');
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();
}
