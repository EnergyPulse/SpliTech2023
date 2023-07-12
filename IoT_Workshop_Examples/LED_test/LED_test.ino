/*
 * Example for RGB LEDs on IoT learning board SpliTech2023
 * Note: LED 2 is pixel number 0 and LED 1 is pixel number 1
 */


#include <NeoPixelBus.h>  // including library for adressable LED

const uint16_t PixelCount = 2; // we have 2 pixels on our board
const uint8_t PixelPin = 16;  // our 2 LEDs are connected to this pin on ESP32 board

#define colorSaturation 8  // how many bits we use, values goes from min [0] to max [255] -> 2^8 represents 255

NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);  // set PixcelPin on ESP32 board to drive LEDs 


// define colors using color index for Red, Green and Blue

//                                      color index:       R       G        B                   


RgbColor red(colorSaturation, 0, 0);                   // 255      0        0 
RgbColor green(0, colorSaturation, 0);                 //  0      255       0
RgbColor blue(0, 0, colorSaturation);                  //  0      255       0
RgbColor white(colorSaturation);                       // 255     255      255   
RgbColor black(0);                                     //  0       0        0


void setup()
{

    strip.Begin();  // Init function
    strip.Show();   // display color that we set for LEDs
}


void loop()
{
    delay(500);
    strip.SetPixelColor(0, red);
    strip.Show();

    delay(500);
    strip.SetPixelColor(0, green);
    strip.Show();

    delay(500);
    strip.SetPixelColor(0, blue);
    strip.Show();

    delay(500);
    strip.SetPixelColor(0, white);
    strip.Show();
    delay(500);
    strip.SetPixelColor(1, white);
    strip.Show();

    delay(500);
    strip.SetPixelColor(1, green);
    strip.Show();

    delay(500);
    strip.SetPixelColor(1, blue);
    strip.Show();

    delay(500);
    strip.SetPixelColor(1, red);
    strip.Show();

}
