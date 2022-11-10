#include<iostream>
#include <bits/stdc++.h>
using namespace std;


class student{
    private:
    int roll;
    string name;
    int mathsMarks;
    int phyMarks;
    int chemMarks;
    public:
   student(int r,string n,int m,int p,int c)
 {
 roll=r;
 name=n;
 mathsMarks=m;
 phyMarks=p;
 chemMarks=c;
 }
 int total();
 char grade();
};
int student::total(){
    return mathsMarks+phyMarks+chemMarks;

}
char student::grade(){
    float average=total()/3;
 if(average > 60)
 return 'A';
 else if(average>=40 && average<60)
 return 'B';
 else
 return 'C';
}
int main(){
    int r,m,p,c;
    string name;
    cout<<"Enter a Roll Number"<<endl;
    cin>>r;
    getchar();
    cout<<"Enter Name of Student"<<endl;
    getline(cin,name);
    cout<<"Enter Subject Marks"<<endl;
    cin>>m>>p>>c;
    student s(r,name,m,p,c);
    cout<<"Total Marks :"<<s.total()<<endl;
    cout<<"Grade :"<<s.grade()<<endl;
    return 0;
}