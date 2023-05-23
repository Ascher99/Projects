#include <iostream>
using namespace std;
int n;
string znak="O";
int main()
{
	cout << "wczytaj liczbe: ";
	cin >>n;
	
	for (int i=1;i<=n;i++)
	{
		cout << znak << endl;
		
		znak+= "O";
		
	}

	return 0;
	


	
	
	
	
}
