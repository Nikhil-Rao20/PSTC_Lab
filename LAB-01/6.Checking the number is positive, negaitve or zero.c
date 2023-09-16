// Program Name : Checking the number is positive, negaitve or zero
// Author : S Nikhileswara Rao
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number :");
	scanf("%d", &n);
	if (n>0){
		printf("%d is positive number\n",n);
	}
	else if (n<0){
		printf("%d is negative number\n",n);
	}
	else{
		printf("%d is equal to zero\n",n);
	}
}
