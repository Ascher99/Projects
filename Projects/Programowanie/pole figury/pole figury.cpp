#include <iostream>
#include <cmath>
using namespace std;
int pole, figura
;
const int trojkat = 1,prostokat = 2,romb = 3,trapez = 4,kolo = 5;
double a,b,d,d1,h,c,r;
const double pi=3.14;
int main()
{
cout << "wybierz figurê do policzenia pola:\n 1.trojkat\n2.prostokat\n3.romb\n4.trapez\n5.kolo\n";
cin >> figura;
switch(figura)
{

case trojkat: 
	cout << "podaj wymiary boku i wysokosci:\n";
	cin >> a >> h;
	pole = a*h/2;
	cout << "pole trojkata wynosi " << pole << " cm^2.";
break;
	
case prostokat:
	cout << "podaj wymiary bokow:\n";
	cin >> a >> b;
	pole = a*b;
	cout << "pole prostokata wynosi " << pole << " cm^2.";
break;
case romb:
	cout << "podaj wymiary przekatnych:\n";
	cin >> d >> d1;
	pole = d*d1/2;
	cout << "pole rombu wynosi " << pole << " cm^2.";
break;
case trapez:
	cout << "podaj wymiary dwoch podstaw i wysokosci:\n";
	cin >> a >> b >> h;
	pole = (a+b)*h/2;
	cout << "pole trapezu wynosi" << pole << "cm^2";
break;
case kolo:
	cout << "podaj wymiary promienia";
	cin >> r;
	pole = pi*r*r;
	cout << "pole wynosi" << pole << " cm^2";	
break;
	default:
	cout << "prosze podac cyfre z przedzialu od 1 do 5";
	
	
	
	
	
}
	
	
	
	
	
	
	
	
}
