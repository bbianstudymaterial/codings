//2016 --> author Monojit
#include<iostream>
using namespace std;

class rectangle{
    float length;
    float breadth;
    public:
     rectangle(){
        this->length=0;
        this->breadth=0;
     }
     rectangle(int l, int b){
        this->length=l;
        this->breadth=b;
     }
     float area(){
        return length * breadth;
     }
     void isSq(){
           (length==breadth)? cout<<"It is a square.\n": cout<<"It is not a square\n";
     }
};

int main(){
    int l,b;
    cout<<"Enter the length: ";
    cin>>l;
    cout<<"Enter the breadth: ";
    cin>>b;
    rectangle r1(l,b);
    cout<<"The area is: "<<r1.area()<<endl;
    r1.isSq();
    return 0;
}