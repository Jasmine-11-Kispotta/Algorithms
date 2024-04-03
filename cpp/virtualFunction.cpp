#include <iostream>
using namespace std;
class base
{
	public:
	virtual void print()
	{cout<<"I'm from base class."<<endl;}
	void show()
	{cout<<"I'm show from base class."<<endl;}
};
class derived:public base
{
	public:
	void print()
	{cout<<"I'm from derived class."<<endl;}
	void show()
	{cout<<"I'm show from derived class."<<endl;}
};
int main()
{ cout<<"Child accessing parent(derived accessing base):"<<endl;
	derived obj;
	obj.base::print();
	obj.print();
	obj.show();
	obj.base::show();
	cout<<"\nParent accessing child(base accessing derived):"<<endl;
	base* obj2;
	obj2 = &obj;
	obj2->print();
	obj2->base::print();
	obj2->show();//coz show in base class is not declared virtual & so show in derived class cannot be accessed by base class.
	/* And therefore obj2->derived::show(); shows error*/
	return 0;
}
