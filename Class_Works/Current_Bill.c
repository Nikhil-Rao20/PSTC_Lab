// Author : S Nikhileswara Rao and M Sai Manikanta Eswar
#include <stdio.h>

int main() {
    int unit, past_read, present_read;
    float total;
    printf("Enter the past and present reading : ");
    scanf("%d %d", &past_read, &present_read);
    if (past_read < present_read){
        unit = present_read - past_read;
    }
    else {
        printf("ERROR: Please enter the correct values of the readings");
    }
    if (unit <= 100){
        total = 2.50 * unit;
    }
    else if (unit > 100 && unit <= 200){
        total = 5.50 * unit;
    }
    else if (unit > 200 && unit <= 300){
        total = 6.50 * unit;
    }
    else if (unit > 300 && unit <= 400){
        total = 7.50 * unit;
    }
    else if (unit > 400 && unit <= 500){
        total = 8.50 * unit;
    }
    else if (unit > 500){
        total = 9.50 * unit;
    }
    printf("The Total bill for this month is : %f", total);
    return 0;
}
