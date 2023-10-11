// Author : S Nikhileswara Rao
#include <stdio.h>

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int flag=0;
    int i;
    int key=13;
    for (i=0;i<10;i++){
        if (key==a[i]){
            flag=1;
            break;
        }
    }
    if (flag==0)
    printf("Element not found");
    else
    printf("Element found!");

    return 0;
}
