#include<iostream>
using namespace std;
class employee{
private:
int eid;
string name;
public:
employee(int e,string n){
    eid=e;
    name=n;
}
int getemployeeid(){return eid;}
string getname(){return name;}

};
class FulltimeEmployee:public employee{
 private:
 int salary;
 public:
 FulltimeEmployee(int e,string n,int sal):employee(e,n){
    salary=sal;
 }
 int getsalary(){return salary;}
};
class ParttimeEmployee :public employee{
    private:
    int wages;
    public:
    ParttimeEmployee(int e,string n, int w):employee(e,n){
        wages=w;
    }
    int getWages(){return wages;}
};
int main(){
    FulltimeEmployee p1(1,"Ishan",20000);
    ParttimeEmployee p2(2,"isha",500);
    cout<<"Salary of "<<p1.getname()<<" is "<<p1.getsalary()<<endl;
    cout<<"Daliy Wages of "<<p2.getname()<<" is "<<p2.getWages()<<endl;


    return 0;
}