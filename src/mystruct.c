#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "mystruct.h"

struct mystruct {
    uint8_t a;
    uint8_t b;
    uint8_t c;
};

mystruct_t makestruct(uint8_t a, uint8_t b, uint8_t c)
{
    mystruct_t m = malloc(sizeof(struct mystruct));
    m->a = a;
    m->b = b;
    m->c = c;
    return m;
}

void printstruct(mystruct_t m)
{
    printf("a: %d, b: %d, c: %d", m->a, m->b, m->c);
}