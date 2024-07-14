#include <iostream> 
using namespace std; 
class temp
 { private:
 int count; 
public:
 temp(){count=3; } 
void operator ++() 
{ count=count+1; } 
void Display()
 { cout<<"Count: "<<count; } };
 int main()
 { temp t;
++t; /* operator function void operator ++() is called */
 t.Display();
 return 0; }

