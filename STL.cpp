#include<iostream>
#include<list>
using namespace std;

int main(){ 
    list<int> v={2,4,5,24,53,19};
    v.pop_back();
    v.push_back(12);
    cout<<"Using Simple Iterator"<<endl;
    for(int x:v)
    cout<<x<<endl;
    cout<<"Using Iterator Classes"<<endl;
    list<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    cout<<*itr<<endl;;
    return 0;
}