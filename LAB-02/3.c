#include<stdio.h>

int main(){
	int num,rev=0,temp,i;
	printf("Enter a number : ");
	scanf("%d", &num);
	temp = num;
	while( num>0 ) {
      i = num%10;
      rev=(rev*10)+i;
      num = num/10;
    }
	if (temp==rev){
		printf("Given nummber %d is palindrome", temp);
	}
	else{
		printf("Given number %d is not a palindrome", temp);
	}
   	
}
