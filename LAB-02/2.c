#include<stdio.h>
void main(){
	int i, num, fact;
	fact = 1;
	printf("Enter the number : ");
	scanf("%d", &num);
	for (i = 2; i<=num; ++i){
		fact = fact * i;
	}
	printf("%d", fact);
}
