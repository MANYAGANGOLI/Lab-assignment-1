#include<stdio.h>
int main() {
    int arr[10] ;
    int sum=0, average;

  printf("Enter a number: \n");
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<10;i++){
        sum += arr[i];
    }
    average = sum/10;
    printf("The average of given numbers : %d", average);

    return 0;
}
