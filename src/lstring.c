#include "../include/lstring.h"

size_t lsize(const char *str)
{
    size_t i = 0;
    while (*str != '\0')
    {
        i++;
        str++;
    }
    return i;
}

void lstr_cpy(char *str1, const char *str2, int offset, int length, int option)
{
    size_t i = lsize(str2);
    int j = offset;
    int k = 0;
    if (option == 1)
    {
        j = 0;
        offset = 0;
        length = i;
    }
    else if (option == 2)
    {
        length = i - offset;
    }

    while (j < offset + length)
    {
        str1[k] = str2[j];
        j++;
        k++;
    }
    str1[i + 1] = '\0';
}

lstr_t *str_init(const char *str)
{
    lstr_t *pstr = (lstr_t *)malloc(sizeof(lstr_t));
    if (!pstr)
    {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    pstr->size = lsize(str);
    pstr->buffer = (char *)malloc(pstr->size + 1);
    lstr_cpy(pstr->buffer, str, 3, 4, 3);
    return pstr;
}
