#include<iostream>
using namespace std;
class StackOverFlow:exception{};
class StackUnderFlow:exception{};
class Stack
{
private:
 int *stk;
 int top=-1;
 int size;
public:
class FULL{};
 Stack(int sz)
 {
 size=sz;
 stk=new int[size];
 }
 void push(int x)
 {
 if(top==size-1)
 throw StackOverFlow();
 top++;
 stk[top]=x;
 }
 int pop()
 {
 if(top==-1)
 throw StackUnderFlow();
 return stk[top--];
 }
};

int main()
{
    int item, size;

int ch=1;

cout<<"Enter the size of stack"<<endl;;

cin>>size;

Stack s1(size);

cout<<"Stack with Exception Handling"<<endl;

cout<<"\n\n\tMENU\n1.PUSH\n2.POP\n3.SHOW STACK\n4.EXIT";

cout<<"Enter your choice"<<endl;

cin>>ch;



cout<<"Enter the item to push"<<endl;

cin>>item;

try

{

s1.push(item);

}

catch(Stack::FULL) 

{

cout<<"***Stack Overflow***"<<endl;

}
//  Stack s(5);
//  s.push(2);
//  s.push(3);
//  s.push(4);
//  s.push(10);
//  s.push(9);
//  s.push(8);

}