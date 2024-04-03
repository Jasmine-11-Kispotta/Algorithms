//Example of single inheritance
#include <iostream>
using namespace std;
class Kispotta
{int height;
public:
 Kispotta()  //Constructor
 {
  cout<<"Constructor is called and object is created."<<endl;
 }
 ~Kispotta()//Destructor
 {
  cout<<"Destructor is called & object is destroyed."<<endl;
 }
 void talent()//Member function
 {
  cout<<"Multitalented"<<endl;
 }
}Jasmine;
int main()
{
 Jasmine.talent();
 return 0;
}

