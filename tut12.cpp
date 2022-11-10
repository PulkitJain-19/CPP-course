#include<iostream>
using namespace std;

int main(){
    //What is a Pointer?----> data type which holds the address of otherdata types

    int a=3;
    int* b = &a;
    cout<<b<<endl;
    // & ---> (Address of) operator
    cout<<"The Address of a is "<<&a<<endl;
    cout<<"The Address of a is "<<b<<endl;

    // * --->(value at) Dereference operator 
    cout<<"The Value at Address b is "<<*b<<endl;


    // pointer to pointer

    int** c=&b;
    cout<<"The address of of b is"<<&b<<endl;
    cout<<"The address of of b is"<<c<<endl;
    cout<<"The value at address of b is"<<*c<<endl;
    cout<<"The value at address at(value at (c)) is"<<**c<<endl;
  

    return 0;
}