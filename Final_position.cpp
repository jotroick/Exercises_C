/* Ejemplo programa en C++ */
/* programa que calcula e imprime las variables aplicadas a la formula */

#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>


main ( )
{
 float  Xo=0.0;
 float  Vo=0.0;
 float  T=0.0;
 float  X=0.0;

 cout<<"Digite posicion inicial Xo:" ;
 cin>> Xo;
 cout<<" Digite el valor de la velocidad inicial  Vo:" ;
 cin>> Vo;
 cout<<"Digite el tiempo T:" ;
 cin>> T;


      X=((T*T)*9.8*(-0.5))+(Vo*T)+Xo;

 cout <<"la posicion final es:"<< X ;

 getch() ;
 return(0) ;
}
