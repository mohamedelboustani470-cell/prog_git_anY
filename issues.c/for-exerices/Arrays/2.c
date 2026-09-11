#include <stdio.h>
#include <string.h>
int find_max(int *arr,int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        return max;
    }

 }
int main(){

    int arr[]={2,3,4};
    int size=3;
    printf("the min of the arr is %i \n",find_min(arr,size));
    return 0;
}
