#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>


int n, z, o, i, j, y ;
char x[n-1];
char w[o-1];
main(int argc, char *argv[])
{

  cout << " ingrese el numero de datos para la primera cadena " ;
  cin >> n ;
   cout << " ingrese el numero de datos para la segunda cadena " ;
  cin >> o ;
  cout << " ingrese la cadena " ;

  for ( i=0 ; i<= n-1 ; i++ )
  {
       cout<< "escriba el dato" ;
       cin >> x[i] ;
  }
  for ( j=0; j<= o-1 ; j++ )
  {
         cout<< "escriba el dato" ;
         cin >> w[j] ;
  }

  if ( n > o )
  {
    for  ( i=0 ; i<= n-1 ; i++ )
       {
         for ( j=0; j<= o-1 ; j++ )
           {
             if ( x[i] = w[j] )
             {
               y = y + 1 ;
             }
             else
             {
               y = y + 0 ;
             }
           }
       }

       if ( y = o-1 )
       {
          cout << " o si es una subcadena de n " ;
       }

       else
       {
         cout << " o no es una subcadena de n " ;
       }
  }

  else
  {
    for  ( j=0; j<= o-1 ; j++ )
       {
         for ( i=0 ; i<= n-1 ; i++ )
           {
             if ( w[j] = x[i] )
             {
               y = y + 1 ;
             }
             else
             {
               y = y + 0 ;
             }
           }
       }

       if ( y = n-1 )
       {
          cout << " n si es una subcadena de o " ;
       }

       else
       {
         cout << " n no es una subcadena de o " ;
       }
 getch() ;
 return(0) ;
}
