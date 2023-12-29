#pragma once
#include <stdint.h>

typedef struct mystruct* mystruct_t;
mystruct_t makestruct(uint8_t a, uint8_t b, uint8_t c);
void printstruct(mystruct_t m);