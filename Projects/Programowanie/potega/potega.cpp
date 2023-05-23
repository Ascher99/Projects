#include <iostream>
using namespace std;

int funkcja(int a, int b)
{
	int suma=1;
	for (int i=0;i<b;i++)
	suma*=a;
	return suma;
	
	
}

int suma(int x)
{
	int z=0;
	while (x!=0)
	{
	
	z+=x%10;
	x=x/10;
	
		
	}
return z;
	
	
	
}





int main()
{
	
	cout << "podaj liczbe i wykladnik: ";
	
	int x,y;
	cin >> x;
	cout << suma(x);
	
	
	return 0;
	
}

