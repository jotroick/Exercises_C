#include <iostream.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
int m, n, f, c, k,i,j;

cout<<"ingrese numero de filas y de colmunas de la primera matriz";
cin>>m;
cout<<"ingrese numero de filas y de colmunas de la primera matriz";
cin>>n;

char a[999][999];

cout<<"ingrese numero de filas y de columnas de la segunda matriz";
cin>>f;
cout<<"ingrese numero de filas y de columnas de la segunda matriz";
cin>>c;

int b[999][999];
int d[999][999];

if(n==f){

	for( i=0; i<=f; i++){

		for( j=0; j<=n; j++){

			d[i][j]=0;

			for( k=0; k<=n; k++){

				d[i][j]+=(a[i][k]*b[k][j]);

			}

		}

	}

}
cout<< d[i][j];

system ("PAUSE");

return 0;
}
