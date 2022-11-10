#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    string name;
    static int addNo;
    student(string n){
        addNo++;
        roll=addNo;
        name=n;
    }
    void display(){
        cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
    }
};
int student::addNo=0;
int main(){
 student s1("John");
 student s2("Ravi");
 student s3("Khan");
 student s4("Khan");
 student s5("Khan");
 student s6("Khan");


 s1.display();
 s6.display();
 cout<<"Number Admission "<<student::addNo<<endl;

    return 0;
}