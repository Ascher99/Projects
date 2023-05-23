#include <iostream>
using namespace std;
int fib(int x)
{	
	if (x==1 || x==2) 
		return 1;	
	else
		return fib(x-2) + fib(x-1);
}
int potega(int podstawa,int wykladnik)
{
	if (wykladnik==0) 
		return 1;
	else
		return podstawa * potega(podstawa,wykladnik-1);
}
int suma_cyfr(int liczba)
{
	if (liczba>0)
		return liczba%10 + suma_cyfr(liczba/10);		
}
int silnia(int x)
{
	if (x==0) 
		return 1;
	else
		return x*silnia(x-1);	
}
int main()
{
	cout << potega(5);
	
	return 0;
}
