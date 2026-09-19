#include <iostream>
using namespace std;
    void buble_sort(int *arr,int size){
        int temp;
        for( int i=0;i<size-1;i++){
            for(int j=0;j<size-1;j++){
            if(arr[j+1]<arr[j]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                
            }
            }
        }
    }
int main() {
    int arr[7]={2,7,8,1,1786,65,2537};
    int size=7;
    buble_sort(arr,size);
    for(int j=0;j<size;j++){
        
        cout<<arr[j]<<" ";
    }
    return 0;
}