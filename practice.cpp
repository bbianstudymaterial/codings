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
     friend ifstream & operator>>(ifstream &ifs, Student &s);
};
ofstream & operator<<(ofstream &ofs, Student &s){
        ofs<<s.name<<endl;
        ofs<<s.roll<<endl;
        ofs<<s.branch<<endl;
        return ofs;
}
ifstream & operator>>(ifstream &ifs, Student &s){
    ifs>>s.name;
    ifs>>s.roll;
    ifs>>s.branch;
    return ifs;
}

int main(){
    Student s1;
    Student s2;
    s1.inputData();
    ofstream ofs("New.txt",ios::trunc);
    ofs<<s1;
    cout<<"File Saved"<<endl;
    ofs.close();
    cout<<endl;
    ifstream ifs("New.txt");
    ifs>>s2;
    cout<<"Displaying File"<<endl;
    ifs.close();

    cout<<"Name: "<<s2.name<<endl;
    cout<<"Roll: "<<s2.roll<<endl;
    cout<<"Branch: "<<s2.branch<<endl;
    return 0;
}