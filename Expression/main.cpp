#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	int a[20],n,i;
	cout<<"Enter your decimal number: ";
	cin>>n;
	
	cout<<"The decimal number :"<<n;
	cout<<" is equal in ";
	
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	cout<<"Binary of the given number =";
	for(i=i-1 ;i>=0;i--)
	{
		cout<<a[i];
	}

	return 0;
}