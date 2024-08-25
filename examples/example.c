#include <stdlib.h>
#include <stdio.h>
#include "../include/lstring.h" //to be optimized
#include "../src/lstring.c"     // to be optimized

int main(void)
{
    lstr_t *s1 = str_init("Hello Lstring");
    printf("test tr_inittLstrcat:\t It's: %s \n", s1->buffer);

    lstr_t *ch2 = str_init(" montassar!");
    // Concatenate ch2 to ch1
    lstr_t *strconcat = Lstrcat(s1->buffer, ch2->buffer);
    printf("final str : %s\n", strconcat->buffer);

    // Print the result
    // printf("testLstrcat: \t %s\n");
}