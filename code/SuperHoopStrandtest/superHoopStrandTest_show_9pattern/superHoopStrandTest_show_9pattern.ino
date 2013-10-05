#include <Adafruit_NeoPixel.h>

//Code by Andrew Schreiber
// 09-21-2013
//long currentmillis
#define PIN 6//digital out to neopixel strip
#define PIXELS 90
//#define PATTERN_SIZE 18
#define DELAY 15
//r=0x1,0x2, g=0x4,0x8, b=0x10,0x20
#define PATTERN_SIZE 18
#define PATTERN_REPEAT 18
#define NUM_PATTERNS 4

const byte pattern1[PATTERN_SIZE][PATTERN_REPEAT] =
{
  {    00, 00, 00, 00, 00, 00, 00, 00, 52, 00, 00, 00, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 00, 00, 52, 48, 00, 00, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 00, 00, 52, 48, 00, 00, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 00, 00, 52, 48, 60, 00, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 00, 48, 60, 00, 52, 00, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 00, 48, 00, 00, 52, 00, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 60, 48, 00, 00, 52, 60, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 52, 52, 52, 00, 00, 00, 00, 48, 48, 48, 00, 00, 00, 00  }  , 
  {    48, 48, 48, 48, 60, 00, 00, 00, 00, 00, 00, 00, 00, 60, 52, 52, 52, 52  }  , 
  {    00, 52, 52, 52, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 48, 48, 48, 00  }  , 
  {    00, 00, 00, 60, 48, 48, 48, 00, 00, 00, 00, 52, 52, 52, 60, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 60, 52, 00, 00, 48, 60, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 00, 52, 00, 00, 48, 00, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 00, 52, 60, 00, 48, 00, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 00, 00, 48, 52, 60, 00, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 00, 00, 48, 52, 00, 00, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 00, 00, 48, 52, 00, 00, 00, 00, 00, 00, 00, 00  }  , 
  {    00, 00, 00, 00, 00, 00, 00, 00, 48, 00, 00, 00, 00, 00, 00, 00, 00, 00  }
};
const byte pattern2[PATTERN_SIZE][PATTERN_REPEAT] =
{
  {    16, 21, 21, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 5, 5, 1  }  , 
  {    21, 41, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 22, 5  }  , 
  {    21, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 5  }  , 
  {   0, 0, 0, 20, 46, 20, 0, 0, 0, 0, 0, 0, 16, 38, 0, 0, 0, 0  }  ,
  {    0, 0, 20, 42, 41, 46, 21, 0, 0, 0, 0, 17, 38, 38, 38, 17, 0, 0  }  , 
  {    0, 0, 0, 20, 46, 20, 0, 0, 0, 0, 0, 0, 17, 38, 17, 0, 0, 0  }  , 
  {    21, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 21  }  , 
  {    42, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 42  }  , 
  {    41, 41, 21, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 21, 42, 42  }  , 
  {    41, 42, 21, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 21, 42, 42  }  , 
  {    42, 20, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 21, 42  }  , 
  {    21, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 21  }  , 
  {    0, 0, 0, 21, 59, 21, 0, 0, 0, 0, 0, 0, 21, 62, 20, 0, 0, 0  }  , 
  {    0, 0, 21, 59, 42, 59, 21, 0, 0, 0, 0, 21, 63, 62, 63, 21, 0, 0  }  , 
  {    0, 0, 0, 21, 63, 21, 0, 0, 0, 0, 0, 0, 21, 63, 21, 0, 0, 0  }  , 
  {    16, 0, 0, 0, 21, 0, 0, 0, 16, 16, 0, 0, 0, 21, 0, 0, 0, 5  }  , 
  {    16, 21, 0, 0, 0, 0, 0, 0, 37, 37, 0, 0, 0, 0, 0, 0, 26, 9  }  , 
  {    16, 16, 16, 0, 0, 0, 16, 37, 21, 21, 37, 16, 0, 0, 0, 5, 9, 4  }
};
const byte pattern3[PATTERN_SIZE][PATTERN_REPEAT] =
{
  {    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0  }  , 
  {    0, 9, 9, 9, 9, 9, 9, 0, 9, 9, 9, 9, 9, 0, 9, 9, 9, 9  }  , 
  {    0, 9, 0, 0, 0, 0, 9, 0, 9, 0, 0, 0, 9, 0, 9, 0, 0, 9  }  , 
  {    0, 9, 0, 9, 9, 0, 9, 0, 9, 9, 9, 0, 9, 0, 9, 9, 0, 9  }  , 
  {    0, 9, 0, 0, 9, 0, 9, 0, 0, 0, 9, 0, 9, 0, 0, 0, 0, 9  }  , 
  {    0, 9, 9, 9, 9, 0, 9, 9, 9, 9, 9, 0, 9, 9, 9, 9, 9, 9  }  , 
  {    52, 52, 52, 52, 0, 0, 60, 0, 0, 7, 7, 7, 7, 0, 0, 60, 0, 0  }  , 
  {   0, 52, 52, 0, 0, 60, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 60, 0  }  , 
  {    0, 0, 0, 0, 60, 0, 0, 7, 0, 0, 38, 38, 0, 0, 7, 0, 0, 60  }  , 
  {    60, 0, 0, 60, 0, 0, 7, 0, 0, 38, 0, 0, 38, 0, 0, 7, 0, 0  }  , 
  {    0, 60, 60, 0, 0, 7, 0, 0, 38, 0, 0, 0, 0, 38, 0, 0, 7, 0  }  , 
  {    0, 0, 0, 0, 7, 0, 0, 38, 0, 0, 52, 52, 0, 0, 38, 0, 0, 7  }  , 
  {    7, 7, 7, 7, 0, 0, 38, 0, 0, 52, 52, 52, 52, 0, 0, 38, 0, 0  }  , 
  {    48, 0, 48, 48, 48, 48, 0, 48, 48, 48, 48, 48, 48, 0, 48, 48, 48, 48  }  , 
  {    48, 0, 48, 0, 0, 48, 0, 48, 0, 0, 0, 0, 48, 0, 48, 0, 0, 0  }  , 
  {    48, 0, 48, 48, 0, 48, 0, 48, 0, 48, 48, 0, 48, 0, 48, 48, 48, 0  }  , 
  {    48, 0, 0, 0, 0, 48, 0, 48, 0, 0, 48, 0, 48, 0, 0, 0, 48, 0  }  , 
  {    48, 48, 48, 48, 48, 48, 0, 48, 48, 48, 48, 0, 48, 48, 48, 48, 48, 0  }
};
const byte pattern4[PATTERN_SIZE][PATTERN_REPEAT] =
{
  {    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0  }  , 
  {    0, 9, 9, 9, 9, 9, 9, 9, 9, 0, 0, 0, 9, 9, 9, 9, 9, 9  }  , 
  {    0, 9, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 9  }  , 
  {    0, 9, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 9  }  , 
  {    0, 9, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 9  }  , 
  {    0, 9, 0, 0, 9, 9, 9, 0, 0, 9, 0, 0, 9, 9, 9, 0, 0, 9  }  , 
  {    0, 9, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 9  }  , 
  {    0, 9, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 9  }  , 
  {    0, 9, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 9  }  , 
  {    0, 9, 9, 9, 9, 9, 9, 0, 0, 0, 9, 9, 9, 9, 9, 9, 9, 9  }  , 
  {    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0  }  , 
  {    0, 0, 0, 0, 0, 60, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 60, 0  }  , 
  {    0, 0, 0, 0, 60, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 60  }  , 
  {    60, 0, 0, 60, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0  }  , 
  {    0, 60, 60, 0, 0, 0, 7, 0, 0, 0, 38, 38, 0, 0, 0, 7, 0, 0  }  , 
  {    0, 0, 0, 0, 0, 7, 0, 0, 0, 38, 0, 0, 38, 0, 0, 0, 7, 0  }  , 
  {    0, 0, 0, 0, 7, 0, 0, 0, 38, 0, 0, 0, 0, 38, 0, 0, 0, 7  }  , 
  {    7, 7, 7, 7, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0  }
};
const byte pattern5[PATTERN_SIZE][PATTERN_REPEAT] =
{{9, 00, 00, 00, 00, 00, 25, 00, 00, 00, 00, 00, 25, 00, 00, 00, 00, 00}, 
{25, 25, 00, 00, 00, 25, 25, 25, 00, 00, 00, 25, 25, 25, 00, 00, 00, 25}, 
{00, 25, 25, 00, 25, 25, 00, 25, 25, 00, 25, 25, 00, 25, 25, 00, 25, 25}, 
{00, 00, 25, 9, 25, 00, 00, 00, 25, 25, 25, 00, 00, 00, 25, 25, 25, 00}, 
{00, 00, 00, 25, 00, 00, 00, 00, 00, 25, 00, 00, 00, 00, 00, 25, 00, 00}, 
{00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, 
{33, 33, 32, 32, 33, 37, 33, 32, 32, 32, 33, 33, 32, 32, 32, 33, 32, 32}, 
{48, 00, 00, 48, 00, 00, 48, 00, 00, 48, 00, 00, 48, 00, 00, 48, 00, 48}, 
{32, 48, 48, 48, 32, 32, 48, 48, 48, 32, 32, 32, 32, 48, 48, 48, 48, 48}, 
{32, 00, 00, 32, 00, 00, 32, 00, 00, 32, 00, 00, 32, 00, 00, 32, 00, 48}, 
{32, 37, 32, 32, 33, 33, 33, 32, 32, 32, 32, 32, 32, 32, 33, 32, 32, 32}, 
{00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, 
{00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, 
{00, 00, 00, 21, 00, 00, 00, 00, 00, 21, 00, 00, 00, 00, 00, 21, 00, 00}, 
{00, 00, 22, 22, 22, 00, 00, 00, 22, 22, 22, 00, 00, 00, 22, 22, 22, 00}, 
{00, 22, 22, 00, 22, 22, 00, 22, 22, 00, 22, 22, 00, 22, 22, 00, 22, 22}, 
{22, 22, 00, 00, 00, 22, 22, 22, 00, 00, 00, 22, 22, 22, 00, 00, 00, 21}, 
{22, 00, 00, 00, 00, 00, 22, 00, 00, 00, 00, 00, 22, 00, 00, 00, 00, 00}};
const byte pattern6[PATTERN_SIZE][PATTERN_REPEAT] =
{{00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, 
{00, 00, 00, 00, 00, 00, 38, 38, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, 
{00, 00, 00, 00, 00, 00, 38, 38, 38, 00, 00, 00, 00, 00, 00, 00, 00, 00}, 
{00, 00, 00, 00, 00, 00, 38, 38, 38, 38, 00, 00, 00, 00, 00, 00, 00, 00}, 
{00, 00, 00, 00, 00, 00, 38, 38, 38, 38, 38, 00, 38, 38, 38, 38, 38, 38}, 
{00, 00, 00, 00, 00, 00, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38}, 
{00, 00, 00, 00, 00, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 00}, 
{00, 38, 38, 38, 38, 38, 38, 38, 38, 63, 38, 38, 38, 38, 38, 38, 00, 00}, 
{38, 38, 38, 38, 38, 38, 38, 38, 63, 63, 63, 63, 38, 38, 38, 38, 00, 00}, 
{38, 38, 38, 38, 38, 38, 38, 38, 63, 63, 63, 63, 38, 38, 38, 38, 00, 00}, 
{00, 38, 38, 38, 38, 38, 38, 38, 38, 63, 38, 38, 38, 38, 38, 38, 00, 00}, 
{00, 00, 00, 00, 00, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 00}, 
{00, 00, 00, 00, 00, 00, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38}, 
{00, 00, 00, 00, 00, 00, 38, 38, 38, 38, 38, 00, 38, 38, 38, 38, 38, 38}, 
{00, 00, 00, 00, 00, 00, 38, 38, 38, 38, 00, 00, 00, 00, 00, 00, 00, 00}, 
{00, 00, 00, 00, 00, 00, 38, 38, 38, 00, 00, 00, 00, 00, 00, 00, 00, 00}, 
{00, 00, 00, 00, 00, 00, 21, 37, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, 
{00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}};
const byte pattern7[PATTERN_SIZE][PATTERN_REPEAT] =
{{48, 48, 48, 63, 63, 63, 63, 63, 22, 23, 22, 63, 63, 63, 63, 48, 48, 48}, 
{48, 48, 48, 32, 63, 63, 63, 63, 22, 23, 22, 63, 63, 63, 32, 48, 48, 48}, 
{48, 48, 48, 48, 32, 63, 63, 63, 22, 6, 22, 63, 63, 32, 48, 48, 48, 48}, 
{63, 32, 48, 48, 48, 32, 63, 63, 22, 22, 22, 63, 33, 48, 48, 48, 32, 63}, 
{63, 63, 63, 32, 48, 48, 32, 63, 22, 22, 18, 33, 48, 48, 48, 32, 63, 63}, 
{63, 63, 63, 63, 33, 49, 49, 33, 18, 18, 18, 33, 49, 49, 33, 63, 63, 63}, 
{63, 63, 63, 63, 63, 33, 33, 34, 18, 23, 18, 34, 33, 33, 63, 63, 63, 63}, 
{22, 22, 22, 22, 18, 18, 18, 18, 22, 23, 18, 18, 18, 18, 22, 22, 22, 22}, 
{23, 22, 22, 22, 22, 23, 22, 22, 23, 23, 23, 18, 22, 22, 22, 6, 22, 6}, 
{22, 22, 22, 22, 22, 22, 18, 22, 22, 23, 22, 18, 22, 22, 22, 22, 22, 22}, 
{63, 63, 63, 63, 63, 33, 49, 33, 18, 22, 18, 34, 33, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 32, 48, 48, 33, 18, 22, 18, 33, 48, 48, 63, 63, 63, 63}, 
{63, 63, 63, 32, 48, 48, 48, 33, 22, 22, 22, 33, 48, 48, 32, 63, 63, 63}, 
{63, 63, 32, 48, 48, 48, 32, 63, 22, 22, 22, 63, 33, 48, 48, 32, 63, 63}, 
{63, 32, 48, 48, 48, 32, 63, 63, 22, 22, 22, 63, 63, 33, 48, 48, 32, 63}, 
{48, 48, 48, 48, 48, 63, 63, 63, 22, 22, 22, 63, 63, 63, 32, 48, 48, 48}, 
{48, 48, 48, 32, 63, 63, 63, 63, 22, 22, 22, 63, 63, 63, 63, 33, 48, 48}, 
{48, 48, 48, 63, 63, 63, 63, 63, 22, 23, 22, 63, 63, 63, 63, 63, 48, 48}};
const byte pattern8[PATTERN_SIZE][PATTERN_REPEAT] =
{{00, 00, 00, 00, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 00, 00, 00, 00}, 
{00, 00, 00, 00, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 00, 00, 00, 00}, 
{00, 00, 00, 33, 48, 48, 48, 32, 32, 32, 32, 32, 48, 48, 32, 00, 00, 00}, 
{00, 00, 00, 48, 48, 32, 00, 00, 00, 00, 00, 00, 32, 48, 32, 00, 00, 00}, 
{00, 00, 32, 48, 32, 00, 25, 25, 25, 25, 25, 25, 00, 32, 48, 32, 00, 00}, 
{00, 00, 48, 48, 36, 25, 25, 9, 9, 9, 9, 25, 25, 36, 48, 48, 00, 00}, 
{00, 32, 48, 32, 25, 25, 9, 9, 25, 25, 9, 9, 25, 25, 32, 48, 32, 00}, 
{00, 32, 48, 36, 25, 9, 9, 00, 00, 00, 00, 9, 9, 25, 36, 48, 32, 00}, 
{48, 48, 32, 37, 25, 9, 9, 00, 00, 00, 00, 9, 9, 25, 37, 36, 48, 48}, 
{48, 48, 32, 37, 25, 9, 9, 00, 00, 00, 00, 25, 9, 25, 37, 32, 48, 48}, 
{00, 32, 48, 32, 25, 9, 9, 00, 00, 00, 00, 9, 9, 25, 36, 48, 32, 00}, 
{00, 33, 48, 48, 25, 25, 9, 9, 25, 9, 9, 9, 25, 25, 32, 48, 33, 00}, 
{00, 00, 48, 48, 36, 25, 25, 9, 9, 9, 9, 25, 25, 36, 48, 48, 00, 00}, 
{00, 00, 32, 48, 32, 00, 25, 25, 25, 25, 25, 25, 00, 32, 48, 32, 00, 00}, 
{00, 00, 00, 32, 48, 32, 00, 00, 00, 00, 00, 00, 48, 48, 32, 00, 00, 00}, 
{00, 00, 00, 32, 48, 48, 48, 32, 32, 32, 33, 48, 48, 48, 37, 00, 00, 00}, 
{00, 00, 00, 00, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 00, 00, 00, 00}, 
{00, 00, 00, 00, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 00, 00, 00, 00}};
const byte pattern9[PATTERN_SIZE][PATTERN_REPEAT] =
{{48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48}, 
{48, 48, 48, 48, 48, 48, 49, 49, 49, 49, 49, 48, 48, 48, 48, 48, 48, 48}, 
{48, 48, 00, 00, 00, 00, 00, 18, 18, 18, 18, 00, 00, 00, 00, 00, 48, 48}, 
{48, 48, 00, 00, 00, 22, 22, 22, 22, 23, 22, 22, 22, 00, 00, 00, 48, 48}, 
{48, 48, 00, 00, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 00, 00, 48, 48}, 
{48, 48, 00, 22, 22, 23, 22, 00, 00, 00, 00, 22, 22, 22, 22, 00, 49, 48}, 
{48, 49, 00, 22, 22, 22, 00, 00, 00, 00, 00, 00, 22, 22, 22, 18, 49, 48}, 
{48, 49, 18, 22, 22, 00, 00, 00, 00, 00, 00, 00, 00, 22, 23, 18, 49, 48}, 
{48, 49, 18, 22, 22, 00, 00, 00, 25, 25, 00, 00, 00, 22, 23, 18, 49, 48}, 
{48, 49, 18, 6, 22, 00, 00, 00, 25, 25, 00, 00, 00, 22, 22, 18, 49, 48}, 
{48, 33, 22, 22, 22, 00, 00, 00, 00, 00, 00, 00, 00, 22, 23, 18, 49, 48}, 
{48, 49, 00, 22, 22, 22, 00, 00, 00, 00, 00, 00, 22, 6, 22, 18, 49, 48}, 
{48, 48, 00, 22, 22, 22, 22, 00, 00, 00, 00, 22, 23, 22, 6, 00, 48, 48}, 
{48, 48, 00, 00, 22, 22, 6, 22, 22, 22, 22, 22, 6, 22, 00, 00, 48, 48}, 
{48, 48, 00, 00, 00, 22, 22, 23, 22, 22, 23, 22, 22, 00, 00, 00, 48, 48}, 
{48, 48, 00, 00, 00, 00, 18, 18, 18, 18, 18, 18, 00, 00, 00, 00, 48, 48}, 
{48, 48, 48, 48, 48, 49, 49, 49, 49, 49, 49, 49, 48, 48, 48, 48, 48, 48}, 
{48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48}};


// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)

Adafruit_NeoPixel strip = Adafruit_NeoPixel(90, PIN, NEO_GRB + NEO_KHZ800);
int frame = 0;
int currentPattern = 0;
int counter=0;
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
  counter++;
  if(counter>1000)
  {
    counter=0;
    currentPattern++;
    currentPattern = currentPattern%NUM_PATTERNS;
  }
}

void render_frame(int frame)
{
  //Serial.println("BLA");
  for(int i=0;i<18;i++)
  {
    //Serial.println(i);
    for(int offset=0; offset < PIXELS; offset+=PATTERN_SIZE){
      switch (currentPattern){
      case 0:
        strip.setPixelColor(i+offset,replaceColor(pattern1[frame][i]));
        break;
      case 1:
        strip.setPixelColor(i+offset,replaceColor(pattern2[frame][i]));
        break;
      case 2:
        strip.setPixelColor(i+offset,replaceColor(pattern3[frame][i]));
        break;
      case 3:
        strip.setPixelColor(i+offset,replaceColor(pattern4[frame][i]));
        break;
      }
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
  default:
    redcolor=0x00;
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
  default:
    grncolor=0x00;
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
  default:
    blucolor=0x00;
  }

  return strip.Color(redcolor,  grncolor,  blucolor);//combine individual 8 bit RGB values to a long
}








