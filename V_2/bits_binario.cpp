#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

 int  FUNCION (unsigned int x)
{
  x=(x&0x55555555) + ((x>>1)&0x55555555);
  x=(x&0x33333333) + ((x>>2)&0x33333333);
  x=(x&0x0f0f0f0f) + ((x>>4)&0x0f0f0f0f);
  x=(x&0x00ff00ff) + ((x>>8)&0x00ff00ff);
  x=(x&0x0000ffff) + ((x>>16)&0x0000ffff);
  

  cout<< " "<< " La suma de los bits de valor 1 en el modo binario de su numero es :" << x << endl<< endl;
  return x; 
}

int main(int argc, char *argv[])
{
  unsigned int x;
  int L;
 
  char H;

    cout<<"----------------------------JOSAFAT PIRAQUIVE TRIANA----------------------------";
    cout<<"----------------------------------    260911    --------------------------------"<< endl<< endl;

      cout<<"La funcion que cumple el programa es sumar los bits de valor 1 en el modo       binario del numero que se introduce por el usuario, a continuacion se mostrara una tabla de ejemplos del programa"<< endl;
          cout<<" Decimal         Binario         Valor de x final"<< endl;
          cout<<" 0                      0000               0"<< endl;
          cout<<" 1                      0001               1"<< endl;
          cout<<" 2                      0010               1"<< endl;
          cout<<" 3                      0011               2"<< endl;
          cout<<" 4                      0100               1"<< endl;
		  cout<<" 5                      0101               2"<< endl;
		  cout<<" 8                      1000               1"<< endl;
		  cout<<" 11                     1011               3"<< endl;
		  cout<<" 15                     1111               4"<< endl;
           		  cout<<" estos son tan solo unos ejemplos"<< endl;
  H = 's';
   while ( H=='s')
    {
            
          
  cout<< endl<< endl<<" Escriba el valor de x: "<< " " ;
	cin>> x;
	L= FUNCION (x);
  cout<< endl <<" Digite s si quiere comvertir otro numero, si no lo desea digite n: " ;
   cin>> H;
   }
      
		return 0;
}
