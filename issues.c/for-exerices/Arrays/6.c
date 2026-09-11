#include <stdio.h>
float average_array(int *arr,int size){
int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
 return sum/size;
}
int main(void){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    float average=average_array(arr,size);
    printf("The average of the array is: %.2f\n",average);
    return 0;
}
