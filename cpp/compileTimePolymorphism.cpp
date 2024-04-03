//Function Overloading
#include <iostream>
using namespace std;
class A
{
	public:
	void sum(int a, int b)
	{
		cout<<"Output: "<<(a+b)<<endl;
	}
	void sum(int a, int b, int c)
	{
		cout<<"Output: "<<(a+b+c)<<endl;
	}
};
int main()
{
	A obj;
	obj.sum(10,11);
	obj.sum(12,9,2002);
return 0;
}

