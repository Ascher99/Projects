#include <iostream>
#include <fstream>
using namespace std;
int liczba;
 /* bool czy_pal(string a)
{
	int l=0,p=a.length()-1;
	while (l<=p)
	{
		if (a[l]!=a[p])
		return false;
		else
		l++;
		p--;
		
	}
	return true;
	
	
	
}
int potegowanie(int a, int b)
{
	
	int suma=1;
	for (int i=0;i<b;i++)
	suma = suma*a;
	
	return suma;
}
*/
bool czy_pal2(string b)
{
	int dl; 
	dl = b.size();
	--dl; 
	for(int i=0;i<=dl/2;i++)
	  if(b[i]!=b[dl-i]) 
	  	return false;		
	  	
	return true; 	
}



int main()
{
	ifstream plik;
	string napis;  
	plik.open("dane.txt");
	while (plik>>napis)
	{
		if(czy_pal2(napis))
		{
			cout << napis << endl;
		}
	}
	
	


	
	return 0;
	
	
	
}
