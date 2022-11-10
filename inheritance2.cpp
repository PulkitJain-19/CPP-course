#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
    cout<<"default"<<endl; 
    }
     Base(int x){
        cout<<"para"<<x<<endl;
     }
};
     class derived:public Base
     {
        public:
        derived(){
            cout<<"default of derived"<<endl;
        }
        derived(int a){
            cout<<"para of derived"<<endl;}
            derived (int x,int a):Base(x){
                cout<<"para of derived "<<a<<endl;
            }
        
     };
    

int main(){
    derived d(20,10);
    return 0;
}