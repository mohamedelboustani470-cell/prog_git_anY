#include <iostream>
using namespace std;
   class rectangle{
    private:
    float length;
    float width;
    public:
    void setlengwid(float new_length,float new_width ){
        if(new_length<=0 && new_width<=0){
            cout<<"error, please enter a postive number \n";
    }
    else{
        length=new_length;
        width=new_width;
    }
    }
    float getarea(){
    return length*width;
    }
    
 };

int main() {
   rectangle rectangle1;
    
    int new_leng,new_wid;
    cout<<"enter the new length \n"<<"enter the new width"<<endl;
    cin>>new_leng>>new_wid;
    rectangle1.setlengwid(new_leng,new_wid);
    cout << "the area of rectangle 1 is :"<<" "<<rectangle1.getarea();

    return 0;
}