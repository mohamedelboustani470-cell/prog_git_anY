#include <iostream>
#include<vector>
using namespace std;
int count_even(vector<int>&numbers){
    int lenght=numbers.size();
    int count=0;
    for(int i=0;i<lenght;i++){
        if(numbers[i]%2==0){
           cout<<numbers[i]<< "  is even"<<" in range"<<" "<<i<<endl;
            count=count+1;
        }
    }
    return count;
}

int main() {
    vector<int>numbers={1,78,9856,98,6,5,4,19098754,676};
    cout<<count_even(numbers);
    return 0;
}