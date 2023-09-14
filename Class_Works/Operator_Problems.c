// Author : S Nikhileswara Rao
#include <stdio.h>

int main() {
    int a=0, b=1, c=-1, r1, r2, r3, r4, r5, r6, r7;
    float x=2.5, y=0.0;
    r1 = a+=b-=c*=10;
    r2 = --a * (5+b)/2 - c++ *b;
    r3 = a<b && c<b;
    r4 = b+c || !a;
    r5 = a<=10 && x>=1 &&b;
    r6 = x*y < a+b ||c;
    r7 = (x>y) + !a ||c++;
    printf("Result 01 : %d\n", r1);
    printf("Result 02 : %d\n", r2);
    printf("Result 03 : %d\n", r3);
    printf("Result 04 : %d\n", r4);
    printf("Result 05 : %d\n", r5);
    printf("Result 06 : %d\n", r6);
    printf("Result 07 : %d\n", r7);
    

    return 0;
}
