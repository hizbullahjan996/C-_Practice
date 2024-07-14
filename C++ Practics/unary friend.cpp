#include <iostream> 
using namespace std; 
class temp
 { private:
 int count; 
public:
 temp(){count=3; } 
friend void operator ++(temp & obj); 
void Display()
 { cout<<"Count: "<<count; } };
void operator ++(temp & obj) 
{ obj.count = obj.count+1; }; 
 int main()
 { temp t;
++t; /* operator function void operator ++() is called */
 t.Display();
 return 0; }

