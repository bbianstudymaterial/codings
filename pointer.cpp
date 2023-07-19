#include<iostream>
using namespace std;

class ary{
    int *p;
    int size;
    public:
     void setSize(int n){
        this->size = n;
     }
     void create(){
        p = new int(size);
     }
     void insertData(){
        for(int i=0;i<size;i++){
            cout<<"Enter Element "<<i<<" : ";
            cin>>p[i];
        }
     }
     void Display(){
        cout<<endl<<endl;
        for(int i=0;i<size;i++){
            cout<<"Element "<<i<<" : "<<p[i]<<endl;
        }
     }
};

int main(){
    ary arr;
    arr.setSize(5);
    arr.create();
    arr.insertData();
    arr.Display();
    return 0;
}