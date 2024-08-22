#include <stdlib.h>
#include <stdio.h>
#include "../include/lstring.h" //to be optimized
#include "../src/lstring.c"     // to be optimized

int main(void)
{
    lstr_t *s1 = str_init("Hello Lstring");
    printf("test tr_inittLstrcat:\t It's: %s \n", s1->buffer);

    const char *ch2 = " Lstring!";

    // Concatenate ch2 to ch1
    Lstrcat(s1->buffer, ch2);

    // Print the result
    printf("testLstrcat: \t %s\n", s1->buffer);
}