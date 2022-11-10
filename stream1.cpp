#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


    int main()
{
 ifstream ifs;
 ifs.open("Test.txt");
 string name;
 int roll;
 string branch;
 if(ifs)cout<<"File is Opened"<<endl;
 getline(ifs,name);
 ifs>>roll>>branch;
 ifs.close();
 cout<<name<<endl;
 
 cout<<roll<<endl;
 cout<<branch<<endl;
 if(ifs.eof()) cout<<"end of File reached"<<endl;
 

    return 0;
}