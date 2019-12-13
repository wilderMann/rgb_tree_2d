#include <Arduino.h>
#include <SmartLeds.h>

const int LED_COUNT0 = 9;
const int DATA_PIN0 = 19;
const int CHANNEL0 = 0;
const int LED_COUNT1 = 11;
const int DATA_PIN1 = 21;
const int CHANNEL1 = 1;
const int LED_COUNT2 = 11;
const int DATA_PIN2 = 22;
const int CHANNEL2 = 2;
const int LED_COUNT3 = 13;
const int DATA_PIN3 = 18;
const int CHANNEL3 = 3;

SmartLed leds0( LED_WS2812, LED_COUNT0, DATA_PIN0, CHANNEL0, DoubleBuffer );
SmartLed leds1( LED_WS2812, LED_COUNT1, DATA_PIN1, CHANNEL1, DoubleBuffer );
SmartLed leds2( LED_WS2812, LED_COUNT2, DATA_PIN2, CHANNEL2, DoubleBuffer );
SmartLed leds3( LED_WS2812, LED_COUNT3, DATA_PIN3, CHANNEL3, DoubleBuffer );

const int CLK_PIN = 23;

void setup() {
  Serial.begin(115200);
  for(int i = 0; i < LED_COUNT0; i++){
    leds0[ i ] = Rgb{ 0, 255, 0 };
  }
  for(int i = 0; i < LED_COUNT1; i++){
    leds1[ i ] = Rgb{ 0, 255, 0 };
  }
  for(int i = 0; i < LED_COUNT2; i++){
    leds2[ i ] = Rgb{ 0, 255, 0 };
  }
  for(int i = 0; i < LED_COUNT3; i++){
    leds3[ i ] = Rgb{ 0, 255, 0 };
  }
  leds0.show();
  delay(100);
  leds1.show();
  delay(100);
  leds2.show();
  delay(100);
  leds3.show();
  delay(100);

}

void loop() {
  for(int i = 0; i < LED_COUNT0; i++){
    leds0[ i ] = Rgb{ 0, 0, 0 };
  }
  for(int i = 0; i < LED_COUNT1; i++){
    leds1[ i ] = Rgb{ 0, 0, 0 };
  }
  for(int i = 0; i < LED_COUNT2; i++){
    leds2[ i ] = Rgb{ 0, 0, 0 };
  }
  for(int i = 0; i < LED_COUNT3; i++){
    leds3[ i ] = Rgb{ 0, 0, 0 };
  }
  leds0.show();
  leds1.show();
  leds2.show();
  leds3.show();
}
