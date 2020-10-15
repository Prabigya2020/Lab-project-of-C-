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
	
		Complex operator ++()
		{
		Complex temp;
		temp.real=++real;
		temp.imag=++imag;
		return temp;
		}
		
		Complex operator ++(int)
		{
			Complex temp;
			temp.real=real++;
			temp.imag=imag++;
			return temp;
		}
		
		void display(){
			cout<<real<<"+ i"<<imag<<endl;
		}
};
int main()
{
	Complex c1(2.3, 4.4), c2, c3;
	c2=++c1;
	c3=c2++;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}
