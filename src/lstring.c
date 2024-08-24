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

/**
 * @brief Compare two strings.
 *
 * This function compares two strings character by character. It returns an integer
 * indicating the difference between the ASCII values of the first unmatched characters.
 * If the first string is greater, it returns a positive value; if the second string is
 * greater, it returns a negative value. If both strings are equal, it returns 0.
 *
 * @param[in] str1 The first string to be compared.
 * @param[in] str2 The second string to be compared.
 *
 * @return The difference between the ASCII values of the first differing characters.
 *
 * @retval 0 If the two strings are equal.
 * @retval >0 If the first string is greater than the second string.
 * @retval <0 If the first string is less than the second string.
 */

int Lstr_cmp(const lstr_t *str1 , const lstr_t *str2){

    while (*str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return (*str1 - *str2);

}