#include <iostream>
using namespace std;
class car
{
	char colour[10];
	public:
	float speed;
	public:
	void carfuel(int a)
	{
	cout<<"The car consumes "<<a<<"l fuel.\n";
	}
	void carmileage(int);
	void carspeed()
	{cout<<"Speed="<<speed<<"\n";}
}audi;
void car::carmileage(int b)
{cout<<"Mileage="<<b<<".\n";}
int main()
{
	car swift;
	swift.carfuel(10);
	audi.carmileage(11);
	audi.speed=2002;
	audi.carspeed();
	cout<<"Speed is "<<audi.speed<<".\n";
	return 0;
}
