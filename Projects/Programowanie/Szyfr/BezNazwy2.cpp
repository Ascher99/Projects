#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

ifstream plik;
ifstream klucz;
ofstream odp;
void zad()
{
	string tekst,klucz1;
	plik.open("tj.txt");
	klucz.open("klucze1.txt");
	odp.open("wynik4a.txt");
	string wynik;
	while (getline(plik,tekst))
	{
		getline (klucz,klucz1);
		wynik="";
		for (int i=0;i<tekst.size();i++)
		{
		
		int zmienna = int(tekst[i]);
		int zmienna1= int(klucz1[i%klucz1.size()]);
		int suma = zmienna + zmienna1 - 64;
		if (suma > 90)
		suma-=26;
		
		wynik+=char(suma);
		}
	cout << wynik << endl;
		
	}

	plik.close();
	klucz.close();
	odp.close();
}
void odpowiedz()
{
	/*
	string tekst,klucz1;
	plik.open("tj.txt");
	klucz.open("klucze1.txt");
	odp.open("wynik4a.txt");
	string wynik;
	while (getline(plik,tekst))
	{
		getline (klucz,klucz1);
		
		for (int i=0;i<tekst.size();i++)
		{
			int zmienna1 = atoi(tekst.c_str());
			int zmienna = atoi(klucz1.c_str());
		//	int zamiana = (tekst[i]) - (zmienna[i]) + 64;
			if (zamiana<65)
				zamiana+=26;
			to_string(zamiana);
				wynik+=zamiana;
		}
	odp << wynik << endl;
		
	}

	plik.close();
	klucz.close();
	odp.close(); */
}

int main()
{
 zad();
}


