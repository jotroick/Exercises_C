#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <windows.h>

void F1 (char*buf , char*buf2, int x)
{
  char*p;
  p = (char*)buf2;
  char*p2;
  p2 = (char*)buf;

  while (x)
  {
    *p2++ = *p++;                                                                                                                                                                                                                                                                                                                                                                                     //////////////////98 7idxz
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
int main()
{
  int x;
  int i ;
  int l;
  char cadena[]= "josafat" ;
  char cadena2[]= "jasafat" ;
  char*buf = cadena ;
  char*buf2 = cadena2;
  x=8;



  unsigned j = GetTickCount ();
  for ( i=0 ; i<10000000; i++)
  {
    F1(buf, buf2, x);
  }
   unsigned j2 = GetTickCount ();

  unsigned d = GetTickCount ();
      for ( l=0 ; l<10000000; l++)
  {
   F2(buf, buf2, x);
  }
   unsigned d1 = GetTickCount ();

   unsigned o = j2 - j;
   unsigned y = d1 - d ;

   cout << o << endl;
      cout << y << endl;
   system ("PAUSE");
  return 0;
}
