#include <iostream>
#include <fstream>
using namespace std;
ifstream plik;
ofstream odp;

void podpunkt_a()
{
int licznik=0;
int tablica[200]={0};
int x[200]={0};
plik.open("liczby.txt");
odp.open("wyniki.txt");
int pierwsza,druga;

for (int i=0;i<200;i++)
{	
	plik>>x[i];
	if (x[i]<1000)
	{
	licznik++;
	druga = pierwsza;
	pierwsza = x[i];
	
	}

}	
 cout << licznik << endl;
 cout << pierwsza << endl << druga;
 plik.close();
 odp.close();
}
void podpunkt_b()
{
int x;
int ile_dzielnikow=0;
plik.open("liczby.txt");
odp.open("wyniki.txt");
for (int i=0;i<200;i++)
{	
	ile_dzielnikow=0;
	plik>>x;
	for (int l=1;l<=x;l++)
	{
		if (x%l==0)
	ile_dzielnikow++;	
	}

	if (ile_dzielnikow==18)
	{
 		cout << x<< endl;
 		for(int j=1; j<=x; j++)
 		{
 			if (x%j == 0)
 			{
 			cout << j << " "; 	
			}	
		}
 	cout << endl;
	}	 	
}	
}
int main()
{
podpunkt_b();
return 0;
}
