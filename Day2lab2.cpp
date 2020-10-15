#include<iostream>
using namespace std;
class student
{
	char name[20];
	int roll;
	int marks;
	char address[25];
	public:
	void getdata();
	void displaydata();
};
void student::getdata()
{
	    cout<<"Enter name:"<<endl;
	    cin>>name;
	    cout<<"Enter roll:"<<endl;
	    cin>>roll;
	    cout<<"Enter marks :"<<endl;
	    cin>>marks;
	    cout<<"Enter address:"<<endl<<endl;
		cin>>address;
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
	int num;
	student s[20];
	cout<<"Enter no. of students"<<endl;
	cin>>num;
	for(int i=0;i<num;i++)
	s[i].getdata();
	for(int i=0;i<num;i++)
	{
		cout<<endl<<endl<<"Details of student"<<i+1<<endl;
	    s[i].displaydata();
	}
	return 0;
}
