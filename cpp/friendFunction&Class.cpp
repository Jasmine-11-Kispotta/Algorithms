#include <iostream>
using namespace std;
class A;
class C{
	    public:
      void multiply(A &ob)
	      	{
	      	 cout<<"\nProduct on multiplication= "<<(ob.a)*(ob.b)<<endl;
	      	 cout<<"\nProduct on division= "<<(ob.a)/(ob.b)<<endl;
	      		}
	      	};
class A{
	      private:
	         int a=10;
	         int b=11;
	         void print(int a,int b)
	         {cout<<"\nsum= "<<a+b<<endl;}
	         friend class B;//friend class
	         friend void display(A);//global friend function
	         friend void C::multiply(A &obj);//member friend function
	      };
class B{
	      public:
	        void print(A obj2)
	      {cout<<obj2.b<<"\t";
	      	cout<<obj2.a<<endl;}
	      
	      };
void display(A obje)
	      {
	        obje.print(obje.a,obje.b);
	      }

int main()
	     {
	     	B obj;
	     	A obj2;
	     	C obj3;
	      obj.print(obj2);
	      display(obj2);
	      obj3.multiply(&obj2);
	      return 0;
	     	}

