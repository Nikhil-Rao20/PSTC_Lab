// Author : S Nikhileswara Rao
#include <stdio.h>

int main() {
    float pstc, eng, ic, beee, maths, total, percentage;
    char grade;
    printf("Enter the marks in PSTC : ");
    scanf("%f", &pstc);
    printf("Enter the marks in English : ");
    scanf("%f", &eng);
    printf("Enter the marks in IC : ");
    scanf("%f", &ic);
    printf("Enter the marks in BEEE : ");
    scanf("%f", &beee);
    printf("Enter the marks in Maths : ");
    scanf("%f", &maths);
    
    if (pstc>=0 && eng>=0 && ic>=0 && beee>=0 && maths>=0){
        if (pstc>35 && eng>35 && ic>35 && beee>35 && maths>35){
            total = pstc+eng+ic+beee+maths;
            printf("\n\nYour total marks in this exam : %.2f", total);
            percentage = total/5;
            printf("\nPercentage : %.2f", percentage);
            if (percentage>=90){
                grade = 'A';
            }
            else if (percentage>=80 && percentage<90){
                grade = 'B';
            }
            else if (percentage>=70 && percentage<80){
                grade = 'C';
            }
            else if (percentage>=60 && percentage<70){
                grade = 'D';
            }
            else if (percentage<60){
                grade = 'E';
            }
            printf("\nYou secured %c Grade in this exam", grade);
        }
        
        else{
            printf("Idiot you have failed the exam");
        }
        
    }
    else{
        printf("Please enter positive marks!");
    }
    

    return 0;
}
