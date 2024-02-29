/*
* file:    string.h
* auther:  Manal Nabil Donia
*
* Created on July   3,  2023,  3:45 AM
 */
#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

int mm(intx);

void* mymemset(void* str, char c, char n);   //1

void* mymemcpy(void* dest, const void* src, char n);  //2

void* mymemchr(const void* str, char c, char n);   //3

char mymemcmp(const void* str1, const void* str2, char n);   //4

void* mymemmove(void* str1, const void* str2, char n);   //5

char* mystrcat(char* dest, const char* src);   //6

char* mystrncat(char* dest, const char* src, char n);   //7

char* mystrchr(const char* str, char c);    //8

char mystrcmp(const char* str1, const char* str2);  //9

char mystrncmp(const char* str1, const char* str2, char n);   //10

int mystrcoll(const char *str1, const char *str2);    //#include<locale>      setlocale(lc-All,"   ")      strcmp

char* mystrcpy(char* dest, const char* src);   //12

char* mystrncpy(char* dest, const char* src, char n);   //13

char mystrcspn(const char* str1, const char* str2);    //14

//char* strerror(int errnum);   //15

char mystrlen(const char* str);   //16

char* mystrpbrk(const char* str1, const char* str2);   //17

char* mystrrchr(const char* str, int c);    //18

char mystrspn(const char* str1, const char* str2);   //19

char* mystrstr(const char* haystack, const char* needle);   //20

char* mystrtok(char* str, char delim);   //21

char mystrxfrm(char* dest, const char* src, char n);   //22




#endif // STRING_H_INCLUDED
