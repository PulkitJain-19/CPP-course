#include<iostream>
#include<fstream>
using namespace std;
class item{
    private:
    string name;
    float price;
    int qty;
    public:
    item(){}
    item(string n,float p,int q){
        name=n;
        price=p;
        qty=q;
        };
  
        friend ifstream & operator>>(ifstream &ifs,item &i);
        friend ofstream & operator<<(ofstream &ofs,item &i);
        friend ostream & operator<<(ostream &os,item &i);
};
ofstream & operator<<(ofstream &ofs,item &i){

 ofs<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
 return ofs;
}
ifstream & operator>>(ifstream &ifs, item &i)
{
 ifs>>i.name>>i.price>>i.qty;
 return ifs;
}
ostream & operator<<(ostream &os,item &i)
{
 os<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
 return os;
}
int main(){
    int n;
    string name;
    float price;
    int qty;
    cout<<"Enter number of Item:";
 cin>>n;
 item *list[n];
 cout<<"Enter All Item "<<endl;
 for(int i=1;i<n;i++)
 {
 cout<<"Enter "<<i<<" Item Name , price and quantity";
 cin>>name;
 cin>>price;
 cin>>qty;
 list[i]=new item(name,price,qty);

 }
 ofstream ofs("Items.txt");
 for(int i=1;i<n;i++)
 {
 ofs<<*list[i];
 }
 item maal;
 ifstream ifs("Items.txt");
 for(int i=1;i<n/*4*/;i++)
 {
 ifs>>maal;
 cout<<"Item "<<i<<" "<<maal<<endl;
 }
 return 0;
}

   
