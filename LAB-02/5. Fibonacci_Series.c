// Author : S Nikhileswara Rao
#include<stdio.h>

int main(){
	int n, i=1,j=1, a=0, sum;
	printf("Enter a number for Fibonacci Series: ");
	scanf("%d", &n);
	printf("The Fibonacci series :\n%d\n%d\n", i,j);
	while (a<n-2){
		sum = i+j;
		i = j;
		j = sum;
		a++;
		printf("%d\n", sum);
	}
}
