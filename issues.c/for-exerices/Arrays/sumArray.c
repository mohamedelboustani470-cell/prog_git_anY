



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
// exercice 1: Write a function that takes a string as input and returns the string reversed. The function should not use any built-in functions for reversing the string.
//char *flip_string(char *str){
    // char *flip=str;
    // for(int i=0;i<(strlen(str))/2;i++){

            // char temp=*(str+i) ;
        //    *(str+i)=*(str+strlen(str)-1-i);
        //    *(str+strlen(str)-1-i)=temp;

        //  }
// return flip;
    //}
// exercice 2: Write a function that takes an array of integers and its size as input, and returns the maximum and minimum values in the array. The function should return a struct containing the maximum and minimum values.
// typedef struct{
    // int max;
   // int min;
//}final;
    //final sort_array(int *tab,int size){
    // for(int i=0;i<size-1;i++){
    //for(int j=0;j<size-1-i;j++){
    //if(tab[j]>tab[j+1]){
            //int temp=tab[j];
            //tab[j]=tab[j+1];
            //tab[j+1]=temp;
        //}

            //}
        //}
        //final result;
        //result.max=tab[size-1];
        //result.min=tab[0];
//return result;
    }
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    int *ans=malloc(2*numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
        ans[i]=nums[i];
        ans[i+numsSize]=nums[numsSize-i-1];
    }
         *returnSize = 2*numsSize;
           return ans;
}       





// int main(void){
    //  int tab[8]={12,17,16,1,9,7,4,5};
    // int size=sizeof(tab)/sizeof(tab[0]);
// char str[]="hello";
// printf(" the flip: %s",flip_string(str));
//   final x=sort_array(tab,size);
//    printf(" max is %i | min is %i\n",x.max,x.min);
int nums[5] = {1, 2, 3, 4, 5};

int numsSize = sizeof(nums) / sizeof(nums[0]);

int returnSize;

int *result = concatWithReverse(nums, numsSize, &returnSize);

for (int i = 0; i < returnSize; i++)
{
    printf("%d ", result[i]);
}

return 0;

