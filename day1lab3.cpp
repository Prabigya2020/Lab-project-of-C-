#include<iostream>
#define PI 3.14
using namespace std;

class area{
	float area;
	public:
		float rect(float l, float b)
		{
		area=l*b;
		return area;
		}
	    float circle(float r)
	    {
	    	area=PI*r*r;
	    	return area;
		}
};
 int main()
 {
 	area a;
 	cout<<"Area of circle: "<<a.circle(4.3)<<endl;
 	cout<<"Area of rectangle: "<<a.rect(4,2)<<endl;
 	return 0;
 }
