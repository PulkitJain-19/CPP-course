#include<iostream>
using namespace std;

inline int product(int a , int b){
    // Not recommended to use below lines with inline functions
    // static int c =0; // this executes only once
    // c = c+1 ; // next time this function is run, value of c will be retained
    return a*b;
}
float moneyReceived(int currentMoney, float factor= 1.04){
    return currentMoney*factor;

}
// int strlen(const char *p){

// }
int main(){
    int a,b;    
    // cout<<"Entre the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b "<<product(a,b)<<endl;
    // cout<<"the product of a and b "<<product(a,b)<<endl;
    // cout<<"the product of a and b "<<product(a,b)<<endl;
    // cout<<"the product of a and b "<<product(a,b)<<endl;
    // cout<<"the product of a and b "<<product(a,b)<<endl;
    // cout<<"the product of a and b "<<product(a,b)<<endl;
    // cout<<"the product of a and b "<<product(a,b)<<endl;
    // cout<<"the product of a and b "<<product(a,b)<<endl;
    // cout<<"the product of a and b "<<product(a,b)<<endl;
    // cout<<"the product of a and b "<<product(a,b)<<endl;
    // cout<<"the product of a and b "<<product(a,b)<<endl;
    // cout<<"the product of a and b "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    
    return 0;
}