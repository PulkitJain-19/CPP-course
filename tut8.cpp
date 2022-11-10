#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //    int a= 34;
    //     cout<<"The Value of a was "<<a<<endl;
    //     a= 45;
    //     cout<<"The Value of a is "<<a<<endl;
    // ************ constants in C++ ***********
    // const int a = 5;
    // cout<<"The Value of a was "<<a<<endl;
    //     // a= 45; You Will get an error here because a is a constant.
    //     cout<<"The Value of a is "<<a<<endl;
    // ********Manipulators*******
    // int a = 4, b=45, c=2334;
    // cout<<"The value of a without setw is : "<<a<<endl;
    // cout<<"The value of b without setw is : "<<b<<endl;
    // cout<<"The value of c without setw is : "<<c<<endl;  

    // cout<<"The value of a is : "<<setw(4)<<a<<endl;
    // cout<<"The value of b is : "<<setw(4)<<b<<endl;
    // cout<<"The value of c is : "<<setw(4)<<c<<endl;
    // opretator precedence

    int a =3, b=4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;   
    return 0;


}
