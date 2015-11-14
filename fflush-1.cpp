/*
123abc↙
a = 123, c = a
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    char c;
   
    scanf("%d", &a);
    c = getchar();
    printf("a = %d, c = %c \n", a, c);
    return 0;
}
