#include <iostream>
using namespace std;
class A{
	      public:
	      A()
	      {cout<<"I am Jasmine Kispotta."<<endl;}
	      };
class B {
	      public:
	      B()
	      {cout<<"My father's name is Vincent Kispotta."<<endl;}
	      };
class C:public A,public B
	      {
	       public:
	       C()
	       {cout<<"My mother's name is Teresa Kispotta."<<endl;}
	       };
int main()
{
	C obj;
	return 0;
}	  	       	     
