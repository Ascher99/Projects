#include <iostream>
using namespace std;

int binRek (int l,int p,int szukana, int tab[])
{
	if (l<=p)
	{
		int sr= (l+p)/2;	
		if(tab[sr]==szukana)
			return sr;
		if(tab[sr]>szukana)
			return binRek (l,sr-1,szukana,tab);
		else 
			return binRek (sr+1,p,szukana,tab);
	}
	return -1;
}


/*
int binIteracyjnie (int l,int p,int szukana)
{
	
	int sr;
	while (l<=p)
		{
			sr= (l+p)/2;		
			if(tab[sr]==szukana)
				return sr;
			if(tab[sr]>szukana)
			p=sr-1;
			else 
			l=sr+1;
		}
	return -1;
}
*/
int main()
{	
	int tab[10]={1,2,3,4,5,6,7,8,9,10};
	cout << binRek(0,10,5,tab);
	
}
