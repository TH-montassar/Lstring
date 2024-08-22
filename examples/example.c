#include <stdlib.h>
#include <stdio.h>
#include "../include/lstring.h" //to be optimized
#include "../src/lstring.c"     // to be optimized

int main(void)
{
    lstr_t *s1 = str_init("Hello Lstring");
    printf("It's: %s \n", s1->buffer);
    printf("It's: %s \n", s1->buffer);
}