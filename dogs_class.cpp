/* Ejemplo programa en C++ */
/* programa que calcula e imprime las variables aplicadas a la formula */

#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>


main ( )
{
 int R=0 ;
 int edad=0 ;
 int adicionales=0 ;
 int adi=0 ;
 float T=0 ;
 double P=0 ;

 cout<<"elija la raza de su perro: san bernardo (1), labrador(2), pastor aleman(3):" ;
 cin>> R;

 switch (R)
 {
  case 1:
   cout <<"diga la edad de su perro: si es menor que 3(1), si tiene entre entre 3 y 8(2), si es mayor que 8 (3)";
   cin>> edad ;


    switch (edad)
    {
     case 1:
      cout <<"su precio es 300000" ;
      cin>> P;
       break;
     case 2:
      cout<<"su precio es 250000" ;
      cin>> P;
      break;
     case 3:
        P= 250000 - (250000*0.2);
      cout <<" su precio es "<< P ;
      cin>> P;
      break;
    }
  break;
  case 2:
   cout <<"diga la edad de su perro: si es menor que 3(1), si tiene entre entre 3 y 8(2), si es mayor que 8 (3)";
   cin>> edad ;


    switch (edad)
    {
      case 1:
       cout<<"su precio es 250000" ;
       cin>> P;
       break;
      case 2:
       cout<<"su precio es 220000" ;
       cin>> P;
       break;
      case 3:
        P=220000 - (220000*0.2);
       cout <<" su precio es "<< P ;
       cin>> P;
       break;
    }
  break;
  case 3:
   cout <<"diga la edad de su perro: si es menor que 3(1), si tiene entre entre 3 y 8(2), si es mayor que 8 (3)";
   cin>> edad ;

    switch (edad)
   {
     case 1:
      cout<<"su precio es 230000" ;
      cin>> P;
     break;
     case 2:
      cout<<"su precio es 200000" ;
      cin>> P;
     break;
     case 3:
        P=200000 - (200000*0.2);

      cout <<" su precio es (P) "<< P ;
      cin>> P;
     break;
   }
   break;
 }

 cout <<" quiere adicionales: si(1), no(2) " ;
 cin>> adicionales;

  switch (adicionales)
  {
   case 1:
     cout<<"que adicional quiere: vacunas (1), plan veterinario (2), lo dos anteriores (3)" ;
     cin>> adi;

    switch (adi)
    {
     case 1:
     T= (P+35000);
       cout <<" su precio es "<< T ;
     break;
     case 2:
     T= P+150000;
      cout <<" su precio es "<< T ;
     break;
     case 3:
     T= P+((150000+35000)*0.2);
      cout <<" su precio es "<< T ;
     break;
    }
   break;
   case 2:
    cout<<" empezar" ;
   break;
  }

 getch() ;
 return(0) ;
}
