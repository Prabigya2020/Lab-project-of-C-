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
		
		Complex add(Complex &c){
		    float realsum, realimag ;
		    realsum=real + c.real;
		    realimag=real + c.real;
			return Complex(realsum, realimag);
		} 
		~Complex()
		{
			cout<<"Deleted"<<endl;
		}
		
		void display(){
			cout<<real<<"+ i"<<imag<<endl;
		}
};
int main()
{
	Complex c1(2.3, 4.4), c2(3.3, 4.5), c3;
	c3 = c1.add(c2);
	cout<<"The sum is :"<<endl;
	c3.display();
	return 0;
}
