#include <Adafruit_NeoPixel.h>

//Code by Daniel Near
// 09-21-2013
//long currentmillis
#define PIN 6//digital out to neopixel strip
#define PIXELS 90
#define PATTERN_SIZE 18
#define DELAY 15
//r=0x1,0x2, g=0x4,0x8, b=0x10,0x20

#define PATTERN_SIZE 18
#define PATTERN_REPEAT 18
int LVpattern[PATTERN_SIZE][PATTERN_REPEAT] = {
{16, 21, 21, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 5, 5, 1}, 
{21, 41, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 22, 5}, 
{21, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 5}, 
{0, 0, 0, 20, 46, 20, 0, 0, 0, 0, 0, 0, 16, 38, 0, 0, 0, 0}, 
{0, 0, 20, 42, 41, 46, 21, 0, 0, 0, 0, 17, 38, 38, 38, 17, 0, 0}, 
{0, 0, 0, 20, 46, 20, 0, 0, 0, 0, 0, 0, 17, 38, 17, 0, 0, 0}, 
{21, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 21}, 
{42, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 42}, 
{41, 41, 21, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 21, 42, 42}, 
{41, 42, 21, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 21, 42, 42}, 
{42, 20, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 21, 42}, 
{21, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 21}, 
{0, 0, 0, 21, 59, 21, 0, 0, 0, 0, 0, 0, 21, 62, 20, 0, 0, 0}, 
{0, 0, 21, 59, 42, 59, 21, 0, 0, 0, 0, 21, 63, 62, 63, 21, 0, 0}, 
{0, 0, 0, 21, 63, 21, 0, 0, 0, 0, 0, 0, 21, 63, 21, 0, 0, 0}, 
{16, 0, 0, 0, 21, 0, 0, 0, 16, 16, 0, 0, 0, 21, 0, 0, 0, 5}, 
{16, 21, 0, 0, 0, 0, 0, 0, 37, 37, 0, 0, 0, 0, 0, 0, 26, 9}, 
{16, 16, 16, 0, 0, 0, 16, 37, 21, 21, 37, 16, 0, 0, 0, 5, 9, 4}};
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(90, PIN, NEO_GRB + NEO_KHZ800);
int frame = 0;
void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  // Some example procedures showing how to display to the pixels:
  //currentmillis=millis();
  render_frame(frame);
  frame++;
  frame = frame%PATTERN_REPEAT;
  delay(DELAY);
}
void render_frame(int frame)
{
    for(int16_t i=0;i<PATTERN_SIZE;i++)
    {

      for(int16_t offset=0; offset < PIXELS; offset+=PATTERN_SIZE){
        strip.setPixelColor(i+offset,replaceColor(pattern[frame][i]));
      }
    }
    strip.show(); // push out to strip
 
}
unsigned long replaceColor(byte color)//extend 2 bits to 24 and shift bits for brighter shades
{
byte redcolor=0;
byte grncolor=0;
byte blucolor=0;
switch (color&0x03){//red{//mask off the 2 relevant bits and expand to 8 bits
  case 0x01:
    redcolor=0x3F;
    break;
  case 0x02:
    redcolor=0xC0;
    break;
  case 0x03:
    redcolor=0xFF;
    break;
  default:redcolor=0x00;
  }
switch (color&0x0C){//grn{
  case 0x04:
    grncolor=0x3F;
    break;
  case 0x08:
    grncolor=0xC0;
    break;
  case 0x0C:
    grncolor=0xFF;
    break;
  default:grncolor=0x00;
  }
switch (color&0x30){//blu{
  case 0x10:
    blucolor=0x3F;
    break;
  case 0x20:
    blucolor=0xC0;
    break;
  case 0x30:
    blucolor=0xFF;
    break;
  default:blucolor=0x00;
  }
  
  //byte redcolor=((color & 0x02)<<6)|((color&0x01)<<5);
  //byte grncolor=((color & 0x08)<<4)|((color&0x04)<<3);
  //byte blucolor=((color & 0x30)<<2)|((color&0x04)<<1);//<<1;
  return strip.Color(redcolor,  grncolor,  blucolor);//combine individual 8 bit RGB values to a long

}
// Fill the dots one after the other with a color




