#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"constructor of base class"<<endl;
    }
    virtual~base(){
        cout<<"destructor of base class"<<endl;
    }
};
class derived: public base{
    public:
derived(){
    cout<<"constructor of derived class"<<endl;
}
~derived(){
    cout<<"destructor of derived class"<<endl;
}
};

void fun(){
    // derived d;
    base *ptr=new derived();
    delete ptr;
}
int main(){
    fun();
    return 0;
}