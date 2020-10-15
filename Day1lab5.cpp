#include<iostream> 
using namespace std; 

int volume(int x, int y, int z=5) 
{ 
	return (x*y*z); 
} 

int main() 
{ 
    int l,b,h; 
	cout<<"Enter length and breadth"<<endl;
	cin>>l>>b;
	cout<<"volume is :"<<volume(l,b)<<endl;  //height not needed 
	cout<<"Enter length, breadth and height"<<endl;
	cin>>l>>b>>h;
	cout<<"volume is :"<<volume(l,b,h)<<endl;  //height can be varied
	return 0; 
}

