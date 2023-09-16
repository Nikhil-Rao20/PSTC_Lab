// Program name : Check for the sqaure root
// Author : S Nikhileswara Rao
#include<stdio.h>
#include<math.h>
int main(){
	int c;
	printf("Enter a number :");
	scanf("%d", &c);
	double sqrtnum = sqrt(c);
	if (sqrtnum == (int)sqrtnum){
		printf("%d is a perfect square\n",c);
	}
	else{
		printf("%d is not a perfect square\n",c);	
	}
}
