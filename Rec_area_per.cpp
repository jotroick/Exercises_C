/* Ejemplo programa en C++ */
/* programa que calcula e imprime las variables aplicadas a la formula */

#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>


main ( )
{
 float  BA=0.0;
 float  AL=0.0;
 float  PE=0.0;
 float  AR=0.0;


 cout<<"Digite la base del rect:" ;
 cin>> BA;
 cout<<" Digite la altura del rect:" ;
 cin>> AL;


      PE=BA+BA+AL+AL;

 cout <<"perimetro es: "<< PE<<endl;

        AR=BA*AL;

 cout <<"el area es: "<<AR;

 getch() ;
 return(0) ;
}
