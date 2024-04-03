//Example of function overriding
#include <iostream>
using namespace std;
class A
{
	public:
	void sum(int a, int b)
	{
		cout<<"Class A's sum is called.\nOutput: "<<(a+b)<<endl;
	}
};
class B:public A
{
	public:
	void sum(int c, int d)
	{
		cout<<"Class B's sum is called.\nOutput: "<<(c+d)<<endl;
	}
};
int main()
{
 B obj;
 obj.sum(12,9);
 obj.A::sum(10,11);
 return 0;
}

