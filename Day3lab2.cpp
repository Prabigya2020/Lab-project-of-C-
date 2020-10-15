#include<iostream>
using namespace std;
class Complex
{
		float real;
		float imag;
	    public:
	    	
	    	Complex()
			{
			real = 0;
			imag = 0;
		    }
	    	
	    void getdata()
	    {
	    	cout<<"Enter complex number"<<endl;
	    	cin>>real>>imag;
		}
		
		void display(){
		cout<<real<<"+ i"<<imag<<endl;
		}
		friend Complex operator ++(Complex &);
		friend Complex operator ++(Complex &, int);
		
};		
		
	
		Complex operator ++(Complex &cc1)
		{
		Complex temp;
		temp.real=++cc1.real;
		temp.imag=++cc1.imag;
		return temp;
		}
		
		Complex operator ++(Complex &cc1,int)
		{
			Complex temp;
			temp.real=cc1.real++;
			temp.imag=cc1.imag++;
			return temp;
		}
		
	

int main()
{
	Complex c1, c2, c3;
	c1.getdata();
	c2=++c1;
	c3=c2++;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}
