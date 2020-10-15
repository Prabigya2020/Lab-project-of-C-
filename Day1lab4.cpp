#include <iostream> 
using namespace std; 
inline int cube(int l) 
{ 
    return l*l*l; 
} 
int main() 
{ 
    int length;
    cout<<"Enter the number"<<endl;
    cin>>length;
    cout << "The cube of number is: " << cube(length) << endl; 
    return 0; 
}
