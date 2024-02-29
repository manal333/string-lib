/*
* file:    string.c
* auther:  Manal Nabil Donia
*
* Created on July   3,  2023,  3:45 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define NULL ((void*)0)

void* mymemset(void* str, char c, char n) {
    char* temp = str;

    if (temp == ((void*)0))
    {
        return ((void*)0);
    }
    else
    {
        while (n--)
            *temp++ = c;
    }
    return str;
}

void* mymemchr(const void* str, char c, char n) {
    char* temp = str;

    while (*temp != c && n--) {
        temp++;
    }
    if (*temp == c) {
        return temp;
    }
    else {
        return ((void*)0);
    }

}

char* mystrchr(const char* str, char c) {

    while (*str != c && *str != '\0') {
        str++;
    }
    if (*str == c) {
        return str;
    }
    else {
        return ((void*)0);
    }
}

char* mystrrchr(const char* str, int c) {
    char* temp = ((void*)0);

    if (str == ((void*)0))
        return ((void*)0);
    else
    {
        while (*str++)
        {
            if (*str == c)
                temp = str;
        }

    }
    return temp;
}

void* mymemcpy(void* dest, const void* src, char n) {
    char* tempdest = dest;
    char* tempsrc = src;

    if (tempdest == ((void*)0) || tempsrc == ((void*)0))
    {
        return ((void*)0);
    }
    else if (tempdest == tempsrc)
    {
        return ((void*)0);
    }
    else
    {
        while (n--)
        {
            *tempdest++ = *tempsrc++;
        }
    }
    return dest;
}

char* mystrcpy(char* dest, const char* src) {
    char* tempdest = dest;
    char* tempsrc = src;

    if (tempdest == ((void*)0) || tempsrc == ((void*)0))
    {
        return 0;
    }
    else if (tempdest == tempsrc)
    {
        return 1;
    }
    else
    {
        while (*tempsrc != '\0')
        {
            *tempdest++ = *tempsrc++;
        }
    }
    return dest;
}

char* mystrncpy(char* dest, const char* src, char n) {
    char* tempdest = dest;
    char* tempsrc = src;

    if (tempdest == ((void*)0) || tempsrc == ((void*)0))
    {
        return ((void*)0);
    }
    else if (tempdest == tempsrc)
    {
        return ((void*)0);
    }
    else
    {
        while ((*tempsrc != '\0') && n--)
        {
            *tempdest++ = *tempsrc++;
        }
    }
    return dest;
}

void* mymemmove(void* str1, const void* str2, char n) {
    char* temp1 = str1;
    char* temp2 = str2;
    char* temp3 = (char*)malloc(sizeof(char) * n);

    for (int i = 0; i < n; i++)
    {
        *(temp3 + i) = *(temp2 + i);
    }
    for (int i = 0; i < n; i++)
    {
        *(temp1 + i) = *(temp3 + i);
    }
    free(temp3);

    return str1;
}

char mymemcmp(const void* str1, const void* str2, char n) {
    char* temp1 = str1;
    char* temp2 = str2;
    char ret = 0;

    if (str1 == str2)
        ret = 0;
    else
        while (n--)
        {
            if (*temp1 != *temp2) {
                if (*temp1 > *temp2)
                {
                    ret = (*temp1 > *temp2) ? 1 : -1;
                    break;
                }
                temp1++;
                temp2++;
            }
        }
            return ret;

}

char mystrcmp(const char* str1, const char* str2) {
    char* temp1 = str1;
    char* temp2 = str2;
    char ret = 0;

    if (str1 == str2)
        ret = 0;
    else
        while (temp1 != '\0' || temp2 != '\0')
        {
            if (*temp1 != *temp2) {
                if (*temp1 > *temp2)
                {
                    ret = (*temp1 > *temp2) ? 1 : -1;
                    break;
                }
                temp1++;
                temp2++;
            }
            return ret;
        }
}

char mystrncmp(const char* str1, const char* str2, char n) {
    char* temp1 = str1;
    char* temp2 = str2;
    char ret = 0;

    if (str1 == str2)
        ret = 0;
    else
        while ((temp1 != '\0' || temp2 != '\0') && n--)
        {
            if (*temp1 != *temp2) {
                if (*temp1 > *temp2)
                {
                    ret = (*temp1 > *temp2) ? 1 : -1;
                    break;
                }
                temp1++;
                temp2++;
            }
            return ret;
        }
}

int mystrcoll(const char* str1, const char* str2) {
    char* temp1 = str1;
    char* temp2 = str2;
    char ret = 0;

    if (str1 == str2)
        ret = 0;
    else
        while (temp1 != '\0' || temp2 != '\0')
        {
            if (*temp1 != *temp2) {
                if (*temp1 > *temp2)
                {
                    ret = (*temp1 > *temp2) ? 1 : -1;
                    break;
                }
                temp1++;
                temp2++;
            }
            return ret;
        }

}

char* mystrcat(char* dest, const char* src) {

    char* temp = dest;

    if (dest == ((void*)0) && src == ((void*)0)) {
        return ((void*)0);
    }
    else
    {
        while (*dest != '\0')
        {
            *temp++ = *dest++;
        }
        while (*src != '\0')
        {
            *temp++ = *src++;
        }
        *temp = '\0';
    }

    return dest;

}

char* mystrncat(char* dest, const char* src, char n) {
    char* temp = dest;

    if (dest == ((void*)0) && src == ((void*)0)) {
        return ((void*)0);
    }
    else
    {
        while (*dest != '\0')
        {
            *temp++ = *dest++;
        }
        while (n--)
        {
            *temp++ = *src++;
        }
    }
    *temp = '\0';

    return dest;

}

char mystrcspn(const char* str1, const char* str2) {
    char* temp1 = str1;
    char* temp2 = str2;
    char len = 0;

    if ((temp1 == ((void*)0)) || (temp2 == ((void*)0)))
        return len;

    else
        while (*temp1 != '\0')
        {
            if (strchr(temp2, *temp1))
                return len;
            else
                temp1++;
                len++;
        }
    return len;
}

char* mystrpbrk(const char* str1, const char* str2) {
    char* temp1 = str1;
    char* temp2 = str2;

    if ((temp1 == ((void*)0)) || (temp2 == ((void*)0)))
        return ((void*)0);

    else
        while (*temp1 != '\0')
        {
            if (strchr(temp2, *temp1))
                return temp1;
            else
                temp1++;
        }
    return temp1;
}

char mystrspn(const char* str1, const char* str2) {
    char num_mat = 0;

    if (str1 == ((void*)0) || str2 == ((void*)0))
        return num_mat;
    else
    {
        while (strchr(str2,*str1++)&&(*str1!='\0'))
        {
            num_mat++;
        }
    }

    return num_mat;
}

char mystrxfrm(char* dest, const char* src, char n) {

    char  len = strlen(src);

    while (n--)
    {
        *dest++ = *src++;
    }

    return len;

}

char* mystrtok(char* str, char delim) {

 /*  if (strchr(str, delim))

    else
        return ((void*)0);*/


}

char* mystrstr(const char* haystack, const char* needle) {
    char len = strlen(needle);

    if ((haystack == ((void*)0)))
        return ((void*)0);
    else
    {
        while (*haystack!='\0')
        {
            if (!memcmp(haystack, needle, len))
                return haystack;
            else
            {
                haystack++;
            }
        }
    }

}

char mystrlen(const char* str) {
    char len = 0;
    char* temp = str;

    if (temp == ((void*)0))
        len = 0;
    else
        while (*temp != '\0')
        {
            len++;
            temp++;
        }
    return len;
}

