#include <iostream>
#include  <string>
#include <cctype>
#include <fstream>
using namespace std;
string cezar(string tekst,int klucz)
{
	string szyfrogram="";
	int kod;
	for (int i=0;i<tekst.size();i++)
	{
		if (toupper(tekst[i])>='A' && toupper(tekst[i]) <='Z')
		{
			kod = tekst[i]+klucz;
			if ((tekst[i]<='Z' && kod>'Z') || (tekst[i]>='a' && kod>'z'))
			kod = kod-26;
			szyfrogram+=char(kod);
		}
		else szyfrogram+=tekst[i];
	}
	
	cout << "Szyfrogram: " << szyfrogram;
}
int main()
{
	ifstream wejscie ("plik.txt");
	ofstream wyjscie ("szyfrogram.txt");
	string zdanie;
	int klucz;
	cout << "Klucz: "; cin >> klucz;
	while (!wejscie.eof())
	{
		getline (wejscie,zdanie);
		wyjscie <<cezar(zdanie,klucz) << endl;	
	}
	wejscie.close();
	wyjscie.close();	
}
