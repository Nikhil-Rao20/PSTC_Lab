#include<stdio.h>
#include<math.h>
int main(){
	float num1, num2, result;
	int choice;
	printf("Enter the first number : ");
	scanf("%f", &num1);
	printf("Enter the second number : ");
	scanf("%f", &num2);
	
	//Giving Note to the User
	printf("Select an operation \n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Modulus\n");
	printf("5.Division\n");
	printf("6.Power\n");
	
	printf("Enter you choice: \n");
	scanf("%d", &choice);
	
	switch (choice) {
		case 1:
			result = num1+num2;
			printf("The addition of %f and %f is %f\n", num1, num2, result);
			break;
		case 2:
			result = num1-num2;
			printf("The subtraction of %f and %f is %f\n", num1, num2, result);
			break;
		case 3:
			result = num1*num2;
			printf("The multiplication of %f and %f is %f\n", num1, num2, result);
			break;
		case 4:
			result = fmod(num1,num2);
			printf("The modulus of %f and %f is %f\n", num1, num2, result);
			break;
		case 5:
			if (num2!=0){
				result = num1/num2;
				printf("The division of %f and %f is %f\n", num1, num2, result);
				break;
			}
			else{
				printf("Division with Zero is not defined, please try with a different number\n");
			}
		case 6:
			result = pow(num1, num2);
			printf("%f raised to the power %f is %f\n", num1, num2, result);
			break;
			
		default:
			printf("Invalid Choice\n");
			break;
	}
	return 0;

}
