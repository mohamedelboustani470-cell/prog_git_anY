#include <stdio.h>
int main(void){
    int array[8]={12,17,16,1,9,7,4,5};
    //int sort-array(int *tab,int size)
    for(int i=0;i<8;i++){
    for(int j= 0;j<7;j++){
        if(array[j]>array[j+1]){
            int temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }

            }
        }
    for(int x=0;x<8;x++){
    printf("%i ",array[x]);
    }
    return 0;
    }
    int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
int indyxe1=0;
int indyxe2=0;
    for(int i=0;i<numsSize-1;i++){
        for(int j=0;j<numsSize-1;j++){
            if(nums[i]+nums[j]==target){
                indyxe1=i;
                indyxe2=j;
                break;

            }
        }
    }
    int returnSize = {index1, index2};
    return returnSize;
    
}
for(
    
)