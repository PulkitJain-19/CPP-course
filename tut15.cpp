#include<iostream>
using namespace std;

//function prototype
// type function-name (arguments);
// // int sum(int a, int b); //Acceptable
// int sum(int a, b); // Not Acceptable
// int sum(int, int); //Acceptable
int sum(int a, int b);
void g();

    int main(){
        int num1, num2;
        cout<<"entre the value of num1 is "<<endl;
        cin>>num1;
        cout<<"entre the value of num2 is "<<endl;
        cin>>num2;
        // num1 and num2 are actual parameters
        cout<<"The sum is "<<sum(num1,num2)<<endl;
        g();

    return 0;
}
int sum(int a, int b){
    // Formal Parameters a and b will be 2taking values from actual parameters num1 and num2.
    int c = a + b;

    return c; 
}
void g(){
    cout<<"\n Hello, Good Morning";


}