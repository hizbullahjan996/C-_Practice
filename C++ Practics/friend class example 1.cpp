#include <iostream> 
using namespace std; 
 
class test1 //container class 
{ private: int a,b; 
public: friend class test2; //friend class Declaration 
    void getab()
{cout<<"enter the values of a b"; 
cin>>a>>b;	} }; 

class test2 //contained class
{ public: void putab (test1 t1)
{cout<<"value of a and b is"<<t1.a<<t1.b;} }; 

int main() 
{ test1 p; 
  test2 q; 
  p.getab();
  q.putab(p); 
return 0; } 

