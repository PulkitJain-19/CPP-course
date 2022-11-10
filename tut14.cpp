#include<iostream>
using namespace std;

// typedef struct employee

//     {
//         /* data */
//         int eId; //4
//         char favChar;//1
//         float salary;//4
//     }ep;
    
    union money

    {
        /* data */
        int rice; //4
        char car;//1
        float pounds;//4
    }ep;
    int main(){
        enum meal{breakfast,lunch,dinner};
        meal m1= breakfast;
        cout<<(m1==0);
        
        // ep pulkit;
        // union money m1;
        // m1.rice = 23;
        // m1.car = 'c';
        // cout<<"The value of Money is "<<m1.car<<endl;
        // pulkit.eId = 1;
        // pulkit.favChar = 'p';
        // pulkit.salary = 1700000000;
        // cout<<"The value is "<<pulkit.salary<<endl;
        // cout<<"The value is "<<pulkit.favChar<<endl;
        // cout<<"The value is "<<pulkit.eId<<endl;

 
    
    return 0;
}