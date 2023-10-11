// Author : S Nikhileswara Rao
#include <stdio.h>

int main() {
    int a[10] = {1,9,3,4,6,5,7,8,2,10};
    int i, j,temp;
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            if (a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i=0;i<10;i++){
        printf("%d\n", a[i]);
    }

    return 0;
}
