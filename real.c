#include <stdio.h>
int main(){
    int a = 10;
    float b =3.142;
    char c = 'A';
    printf("the value of a is: %d\n\n", a);
    printf("the value of b is: %.2f\n\n", b);
    printf("the value of c is: %c", c);
    //   printf("Welcome to C programming");

    printf("size of integer = %d bytes\n", sizeof(a));
     printf("size of float = %d bytes\n", sizeof(b));
     printf("size of char = %d bytes\n", sizeof(c));
     
    return 0;
}