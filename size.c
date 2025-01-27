#define SIZEOF(num) (char *) (&num + 1) - (char *)(&num)
#include<stdio.h>
int main()
{
    int i;
    char ch;
    float f;
    double d;
    short int s;
    unsigned long int u;
    long int l;
    printf("Size of int : %zu\n", SIZEOF(i));
    printf("Size of char : %zu\n", SIZEOF(ch));
    printf("Size of float : %zu\n", SIZEOF(f));
    printf("Size of double : %zu\n", SIZEOF(d));
    printf("Size of short int : %zu\n", SIZEOF(s));
    printf("Size of unsigned long int : %zu\n", SIZEOF(u));
    printf("Size of long int : %zu\n", SIZEOF(l));
}
