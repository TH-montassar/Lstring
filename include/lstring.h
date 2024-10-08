#ifndef LSTRING_H
#define LSTRING_H

#include <stdlib.h>
#include <stdio.h>

struct lstr
{
    char *buffer;
    size_t size;
};
enum lstrOption
{
    LSTR_ALL = 1,
    LSTR_ALL_FRPOM_OFFSET = 2,
    LSTR_SUBSTR = 3

};

typedef struct lstr lstr_t;

size_t lsize(const char *str);
void lstr_cpy(char *str1, const char *str2, int offset, int length, int option);
lstr_t *lstr_init(const char *str);

#endif // LSTRING_H
