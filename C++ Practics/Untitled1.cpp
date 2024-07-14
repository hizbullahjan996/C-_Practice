#include<bits/stdc++.h>
using namespace std;
class Student{
    
    public:
       void printInformation();
       void printCollegeName();
};
// Defining the member functions outside the class.
void Student::printInformation(){
    cout << "Name: XYZ\n";
    cout << "BRANCH: Information Technology\n";
}
void Student::printCollegeName(){
  cout << "CollegeName: IIIT Allahabad\n";
}
int main(){
   Student PrepBuddy;
   PrepBuddy.printInformation();
   PrepBuddy.printCollegeName();
   return 0;
}
