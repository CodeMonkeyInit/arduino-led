#include <FastLED.h> 

//Matrix size 16 * 16 so
#define NUM_LEDS 256

//Pin for matrix DIN
const int ledPin = 2;

//declare array of leds
CRGB leds[NUM_LEDS];


void setup() {
  //setup leds

  FastLED.addLeds<WS2812B, ledPin, GRB>(leds, NUM_LEDS);
}

void loop() {

  //do loop of all leds to set HSV color for them
  for(int i = 0; i < NUM_LEDS; i++){
    //Randomize hue and
    //set max saturation and brightness to 255

    leds[i] = CHSV(random(256), 255, 255);
  }

  //Use library to show programmed colors
  FastLED.show();

  //delay 500ms to see how color changes
  delay(500);
}
