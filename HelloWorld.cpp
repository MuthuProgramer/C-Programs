#include <iostream>
using namespace std;

int max_of_four(int a,int b,int c,int d);
int main()
{
	cout<<"Enter the four numbers : ";
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int greater;
	greater = max_of_four(a,b,c,d);
	cout<<"The greatest number is :"<<greater;
}
int max_of_four(int a,int b,int c,int d)
{
	if(a>b&&a>c&&a>d)
		return a;
		else if(b>a&&b>c&&b>d)
		return b;
		else if(c>a&&c>b&&c>d)
		return c;
	else
		return d;	
		
}
class Student
{
	private :
		int age;
		String firstname;
		String lastname;
		int standard;
		public :
			void set_age(int )
}
