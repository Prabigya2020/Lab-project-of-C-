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
	
		Complex operator +(Complex &cc1)
		{
		Complex temp;
		temp.real=real+cc1.real;
		temp.imag=+imag+cc1.imag;
		return temp;
		}
		
		
		void display(){
			cout<<"The sum is: ";
			cout<<real<<"+ i"<<imag<<endl;
		}
};
int main()
{
	Complex c1(2.3, 4.4), c2(3,3), c3;
	c3=c1+c2;
	c3.display();
	return 0;
}
