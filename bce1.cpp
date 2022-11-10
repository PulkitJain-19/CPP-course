#include<iostream>
using namespace std;

// int main(){
//     float sub_1,sub_2,sub_3,sub_4,sub_5;

//     float total = 0.00 , percentage = 0.00;

//     cout<<"Entre the Marks of Five subjects"<<endl;
//     cin>>sub_1>>sub_2>>sub_3>>sub_4>>sub_5;
//     total = sub_1+sub_2+sub_3+sub_4+sub_5 ;
//     percentage = (sub_1+sub_2+sub_3+sub_4+sub_5)*0.2;

//     cout<<"the sum of marks is "<<total<<endl;
//     cout<<"the Percentage of Student is "<<percentage<<endl;

//     return 0;
// }

// Question 2
// int main(){
//     int marks;
//     float sum = 0;
//     int i= 1;

//     while(i<=5){
//         cout<<"Entre Marks of Subject No. "<<i<<endl;
//         cin>>marks;
//         i++;
//         sum= sum + marks;
//     }
//     cout<<"Total marks = "<<sum<<endl;
//     cout<<"Percentage of Marks = "<<(sum/500)*100<<endl;  

//     return 0 ;
// }

// Question 3

int main(){
    cout<<"This Program Prints the Square & Cube of First 10 Numbers"<<endl;
    for(int i = 1;i<=10;i++){
        cout<<"The number is "<<i<<endl; 
        cout<<"The Square of number is "<<i*i<<endl; 
        cout<<"The Cube number is "<<i*i*i<<endl; 
    }
    return 0;
}