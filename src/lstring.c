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
    lstr_cpy(pstr->buffer, str, 3, 4, 1);
    return pstr;
}

// Function to concatenate ch2 string to ch1 string

lstr_t *Lstrcat(char *ch1, const char *ch2)
{
    // Find the end of the ch1 string
    lstr_t *chF = (lstr_t *)malloc(sizeof(lstr_t));

    if (!chF)
    {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    size_t lnch1 = lsize(ch1);
    size_t lnch2 = lsize(ch2);

    chF->size = lnch1 + lnch2;

    chF->buffer = (char *)malloc(chF->size + 1);
    if (!chF->buffer)
    {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    for (size_t i = 0; i < lnch1; i++)
    {
        chF->buffer[i] = ch1[i];
    }

    for (size_t i = 0; i < lnch2; i++)
    {
        chF->buffer[lnch1 + i] = ch2[i];
    }

    chF->buffer[chF->size] = '\0';

    return chF;
}