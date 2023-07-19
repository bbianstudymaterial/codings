#include<iostream>
#include<fstream>
using namespace std;
class Student{
    public:
     string name;
     int roll;
     string branch;
     void inputData(){
        cout<<"Enter your Name: ";
        cin>>name;
        cout<<"Enter your Roll: ";
        cin>>roll;
        cout<<"Enter your branch: ";
        cin>>branch;
     }
     friend ofstream & operator<<(ofstream &ofs, Student &s);
};
ofstream & operator<<(ofstream &ofs, Student &s){
        ofs<<s.name<<endl;
        ofs<<s.roll<<endl;
        ofs<<s.branch<<endl;
        return ofs;
}
int main(){
    Student s1;
    s1.inputData();
    ofstream ofs("New.txt",ios::trunc);
    ofs<<s1;
    ofs.close();
    
}