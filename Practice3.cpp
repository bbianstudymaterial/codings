#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string line;
    ifstream ini_file("mono.txt");
    ofstream out_file("copy.txt");
    if(ini_file && out_file){
        while(getline(ini_file,line)){
            out_file<<line<<endl;
        }
        cout<<"copy finished"<<endl;
    }
    else{
        cout<<"Cannot Read File"<<endl;
    }
}