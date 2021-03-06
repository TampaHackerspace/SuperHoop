int pattern1[PATTERN_SIZE][PATTERN_REPEAT] =
{{63, 63, 63, 63, 63, 63, 63, 63, 52, 63, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 63, 52, 48, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 63, 52, 48, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 63, 52, 48, 60, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 48, 60, 63, 52, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 48, 63, 63, 52, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 60, 48, 63, 63, 52, 60, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 52, 52, 52, 63, 63, 63, 63, 48, 48, 48, 63, 63, 63, 63}, 
{48, 48, 48, 48, 60, 63, 63, 63, 63, 63, 63, 63, 63, 60, 52, 52, 52, 52}, 
{63, 52, 52, 52, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 48, 48, 48, 63}, 
{63, 63, 63, 60, 48, 48, 48, 63, 63, 63, 63, 52, 52, 52, 60, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 60, 52, 63, 63, 48, 60, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 52, 63, 63, 48, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 52, 60, 63, 48, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 63, 48, 52, 60, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 63, 48, 52, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 63, 48, 52, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 63, 48, 63, 63, 63, 63, 63, 63, 63, 63, 63}};
int pattern2[PATTERN_SIZE][PATTERN_REPEAT] =
{{16, 21, 21, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 5, 5, 1}, 
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
int pattern3[PATTERN_SIZE][PATTERN_REPEAT] =
{{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 9, 9, 9, 9, 9, 9, 0, 9, 9, 9, 9, 9, 0, 9, 9, 9, 9}, 
{0, 9, 0, 0, 0, 0, 9, 0, 9, 0, 0, 0, 9, 0, 9, 0, 0, 9}, 
{0, 9, 0, 9, 9, 0, 9, 0, 9, 9, 9, 0, 9, 0, 9, 9, 0, 9}, 
{0, 9, 0, 0, 9, 0, 9, 0, 0, 0, 9, 0, 9, 0, 0, 0, 0, 9}, 
{0, 9, 9, 9, 9, 0, 9, 9, 9, 9, 9, 0, 9, 9, 9, 9, 9, 9}, 
{52, 52, 52, 52, 0, 0, 60, 0, 0, 7, 7, 7, 7, 0, 0, 60, 0, 0}, 
{0, 52, 52, 0, 0, 60, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 60, 0}, 
{0, 0, 0, 0, 60, 0, 0, 7, 0, 0, 38, 38, 0, 0, 7, 0, 0, 60}, 
{60, 0, 0, 60, 0, 0, 7, 0, 0, 38, 0, 0, 38, 0, 0, 7, 0, 0}, 
{0, 60, 60, 0, 0, 7, 0, 0, 38, 0, 0, 0, 0, 38, 0, 0, 7, 0}, 
{0, 0, 0, 0, 7, 0, 0, 38, 0, 0, 52, 52, 0, 0, 38, 0, 0, 7}, 
{7, 7, 7, 7, 0, 0, 38, 0, 0, 52, 52, 52, 52, 0, 0, 38, 0, 0}, 
{48, 0, 48, 48, 48, 48, 0, 48, 48, 48, 48, 48, 48, 0, 48, 48, 48, 48}, 
{48, 0, 48, 0, 0, 48, 0, 48, 0, 0, 0, 0, 48, 0, 48, 0, 0, 0}, 
{48, 0, 48, 48, 0, 48, 0, 48, 0, 48, 48, 0, 48, 0, 48, 48, 48, 0}, 
{48, 0, 0, 0, 0, 48, 0, 48, 0, 0, 48, 0, 48, 0, 0, 0, 48, 0}, 
{48, 48, 48, 48, 48, 48, 0, 48, 48, 48, 48, 0, 48, 48, 48, 48, 48, 0}};
int pattern4[PATTERN_SIZE][PATTERN_REPEAT] =
{{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 9, 9, 9, 9, 9, 9, 9, 9, 0, 0, 0, 9, 9, 9, 9, 9, 9}, 
{0, 9, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 9}, 
{0, 9, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 9}, 
{0, 9, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 9}, 
{0, 9, 0, 0, 9, 9, 9, 0, 0, 9, 0, 0, 9, 9, 9, 0, 0, 9}, 
{0, 9, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 9}, 
{0, 9, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 9}, 
{0, 9, 0, 0, 0, 0, 9, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 9}, 
{0, 9, 9, 9, 9, 9, 9, 0, 0, 0, 9, 9, 9, 9, 9, 9, 9, 9}, 
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 
{0, 0, 0, 0, 0, 60, 0, 0, 0, 7, 7, 7, 7, 0, 0, 0, 60, 0}, 
{0, 0, 0, 0, 60, 0, 0, 0, 7, 0, 0, 0, 0, 7, 0, 0, 0, 60}, 
{60, 0, 0, 60, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0}, 
{0, 60, 60, 0, 0, 0, 7, 0, 0, 0, 38, 38, 0, 0, 0, 7, 0, 0}, 
{0, 0, 0, 0, 0, 7, 0, 0, 0, 38, 0, 0, 38, 0, 0, 0, 7, 0}, 
{0, 0, 0, 0, 7, 0, 0, 0, 38, 0, 0, 0, 0, 38, 0, 0, 0, 7}, 
{7, 7, 7, 7, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0}};
int pattern5[PATTERN_SIZE][PATTERN_REPEAT] =
{{9, 63, 63, 63, 63, 63, 25, 63, 63, 63, 63, 63, 25, 63, 63, 63, 63, 63}, 
{25, 25, 63, 63, 63, 25, 25, 25, 63, 63, 63, 25, 25, 25, 63, 63, 63, 25}, 
{63, 25, 25, 63, 25, 25, 63, 25, 25, 63, 25, 25, 63, 25, 25, 63, 25, 25}, 
{63, 63, 25, 9, 25, 63, 63, 63, 25, 25, 25, 63, 63, 63, 25, 25, 25, 63}, 
{63, 63, 63, 25, 63, 63, 63, 63, 63, 25, 63, 63, 63, 63, 63, 25, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63}, 
{33, 33, 32, 32, 33, 37, 33, 32, 32, 32, 33, 33, 32, 32, 32, 33, 32, 32}, 
{48, 63, 63, 48, 63, 63, 48, 63, 63, 48, 63, 63, 48, 63, 63, 48, 63, 48}, 
{32, 48, 48, 48, 32, 32, 48, 48, 48, 32, 32, 32, 32, 48, 48, 48, 48, 48}, 
{32, 63, 63, 32, 63, 63, 32, 63, 63, 32, 63, 63, 32, 63, 63, 32, 63, 48}, 
{32, 37, 32, 32, 33, 33, 33, 32, 32, 32, 32, 32, 32, 32, 33, 32, 32, 32}, 
{63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 21, 63, 63, 63, 63, 63, 21, 63, 63, 63, 63, 63, 21, 63, 63}, 
{63, 63, 22, 22, 22, 63, 63, 63, 22, 22, 22, 63, 63, 63, 22, 22, 22, 63}, 
{63, 22, 22, 63, 22, 22, 63, 22, 22, 63, 22, 22, 63, 22, 22, 63, 22, 22}, 
{22, 22, 63, 63, 63, 22, 22, 22, 63, 63, 63, 22, 22, 22, 63, 63, 63, 21}, 
{22, 63, 63, 63, 63, 63, 22, 63, 63, 63, 63, 63, 22, 63, 63, 63, 63, 63}};
int pattern6[PATTERN_SIZE][PATTERN_REPEAT] =
{{63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 38, 38, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 38, 38, 38, 63, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 38, 38, 38, 38, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 38, 38, 38, 38, 38, 63, 38, 38, 38, 38, 38, 38}, 
{63, 63, 63, 63, 63, 63, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38}, 
{63, 63, 63, 63, 63, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 63}, 
{63, 38, 38, 38, 38, 38, 38, 38, 38, 63, 38, 38, 38, 38, 38, 38, 63, 63}, 
{38, 38, 38, 38, 38, 38, 38, 38, 63, 63, 63, 63, 38, 38, 38, 38, 63, 63}, 
{38, 38, 38, 38, 38, 38, 38, 38, 63, 63, 63, 63, 38, 38, 38, 38, 63, 63}, 
{63, 38, 38, 38, 38, 38, 38, 38, 38, 63, 38, 38, 38, 38, 38, 38, 63, 63}, 
{63, 63, 63, 63, 63, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 63}, 
{63, 63, 63, 63, 63, 63, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38, 38}, 
{63, 63, 63, 63, 63, 63, 38, 38, 38, 38, 38, 63, 38, 38, 38, 38, 38, 38}, 
{63, 63, 63, 63, 63, 63, 38, 38, 38, 38, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 38, 38, 38, 63, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 21, 37, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63}, 
{63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63}};
int pattern7[PATTERN_SIZE][PATTERN_REPEAT] =
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
int pattern8[PATTERN_SIZE][PATTERN_REPEAT] =
{{63, 63, 63, 63, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 63, 63, 63, 63}, 
{63, 63, 63, 63, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 63, 63, 63, 63}, 
{63, 63, 63, 33, 48, 48, 48, 32, 32, 32, 32, 32, 48, 48, 32, 63, 63, 63}, 
{63, 63, 63, 48, 48, 32, 63, 63, 63, 63, 63, 63, 32, 48, 32, 63, 63, 63}, 
{63, 63, 32, 48, 32, 63, 25, 25, 25, 25, 25, 25, 63, 32, 48, 32, 63, 63}, 
{63, 63, 48, 48, 36, 25, 25, 9, 9, 9, 9, 25, 25, 36, 48, 48, 63, 63}, 
{63, 32, 48, 32, 25, 25, 9, 9, 25, 25, 9, 9, 25, 25, 32, 48, 32, 63}, 
{63, 32, 48, 36, 25, 9, 9, 63, 63, 63, 63, 9, 9, 25, 36, 48, 32, 63}, 
{48, 48, 32, 37, 25, 9, 9, 63, 63, 63, 63, 9, 9, 25, 37, 36, 48, 48}, 
{48, 48, 32, 37, 25, 9, 9, 63, 63, 63, 63, 25, 9, 25, 37, 32, 48, 48}, 
{63, 32, 48, 32, 25, 9, 9, 63, 63, 63, 63, 9, 9, 25, 36, 48, 32, 63}, 
{63, 33, 48, 48, 25, 25, 9, 9, 25, 9, 9, 9, 25, 25, 32, 48, 33, 63}, 
{63, 63, 48, 48, 36, 25, 25, 9, 9, 9, 9, 25, 25, 36, 48, 48, 63, 63}, 
{63, 63, 32, 48, 32, 63, 25, 25, 25, 25, 25, 25, 63, 32, 48, 32, 63, 63}, 
{63, 63, 63, 32, 48, 32, 63, 63, 63, 63, 63, 63, 48, 48, 32, 63, 63, 63}, 
{63, 63, 63, 32, 48, 48, 48, 32, 32, 32, 33, 48, 48, 48, 37, 63, 63, 63}, 
{63, 63, 63, 63, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 63, 63, 63, 63}, 
{63, 63, 63, 63, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 63, 63, 63, 63}};
int pattern9[PATTERN_SIZE][PATTERN_REPEAT] =
{{48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48}, 
{48, 48, 48, 48, 48, 48, 49, 49, 49, 49, 49, 48, 48, 48, 48, 48, 48, 48}, 
{48, 48, 63, 63, 63, 63, 63, 18, 18, 18, 18, 63, 63, 63, 63, 63, 48, 48}, 
{48, 48, 63, 63, 63, 22, 22, 22, 22, 23, 22, 22, 22, 63, 63, 63, 48, 48}, 
{48, 48, 63, 63, 22, 22, 22, 22, 22, 22, 22, 22, 22, 22, 63, 63, 48, 48}, 
{48, 48, 63, 22, 22, 23, 22, 63, 63, 63, 63, 22, 22, 22, 22, 63, 49, 48}, 
{48, 49, 63, 22, 22, 22, 63, 63, 63, 63, 63, 63, 22, 22, 22, 18, 49, 48}, 
{48, 49, 18, 22, 22, 63, 63, 63, 63, 63, 63, 63, 63, 22, 23, 18, 49, 48}, 
{48, 49, 18, 22, 22, 63, 63, 63, 25, 25, 63, 63, 63, 22, 23, 18, 49, 48}, 
{48, 49, 18, 6, 22, 63, 63, 63, 25, 25, 63, 63, 63, 22, 22, 18, 49, 48}, 
{48, 33, 22, 22, 22, 63, 63, 63, 63, 63, 63, 63, 63, 22, 23, 18, 49, 48}, 
{48, 49, 63, 22, 22, 22, 63, 63, 63, 63, 63, 63, 22, 6, 22, 18, 49, 48}, 
{48, 48, 63, 22, 22, 22, 22, 63, 63, 63, 63, 22, 23, 22, 6, 63, 48, 48}, 
{48, 48, 63, 63, 22, 22, 6, 22, 22, 22, 22, 22, 6, 22, 63, 63, 48, 48}, 
{48, 48, 63, 63, 63, 22, 22, 23, 22, 22, 23, 22, 22, 63, 63, 63, 48, 48}, 
{48, 48, 63, 63, 63, 63, 18, 18, 18, 18, 18, 18, 63, 63, 63, 63, 48, 48}, 
{48, 48, 48, 48, 48, 49, 49, 49, 49, 49, 49, 49, 48, 48, 48, 48, 48, 48}, 
{48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48}};
