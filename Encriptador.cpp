#include <iostream.h>
#include <stdlib.h>
#include <conio.h>

/* Lee la primera cadena teniendo en cuenta una longitud de n caracteres
establecida en el procedimiento principal*/
void Carga_1(char cadena[],int n){
 int i;
 cout<<"Digite (Una cadena de 15 caracteres)  ";
 for(i=0;i<n;i++)
 cin>>cadena[i];
}
/*Imprime la cadena dada dependiendo de su longitud n*/
void Escribir_1(char cadena[], int n){
for(int i=0;i<n;i++)
 cout<<cadena[i];
}
/*Hace un conteo del número de letras de la cadena dada y retorna el valor
obtenido*/
int longitud(char cadena[]){
  int i;
  i=0;
 while (cadena[i]!= '\0')
    i++;
 return i;
}
/*Almacena en una matriz de tamaño máximo 10*10 una cadena en una matriz 5 filas
y 3 columnas avanzando primero por filas y luego por columnas*/
void Carga_M1(char Matriz[10][10], char cadena[]){
 int k,j,i;
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
/*Imprime una matriz de tamaño máximo 10*10 dependiendo del número columnas y
filas establecidas en el procedimiento principal*/
void Escribir_2(char Matriz[10][10],int fil,int col){
 int i,j;
 for(i=0;i<fil;i++){
  cout<<"\n";
  for(j=0;j<col;j++) {
   cout<<Matriz[i][j]<<" ";
  }
 }
}
/*Almacena en una matriz de tamaño máximo 10*10 una cadena dependiendo del
número de filas y columnas dadas en el procedimiento principal*/
void Carga_M2(char Matriz[10][10],char cadena[],int fil,int col){
int k;
k=0;
for(int i=0;i<fil;i++)
 {
 for(int j=0;j<col;j++)
  {
  Matriz[i][j]=cadena[k];
  k++;
  }
 }
}
/*Copia de una cadena a otra el contenido dependiendo del número de filas y
columnas establecidas en el procedimiento principal, pero mientras una avanza
primero por columnas y luego por filas, la otra hace todo lo contrario*/
void Carga_M3(char Matriz1[10][10],char Matriz2[10][10], int fil,int col) {
int i,j;
for(i=0;i<fil;i++)
 for(j=0;j<col;j++)
  Matriz1[j][i]=Matriz2[i][j];
 }
/*Escribe el contenido de una matriz de tamaño máximo 10*10 avanzando en una
diagonal que inicia de la esquina superior izquierda hasta la inferior derecha*/
void Diagonal_Izq(char Matriz[10][10],int n){
int i;
for(i=0;i<n;i++){
  cout<<Matriz[i][i]<<" ";}
}
/*Escribe el contenido de una matriz de tamaño máximo 10*10 avanzando en una
diagonal que inicia de la esquina superior derecha hasta la inferior izquierda*/
void Diagonal_Der(char Matriz[10][10],int n){
int j,i;
j=n-1;
for(i=0;i<n;i++)
 cout<<Matriz[i][j--];
}
/*Inmtercambia una fila por otra en una matriz de tamaño máximo 10*10*/
void Intercambio(char Matriz[10][10],int pf,int sf,int n){
int j,aux;
for(j=0;j<n;j++){
  aux=Matriz[pf][j];
  Matriz[pf][j]=Matriz[sf][j];
  Matriz[sf][j]=aux;
 }
}
int main()
{
char cad1[50],cad2[50],mat1[10][10],mat2[10][10], mat3[10][10];
int long_cad2,tam,x1,m,n;
double x;
cout<<"Ingrese la Segunda Cadena ";
cin.getline(cad2,50);
cout<<"\n La cadena fue almacenada es . . . \n";
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
if((x1*x1) == long_cad2){
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

