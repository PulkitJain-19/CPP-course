#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"using function with two arguments"<<endl;
    return a + b;
}
int sum(int a,int b,int c){
    cout<<"using function with three arguments"<<endl;
    return a + b + c;
}
//calculate the volume of a cylinder
int volume(double r, int h){
    return (3.14* r * r * h);
}
//calculate the volume of a cube
int volume(int a){
    return (a * a * a); 
}
// retangular box
int volume(int l, int b, int h){
    return (l*b*h); 
}
int main(){
    cout<<"the volume of cylinder of radius 3 and hight 6 is "<<volume(3,6)<<endl;
    cout<<"the volume of cuboid of length 3, breadth 7 and hight 6 is "<<volume(3,7,6)<<endl;
    cout<<"the volume of cube of side 3 is "<<volume(3)<<endl;
    cout<<"the sum of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<"the sum of 3 ,5 and 4 is "<<sum(3 ,5, 4);
    return 0;
}