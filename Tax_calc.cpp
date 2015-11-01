/* Ejemplo programa en C++ */
/* programa que calcula e imprime las variables aplicadas a la formula */

#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>


main ( )
{
 float  VI=0.0;
 float  VP=0.0;
 float  V=0.0;
 float  I=0.0;
 float  VE=0.0;

 cout<<"DIGITE EL VALOR DEL PRODUCTO CON I.V.A:" ;
 cin>> VI;
 cout<<"DIGITE EL VALOR DE PAGO:" ;
 cin>> VP ;

 V=VI/1.16;

 I=0.16 *V;

 VE=VP-VI;

  cout <<"VALOR DEL PRODUCTO ES: "<< V<<endl<<endl;
  cout <<"EL VALOR DEL IVA ES: "<< I<<endl<<endl;
  cout <<"EL VALOR A DEVOLVER AL CLIENTE ES: "<< VE<<endl<<endl;



 getch() ;
 return(0) ;
}
