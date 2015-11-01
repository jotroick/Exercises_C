#include <iostream.h>
#include <stdlib.h>
#include <conio.h>

int i, j, k, tam, m, n, x, x1, long_cad2;
char aux, cad1[50],cad2[50],mat1[10][10],mat2[10][10], mat3[10][10];

void Carga_1(char cadena[], int n)  /* procedimiento para leer y almacenar la cadena  */
{
 cout<<"Digite (Una cadena de 15 caracteres)  ";
 for(i=0;i<n;i++) /* variable local del procedimiento(int)*/
 cin>>cadena[i];
}

void Escribir_1(char cadena[], int n)  /* procedimiento para escribir una cadena */
  {
    for(i=0;i<n;i++)   /* variable local del procedimiento(int)*/
    cout<<cadena[i];
  }

int longitud(char cadena[])  /* funcion para calcular la longitud de la cadena */
{
                 /* variable local del procedimiento*/
  i=0;
 while (cadena[i]!= '\0')
    i++;
 return i;
}

void Carga_M1(char Matriz[10][10], char cadena[])  /* procedimiento para pasar de una cadena a una matriz */
{

 k=0;
 for(j=0;j<3;j++)
 {
  for(i=0;i<5;i++)
  {
  Matriz[i][j]=cadena[k];
  k++;
  }
 }
}

void Escribir_2(char Matriz[10][10], int fil, int col)   /* procedimiento para escribir una matriz*/
{

 for(i=0;i<fil;i++){
  cout<<"\n";
  for(j=0;j<col;j++) {
   cout<<Matriz[i][j]<<" ";
  }
 }
}

void Carga_M2(char Matriz[10][10], char cadena[], int fil, int col)  /* procedimiento para pasar de una cadena a una matriz */
{


 k=0;
 for(int i=0;i<fil;i++)    /* variable local del procedimiento(int)*/
 {
  for(int j=0;j<col;j++)    /* variable local del procedimiento(int)*/
  {
  Matriz[i][j]=cadena[k];
  k++;
  }
 }
}

void Carga_M3(char Matriz1[10][10], char Matriz2[10][10], int fil, int col)  /* procedimiento para camabir las filas de una matriz por la
                                                                                 columnas y calcular la matriz resultante */
{

 for(i=0;i<fil;i++)
 for(j=0;j<col;j++)
  Matriz1[j][i]=Matriz2[i][j];
}

void Diagonal_Izq(char Matriz[10][10], int n)
{
 cout<<"\n";
 for( i=0;i<n;i++)   /* variable local del procedimiento(int)*/
 {

  cout<<Matriz[i][i]<<" ";
 }
}

void Diagonal_Der(char Matriz[10][10], int n)
{

j=n-1;
for(i=0;i<n;i++)
 cout<<Matriz[i][j--];
}

void Intercambio(char Matriz[10][10], int pf, int sf, int n )
{

for(int j=0;j<n;j++)       /* variable local del procedimiento(int)*/
 {

  /* se almacena el valor de Matriz[pf][j] en aux */
  aux=Matriz[pf][j];
  /* se almacena el valor de Matriz[sf][j] en Matriz[pf][j]*/
  Matriz[pf][j]=Matriz[sf][j];
  /* se almacena el valor original de Matriz[pf][j] en Matriz[sf][j]*/
  Matriz[sf][j]=aux;
 }
}
int main()   /* programa principal*/
{


cout<<"Ingrese la Segunda Cadena ";
cin.getline(cad2,50);

cout<<"\n La cadena que fue almacenada es . . . \n";

long_cad2=longitud(cad2);

Escribir_1(cad2,long_cad2);

cout<<"\n\n";

tam=15;

Carga_1(cad1,tam);

cout<<"\n La cadena almacenada es . . . \n";
Escribir_1(cad1,tam);

cout<<"\n";

cout<<"\n La PRIMERA CADENA es copiada en una Matriz de 5*3 por columnas \n";

Carga_M1(mat1,cad1);

cout<<"\n MATRIZ 1 \n";

Escribir_2(mat1,5,3);

x=sqrt(long_cad2);

x1=int(x);

m=n=x1;

if((x1*x1) == long_cad2)
{
   cout<<"\n Copiando la SEGUNDA CADENA EN LA MATRIZ 2 \n"<<m<<" x "<<n;
   Carga_M2(mat2,cad2,m,n);
   Escribir_2(mat2,m,n);
   cout<<"\n";
   Carga_M3(mat3,mat2,m,n);
   cout<<"\n";
   Escribir_2(mat3,m,n);
   cout<<"\n";
   Diagonal_Izq(mat3,x1);
   cout<<"\n";
   Diagonal_Der(mat3,x1);

 if(x1>3)
    Intercambio(mat3,1,3,x1);
}

cout<<"\n";

system("PAUSE");

return 0;
}

