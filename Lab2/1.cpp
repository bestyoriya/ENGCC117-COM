#include <stdio.h>

int main()
{
    char str1[] = {'H', 'e', 'l', 'l', 'o'};
    char str2[] = {'H', 'e', '\0', 'l', 'l', 'o'};
    char str3[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    return 0;
}//end function
