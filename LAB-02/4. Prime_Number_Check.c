// Author : M Sai Manikanta Eswar
#include<stdio.h>
void main(){
	int num, i, no;
	printf("Enter the number : ");
	scanf("%d", &num);
	for (i = 1; i<= num; ++i){
		if (num % i == 0){
			no += 1;
		}
	}
	if (no < 3){
		printf("The given number %d is a prime number", num);
	}
	else {
		printf("The given number %d is NOT a prime number", num);
	}

}
