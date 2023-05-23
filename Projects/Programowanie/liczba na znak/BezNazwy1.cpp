#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
	int liczba,choice;
	cout <<"wprowadz liczbe albo znak ASCII: ";
	cin >> liczba;
	cout <<"podaj na co chcesz przekonwertowac:\n1. na int\n2. na char";
	cin >> choice;
	switch(choice)
	{
	case 1: 
	cout << liczba << "w kodzie ASCII jest rowna " << atoi(liczba.c_str());
	break;
	case 2:
	cout << liczba << "na liczbe jest rowna " << to_string(liczba);
	break;
	default:
	cout << "podaj liczbe 1 lub 2";			
	}
	
	
	return 0;
	
	
	
	
	
}
