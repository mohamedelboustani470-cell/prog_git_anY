#include <iostream>
#include<vector>
using namespace std;
int find_max(vector<int>&nums){ // 2 4537
    int max=nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    return max;
 
}

int main() {
    vector<int>nums={2,5,8,9,10,1897,98756};
    std::cout << "the max is "<< find_max(nums);
    return 0;
}