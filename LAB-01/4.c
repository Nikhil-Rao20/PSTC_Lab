// Program name : Swapping numbers without third variable
//  Author : S Nikhileswara Rao
#include<stdio.h>
int main(){
	int a=10, b=20;
	printf("The Initial values of the variables :\n");
	printf("      a = %d\n",a);
	printf("      b = %d\n",b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("The final values of the variables :\n");
	printf("      a = %d\n",a);
	printf("      b = %d\n",b);
	return 0;
}
