/* Suma elementelor a
   unei matrici a[100][100] cu m - linii si n - coloane */

#include<iostream>
using namespace std;
#include <conio.h>;

void main()
{
	int m,n,i,j,s,a[100][100];

	cout<<"Introduceti nr linii, m = ";
	cin>>m;

	cout<<"Introduceti nr coloane, n = ";
	cin>>n;

	for (i=0; i<m; i++)
	{
      for (j=0; j<n; j++)
	  {
		  cout<<"Introduceti a["<<i<<"]"<<"["<<j<<"] = ";
		  cin>>a[i][j];
	  }
	}

	s=0;

   for (i=0; i<m; i++)
	{
      for (j=0; j<n; j++)
	  {
	//	  if (i==j)
	//	  {
	//	    s=s+a[i][j];
	//	  }

		  if (i==n-j-1)
		  {
		    s=s+a[i][j];
		  }


	  }
	}

   cout<<"Suma elementelor matricei este : "<<s<<endl;

   cout<<"Modificare catre Testrepo3"<<endl;

   getch();
}