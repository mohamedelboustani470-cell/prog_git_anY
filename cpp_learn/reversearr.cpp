#include <iostream>
#include<vector>
using namespace std;
 void revers(vector<int>&nums){// 1 2 3 4 5 6 7
     // 
     int lenght=nums.size();
     for(int i=0;i<lenght/2;i++){
         int temp=nums[i];
         nums[i]=nums[lenght-i-1];
         nums[lenght-i-1]=temp;
     }
 }

int main() {
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    revers(nums);
    for(int element:nums){
        cout<<element<<" ";
    }

    return 0;
}