
#include<iostream>
using namespace std;
class Complex
{
		float real;
		float imag;
	    public:
		
		Complex(){
			real = 0;
			imag = 0;
		}
		
		Complex(float r, float i){
			real = r;
			imag = i;
		}
		
		void display(){
			cout<<"The sum is: ";
			cout<<real<<"+ i"<<imag<<endl;
		}	
		
		friend Complex operator +(Complex c1, Complex c2 );
		
};	

		Complex operator +(Complex c1, Complex c2)
		{
		Complex temp;
		temp.real=c1.real+c2.real;
		temp.imag=c1.imag+c2.imag;
		return temp;
		}
		
		


int main()
{
	Complex c1(2.3, 4.4), c2(1,3), c3;
	c3=c1+c2;
	c3.display();
	return 0;
}
