#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef class student{
     public:
  string name_student;
    int age;
    int email;
     public:
     bool setage(int new_age){
         if(new_age<=0){
             return false;
         }
         else{
             age=new_age;
             return true;
         }
     }
    int getage(){
        return age;
    }
 }sut;

int main() {
    
    sut student1;
    student1.name_student="ahmad";
    student1.age=16;
    if(student1.setage(8)){
        cout<<"the set is work";
    }
    else{
        cout<<"please enter a postive number";
    }

    return 0;
}