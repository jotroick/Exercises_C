/* Ejemplo programa en C++ */
/* programa que calcula e imprime las variables aplicadas a la formula */



#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>


main ( )
{
 float  hp1;
 float  hp2;
 float  hp3;
 float  hp4;
 float  n1=0.0;
 float  n2=0.0;
 float  n3=0.0;
 float  n4=0.0;
 float  C1=0.0;
 float  C2=0.0;
 float  C3=0.0;
 float  C4=0.0;
 float  P1=0.0;
 float  P2=0.0;
 float  P3=0.0;
 float  P4=0.0;
 float  PT=0.0;
 float  ES1;
 float  ES2;
 float  ES3;
 float  ES4;
 float  ESTSUS;




 cout << endl<< endl <<"PROGRAMA PARA HALLAR EL PROMEDIO ACADEMICO Y ESTADO ACADEMICO DEL ESTUDIANTE, BIENVENIDO  " ;
 cout << endl<< endl <<"SIGA LAS INSTRUCCIONES, POR FAVOR  " ;
 cout << endl<< endl <<"Digite el numero de las horas presenciales POR SEMESTRE de la PRIMERA materia, por favor:  " ;
  cin>> hp1;
 cout << endl<< endl <<"Digite el numero de las horas presenciales POR SEMESTRE de la SEGUNDA materia, por favor:  " ;
  cin>> hp2;
 cout << endl<< endl <<"Digite el numero de las horas presenciales POR SEMESTRE  de la TERCERA materia, por favor:  " ;
  cin>> hp3;
 cout << endl<< endl << "Digite el numero de las horas presenciales POR SEMESTRE de la CUARTA materia, por favor:  " ;
  cin>> hp4;

  C1 = (((hp1)+(2*(hp1)))/48) ;
  C2 = (((hp2)+(2*(hp2)))/48) ;
  C3 = (((hp3)+(2*(hp3)))/48) ;
  C4 = (((hp4)+(2*(hp4)))/48) ;


 cout<< endl<< endl << "el numero de creditos de la PRIMERA materia es:   "<< C1 ;
 cout<< endl<< endl << "el numero de creditos de la SEGUNDA materia es:   "<< C2 ;
 cout<< endl<< endl << "el numero de creditos de la TERCERA materia es:   "<< C3 ;
 cout<< endl<< endl << "el numero de creditos de la CUARTA materia es:    "<< C4 ;


 cout<< endl<< endl << endl<< endl  << "Digite la nota final de la PRIMERA materia, por favor:   " ;
  cin>> n1;
 cout<< endl<< endl << "Digite la nota final de la SEGUNDA materia, por favor :   " ;
  cin>> n2;
 cout<< endl<< endl << "Digite la nota final de la TERCERA materia, por favor :   " ;
  cin>> n3;
 cout<< endl<< endl << "Digite la nota final de la CUARTA materia, por favor:     " ;
  cin>> n4;

  P1 = (n1*C1) ;
  P2 = (n2*C2) ;
  P3 = (n3*C3) ;
  P4 = (n4*C4) ;


     PT = ((P1+P2+P3+P4)/(C1+C2+C3+C4));

 cout<< endl<< endl << "el PROMEDIO ACADEMICO TOTAL del estudiantes es:     " << PT ;

 if ( n1 >= 3)
 {
   ES1 = ( 1 )  ;
 }
 else if ( n1 < 3)
 {
  ES1 = ( 0 )  ;
 }

 if ( n2 >= 3)
 {
   ES2 = ( 1 ) ;
 }
 else if ( n2 < 3)
 {
  ES2 = ( 0 ) ;
 }

 if ( n3 >= 3)
 {
   ES3 = ( 1 ) ;
 }
 else if ( n3 < 3)
 {
  ES3 = ( 0 ) ;
 }

 if ( n4 >= 3)
 {
   ES4 = ( 1 ) ;
 }
 else if  ( n4 < 3)
 {
  ES4 = ( 0 ) ;
 }

 ESTSUS = (ES1 + ES2 + ES3 + ES4) ;

  if ( ESTSUS == 0)
  {
    cout<< endl<< endl << " EL ESTADO ACADEMICO DEL ESTUDIANTE ES EXCLUIDO  " ;
  }
  else if ( ESTSUS == 4)
  {
    cout<< endl<< endl << " EL ESTADO ACADEMICO DEL ESTUDIANTE ES NORMAL " ;
  }
  else if ( 1<ESTSUS<3 , PT < 3.2 )
  {
  cout<< endl<< endl << " EL ESTADO ACADEMICO DEL ESTUDIANTE ES SUSPENDIDO  " ;
  }
  else if ( 1>ESTSUS>3 , PT > 3.2 )
  {
   cout<< endl<< endl << " EL ESTADO ACADEMICO DEL ESTUDIANTE ES NORMAL  "<< endl ;
  }

 getch() ;
 return(0) ;
}
