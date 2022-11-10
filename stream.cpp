#include <iostream>
using namespace std;
#include  <fstream>

int main(){
    ofstream of ("Test.txt",ios::trunc);

    of<<"Pulkit Jain"<<endl;
    of<<20<<endl;
    of<<"CS"<<endl;
    of.close();


 return 0;

}