#include<iostream>
using namespace std;
class student{
	char name[20];
	int roll;
	int marks;
	char address[20];
	public:
	void getdata();
	void displaydata();
};
		void student::getdata(){
		cout<<"Enter name,roll,marks and address respectively:"<<endl;
		cin>>name>>roll>>marks>>address;
	}
	void student::displaydata()
	{
		cout<<"Student name:"<<name<<endl;
		cout<<"Student roll no:"<<roll<<endl;
		cout<<"Student marks:"<<marks<<endl;
		cout<<"Student address:"<<address<<endl;
	}

int main()
{
	student s;
	s.getdata();
	s.displaydata();
	return 0;
 }
