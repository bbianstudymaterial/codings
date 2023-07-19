#include <iostream>
using namespace std;
class stock
{
public:
    void image1()
    {
        cout << "This is image1"<<endl;
    }
    void image2()
    {
        cout << "This is image2"<<endl;
    }
};
class myStack : public stock
{
public:
    void image3()
    {
        cout << "This is image3"<<endl;
    }
    void image4()
    {
        cout << "This is image4"<<endl;
    }
};

int main()
{
    myStack s1;
    s1.image2();
    s1.image3();
}