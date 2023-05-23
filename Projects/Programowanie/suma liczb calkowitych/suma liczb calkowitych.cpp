#include <iostream>
using namespace std;
int main()
{
int a,b,n,suma = 0,count;
cout << "podaj 2 liczby calkowite, a ja oblicze sume wszystkich liczb w tym przedziale\n";
cin >> a >> b;
	
for(int n=a;n<=b;n++)
{
		suma=suma+n;
}

	cout << "suma liczb ca³kowitych w przedziale od " << a << " do " << b << " wynosi " << suma << ".";
	
}
