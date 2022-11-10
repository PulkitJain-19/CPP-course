#include<iostream>
using namespace std ;
int c = 45;
int main(){
    //***************Build in Data Types***********
    // int a,b,c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b ;
    // cout<<"The sum is:"<<c<<endl;
    // cout<<"The value of Global c is :"<<::c;

    //*********** Float, double and long double Literals******
    // float d = 74.9f;
    // long double e = 74.9l;
    // cout<<"The size of 74.9 is"<<sizeof(74.9)<<endl;
    // cout<<"The size of 74.9f is"<<sizeof(74.9f)<<endl;
    // cout<<"The size of 74.9F is"<<sizeof(74.9F)<<endl;
    // cout<<"The size of 74.9l is"<<sizeof(74.9l)<<endl;
    // cout<<"The size of 74.9L is"<<sizeof(74.9L)<<endl;
    // cout<<"The value of d is :"<<d<<endl<<"The value of e is :"<<e<<endl;
    
    //**********Reference Variable*******
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder

    // float x = 44;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    //***********Typecasting ***********
    int a = 43;
    float b = 43.9;
    cout<<"The Value of a :"<<float(a)<<endl;   
    cout<<"The Value of a :"<<(float)a<<endl;

    cout<<"The value of b :"<<int(b)<<endl;
    cout<<"The value of b :"<<(int)b<<endl;
    int c= int(b);

    cout<<"The experission is"<<a+b<<endl;
    cout<<"The experission is"<<a+int(b)<<endl;
    cout<<"The experission is"<<a+(int)b<<endl;



    return 0;
}