#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle( Rectangle &r1);
    int getlength(){return length;};
    int getbreadth(){return breadth;};
    void setlength(int l);
    void setbreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
   
};
class cuboid: public Rectangle{
    private:
    int height;
    public:
    cuboid(int h){
        height=h;
    }
    void setHeigth(int h);
    int getHeigth(){return height;}
    int volume(){
        return getlength()*getbreadth()*height;
    }

};
int main(){
    cuboid c(10);
    c.setlength(5);
    c.setbreadth(2);
    cout<<"The volume is: "<<c.volume()<<endl;
    return 0;
}

Rectangle::Rectangle()
{
 length=1;
 breadth=1;
}
Rectangle::Rectangle(int l,int b)
{
 length=l;
 breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
 length=r.length;
 breadth=r.breadth;
}
void Rectangle::setlength(int l)
{
 length=l;
}
void Rectangle::setbreadth(int b)
{
 breadth=b;}
int Rectangle::area()
{
 return length*breadth;
}
int Rectangle::perimeter()
{
 return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
 return length==breadth;
}