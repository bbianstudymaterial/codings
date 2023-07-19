#include<iostream>
#include<fstream>
using namespace std;
int main(){
 int roll;
 string name;
 string branch;
 cout<<"Enter your Name: ";
 cin>>name;
 cout<<"Enter your Roll: ";
 cin>> roll;
 cout<<"Enter your Branch: ";
 cin>>branch;
 ofstream ofs("original.txt",ios::trunc);
 ofs<<name<<endl;
 ofs<<roll<<endl;
 ofs<<branch<<endl;
 ofs.close();
}
