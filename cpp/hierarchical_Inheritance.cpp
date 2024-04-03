#include <iostream>
using namespace std;
class A{
	      public:
	      A()
	      {cout<<"I am Jasmine Kispotta."<<endl;}
	      };
class B:public A
	      {
	      public:
	      B()
	      {cout<<"My father's name is Vincent Kispotta."<<endl;}
	      };
class C:public A
	      {
	       public:
	       C()
	       {cout<<"My mother's name is Teresa Kispotta."<<endl;}
	       };
int main()
{
	cout<<"C inherits A:"<<endl;
	C obj;
	cout<<"\n";
	cout<<"B inherits A:"<<endl;
	B object;
	return 0;
}	  	       	     
