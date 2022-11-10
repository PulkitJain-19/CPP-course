#include<iostream>

using namespace std ;

int main(){
    // cout<<"This is Tutorial 9";
    int age;
    cout<<"what is Your age ?" <<endl;
    cin>>age;
    // 1.Selection Control Ladder : if else-if else Ladder
    // if((age<18) && (age>0)){
    // cout<<"you are a kid"<<endl;
    // }
    
    // else if(age==18){
    //     cout<<"you are at border line"<<endl;
    // }
    
    // else if (age<1){
    //     cout<<"you are not born yet"<<endl;
    
    // }

    // else{
    //     cout<<"you are a Adult "<<endl;
    // }

     // 2.Selection Control Ladder : Switch Case Statements 
    switch (age)
    {
    case 18:
    cout<<"You are 18"<<endl;
        break;
    case 11:
    cout<<"You are 11"<<endl;
        break;
    case 1:
    cout<<"You are 1"<<endl;
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }
    cout<<"Done with Switch case";
        return 0;
}