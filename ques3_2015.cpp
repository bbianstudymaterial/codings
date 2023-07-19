#include <iostream>
using namespace std;
class Student
{
    char name[50];
    int rollno;

public:
    void inputData();
    void display();
};
void Student::inputData()
{
   cout<<"Enter your name: ";
   cin>>name;
   cout<<"Enter your rollno.: ";
   cin>>rollno;
}
void Student::display()
{
   cout<<"Name "<<"\t"<<"Roll No."<<endl;
   cout<<name<<"\t"<<rollno<<endl;
}

int main()
{
    Student s1;
    s1.inputData();
    s1.display();
}