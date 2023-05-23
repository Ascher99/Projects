#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
ifstream plik;
ofstream odp;
string odwrocenie (int x)
{
string a = to_string(x);
string wynik="";
for (int i=a.size()-1;i>=0;i--)
{
	wynik+= a[i];
}
return wynik;
}

bool czy_palindrom (string liczba)
{
	int j=liczba.size();
	for (int i =0;i<j/2;i++)
	{
	if (liczba[i]!=liczba[j-1-i])
		{
		return false;	
		}	
	}
	return true;		
}
// wczytujemy liczbeX, robimy kopie tej liczbyX, kopie zamieniamy na stringaX, odwracamy goX,
// zamieniamy z powrotem na liczbe, dodajemy ten oryginal i odwrocona kopie
// sprawdzamy czy suma jest palindromem
bool czynniki (int liczba)
{
	int ile_liczb=0;
	int czynnik=3;
	if(liczba%2==0) return false;
	else;
	while (liczba>1)
	{
		if(liczba%czynnik==0)
		{
			ile_liczb++;
			while (liczba%czynnik==0)
			liczba=liczba/czynnik;
		}
		else
		czynnik+=2;
	}
	if (ile_liczb==3) return true;
	else return false;
}
void podpunkt_a()
{
		int prawda=0;
	int x[1000]={0};
plik.open("liczby.txt");
odp.open("wyniki.txt");
for (int i=0;i<1000;i++)
	{
	plik>>x[i];
	if (czynniki(x[i])==true)
	prawda++;
	
	}		
	cout << prawda;	
	plik.close();
	odp.close();
}
void podpunkt_b()
{
		int prawda=0;
	int x[1000]={0};
plik.open("liczby.txt");
odp.open("wyniki.txt");
for (int i=0;i<1000;i++)
{
	plik>>x[i];
	
	string odwrocona = odwrocenie(x[i]);
	
	int odwrocona2 = atoi(odwrocona.c_str());
	int suma = x[i]+odwrocona2;
	string odwrocona3=to_string(suma);
	if (czy_palindrom(odwrocona3))
	cout << odwrocona3 << endl;
	
	
	
}
}
int main()
{
podpunkt_b();
return 0;
}











