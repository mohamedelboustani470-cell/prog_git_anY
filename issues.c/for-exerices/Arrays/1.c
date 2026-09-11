#include <stdio.h>
#include <string.h>
 int find_min(int *arr,int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];

        }

    }
    return min;
 }


int main(void){
    int arr[]={2,3,4};
    int size=3;
    printf("the min of the arr is %i \n",find_min(arr,size));
    return 0;   
}
