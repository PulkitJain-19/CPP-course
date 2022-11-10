#include<iostream>
using namespace std;

int sum (int a ,int b){
    int c = a + b;
    return c;
}
//this will not swap a and b
void swap(int a,int b ){// temp a  b
    int temp = a;      // 4    4  5  
    a = b;             // 4    5  5
    b = temp; 
}
              // 4    5  4
    //  call by reference by using pointers
void swapPointer(int* a,int* b ){// temp a  b
    int temp = *a;      // 4    4  5  
    *a = *b;             // 4    5  5
    *b = temp;          // 4    5  4
}
// call by reference by using C++ reference variables
// int&  
void swapReferenceVar(int &a,int &b ){// temp a  b
    int temp = a;      // 4    4  5  
    a = b;             // 4    5  5
    b = temp;          // 4    5  
    // return a;
}

int main(){
    int  x= 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(4,5);
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    // swap(x,y); //this will not swap a and b
    // swapPointer(&x,&y);//this will  swap a and b by using pointer reference
    // swapReferenceVar(x,y) = 444;
    swapReferenceVar(x,y) ;//this will  swap a and b by using reference variable

    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    return 0;
}