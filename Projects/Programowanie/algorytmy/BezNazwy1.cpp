#include <iostream>

using namespace std;

bool czy_pierwsza (int x)
{
   for (int a=2;a<x;a++)
   {
   	if(x%a==0)
	return false;
   }
	return true;
}


int main()
{
	bool a=czy_pierwsza(15);
	if(a) 
	cout << "liczba jest pierwsza";
	else 
	cout <<"liczba nie jest pierwsza";
	
	
	return 0;
}
