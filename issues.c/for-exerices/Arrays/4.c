#include <stdio.h>
#include <stdlib.h>
int *revers_array(int *array,int size,int *returnsize){
      int *result=malloc(size*sizeof(int));                                           //7 8  5 3
    for(int i=0;i<size;i++){
        result[i]=array[size-1-i];
    }
     *returnsize=size;
    return result;
}
int main(void){
    int arr[]={2,3,4};
    int size=3;
    int returnsize;
    int *result=revers_array(arr,size,&returnsize);
    for(int i=0;i<returnsize;i++){
        printf("%i ",result[i]);
    }
    free(result);
    return 0;   
}