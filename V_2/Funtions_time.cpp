#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

void F1 (char*buf , char*buf2, int x)
{
  char*p;
  p = (char*)buf2;
  char*p2;
  p2 = (char*)buf;

  while (x)
  {
    *p2++ = *p++;
    x--;
  }
}

void F2 (char*buf , char*buf2, int x)
{
   char *p;
   p = (char*) buf2 + x ;
   char *p2;
   p2 = (char*)buf + x ;
    while (x)
  {
    *(--p2) = *(--p);
    x--;
  }
}

int t;
int main(int argc, char *argv[])
{
  int x;
  int i ;
  int l ;
  char cadena[1024] ;
  char cadena2[1024] ;
  char*buf ;
  buf = cadena ;
  char*buf2 ;
  buf2 = cadena2;
  x=1024;


  unsigned j = GetTickCount ();
  for ( i=0 ; i<10000; i++)
  {
    F1(buf, buf2, x);
  }
   unsigned j2 = GetTickCount ();

  unsigned d = GetTickCount ();
      for ( l=0 ; l<10000; l++)
  {
   F2(buf, buf2, x);
  }
   unsigned d1 = GetTickCount ();
   float  o = j2-j;
   float y = d1 - d ;

   cout << " JOSAFAT PIRAQUIVE TRIANA - COD: 260911 - TAREA  "<< endl << endl;
   cout << " - El tiempo que tarda la funcion 1 en ejecutarse es  "<< o << endl;
   cout << " - El tiempo que tarda la funcion 2 en ejecutarse es  " << y << endl<< endl<< endl;
   cout << " Los promedios de los tiempos hallados:  "<< endl << endl;
   cout << " - T1: F1=47 , F2=187 "<< endl ;
   cout << " - T2: F1=63 , F2=125 "<< endl ;
   cout << " - T3: F1=78 , F2=125 "<< endl ;
   cout << " - T4: F1=63 , F2=219 "<< endl ;
   cout << " - T5: F1=63 , F2=157 "<< endl<< endl << endl ;
   cout << " Podemos ver que la funcion 2 tarda mas tiempo en ejecutarse que la funcion 1,  "<< endl;
   cout << " como lo demuestran los tiempos hallados, esto de cierta manera se puede dar   "<< endl ;
   cout << " debido a que la funcion 2 empieza desde el final no desde el comienzo como   "<< endl ;
   cout << "  lo hace la funcion 1.  "<< endl << endl;
  system ("PAUSE");
  return 0;
}
