#include <stdio.h>
int suma_array(int *arr, int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(void){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=suma_array(arr,size);
    printf("The sum of the array is: %d\n",sum);
    return 0;
}