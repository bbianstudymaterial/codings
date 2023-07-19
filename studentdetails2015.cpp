#include<iostream>
using namespace std;

class student{
    char name[20];
    int rollno;
    public:
     void inputData(){
        cout<<"Enter your Name: ";
        cin>>this->name;
        cout<<"Enter your Roll No. : ";
        cin>>this->rollno;
     }
     void display(){
        cout<<"\n\n";
        cout<<"Name: "<<name<<" Roll No.: "<<rollno<<endl;
     }
};

int main(){
    student s1,s2,s3;
    s1.inputData();
    s2.inputData();
    s3.inputData();
    s1.display();
    s2.display();
    s3.display();
}