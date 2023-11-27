//BUBBLE SORT
#include<stdio.h>
int main() {
    int arr[] = {212,587,45,78,96};
    int stop = 5;
    for (int i = 0; i < stop-1; i++) {
        for (int j = 0; j < stop-1-i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    }
    for(int i=0;i<stop;i++){
        printf("%d ",arr[i]);
    }
}
