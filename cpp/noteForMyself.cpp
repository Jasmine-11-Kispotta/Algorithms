#include <iostream>
using namespace std;
class A{
	public:
	       A()
	       {cout<<"A"<<endl;}
	       void show()
	       {cout<<"AJ"<<endl;}
	       void jas()
	       {cout<<"jas"<<endl;}
	      };
class J:public A{
	public:
	       J()
	       {cout<<"J"<<endl;}
	       void print()
	       {cout<<"JA"<<endl;}
	        void jas()
	       {cout<<"saj"<<endl;}
	      };
int main()
{
	J obj;
	obj.show();
	obj.print();
	obj.jas();
	obj.A::jas();
	return 0;
}
/*Calling a function of a child calls the function of both child and its parent when the function of child and its parent are constructors.*/

