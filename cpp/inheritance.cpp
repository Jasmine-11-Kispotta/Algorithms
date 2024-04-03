#include <iostream>
using namespace std;
class A{
	public:
	A(){  
	cout<<"Hey, I am Jasmine's parent."<<endl;
	   }
    string parent_name="Teresa & Vincent";
	   };
class B : public A{
	public:
	B(char b[10]){
	    cout<<"Hey, I am "<<b<<"."<<endl;
	   }
	   };
int main()
{
  B obj("Jasmine");
  cout<<"Parent name= "<<obj.parent_name<<".\n";
  return 0;
  }

