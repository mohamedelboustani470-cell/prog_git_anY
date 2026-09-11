#include <stdio.h>
#include <string.h>

void count_repeat(int *array,int size,int val){
    int count=0;
 for(int i=0;i<size;i++){
      printf("the check value is arr[%i]: %i \n",i ,array[i]);
      if(array[i]==val){
        count++;
       }
    }
 printf("the count of the value %i is %i \n",val,count);
}               


   



int main(){
  int array[]={3,4,6,8,9,3,3,4,3};
  count_repeat(array,9,3);
  return 0;
}
