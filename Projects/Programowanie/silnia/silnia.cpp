#include <iostream>
using namespace std;

int main()
{
	int n,silnia = 1;
	cout<<"Podaj n: ";
	cin>>n;

	for(int i=n;i>1;i--)
		silnia*=i; 

	cout<<n<<"! = "<<silnia;

	return 0;
}
