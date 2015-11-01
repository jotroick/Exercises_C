#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>

int  R, R1, R2, edad, edad2, edad3, adicionales, adi;
double P, T ;

main( )
{
 cout << " ¿ La RAZA de su perro, es san bernardo ?
       -  Si es san bernardo digite  (1)
       -  Si no es san bernardo digite (2)  :   " ;
 cin >> R ;

 if (R == (1))
 {
  cout << endl << endl <<" ¿La EDAD de su perro es menor que 3 años ?
       -  Si es menor digite  (1)
       -  Si es mayor digite  (2)  :   ";
  cin >> edad ;

 if  (edad == (1))
     {
      P=300000 ;
       cout << endl<< endl << "El precio de su perro con estas caracteristicas es: 300000" ;
     }
 else if ( edad == (2))
     {
        cout << endl << endl <<" ¿La EDAD de su perro esta entre 3 y 8 años ?
                 -  Si es digite  (1)
                 -  Si no es digite  (2)  :   ";
        cin >> edad2 ;

   if ( edad2 == 1)
       {
        P=250000 ;
        cout<< endl<< endl <<"El precio de su perro con estas caracteristicas es: 250000" ;
       }
   else if ( edad2 == 2)
       {
         cout << endl << endl <<" ¿La EDAD de su perro es mayor a 8 años ?
                 -  Si es digite  (1)
                 -  Si no es digite  (2)  :   ";
          cin >> edad3 ;

          if ( edad3 == 1)
            {
                P= 250000 - (250000*0.2);
                 cout << endl<< endl <<" El precio de su perro con estas caracteristicas es: "<< P ;
            }
          else if (edad3 == 2)
            {
               cout << endl<< endl <<" No tenemos su perro, si gusta elija otra raza "<< P ;
            }
       }
     }
 }
 else if ( R == 2)
 {
   cout << " ¿ La RAZA de su perro, es LABRADOR ?
       -  Si es labrador digite  (1)
       -  Si no es labrador digite (2)  :   " ;
   cin >> R1 ;

   if ( R1 == 1)
   {
    cout << endl << endl <<" ¿La EDAD de su perro es menor que 3 años ?
       -  Si es menor digite  (1)
       -  Si es mayor digite  (2)  :   ";
    cin >> edad ;

     if  (edad == (1))
      {
        P=250000 ;
       cout << endl<< endl <<"El precio de su perro con estascaracteristicas es: 250000" ;
      }
     else if ( edad == (2))
      {
        cout << endl << endl <<" ¿La EDAD de su perro esta entre 3 y 8 años ?
                 -  Si es digite  (1)
                 -  Si no es digite  (2)  :   ";
        cin >> edad2 ;

         if ( edad2 == 1)
         {
           P= 220000 ;
             cout << endl<< endl <<"El precio de su perro con estas caracteristicas es: 220000" ;
         }
         else if ( edad2 == 2)
         {
           cout << endl << endl <<" ¿La EDAD de su perro es mayor a 8 años ?
                 -  Si es digite  (1)
                 -  Si no es digite  (2)  :   ";
            cin >> edad3 ;

            if ( edad3 == 1)
               {
                P=220000 - (220000*0.2);
                 cout << endl<< endl <<" El precio de su perro con estas caracteristicas es: "<< P ;
               }
            else if (edad3 == 2)
               {
               cout << endl<< endl <<" No tenemos su perro, si gusta elija otra raza "<< P ;

               }
         }
      }
   }
 }
 cout << endl<< endl <<" Quiere tomar los servicios adicionales que estan en promocion por solo 6 meses:
                         -  Si digite (1)
                         -  No digite (2)    :      " ;
 cin>> adicionales;

 if ( adicionales == 1)
 {
  cout << endl<< endl<<" Que adicional se le ofrece :
                             -  Si son Vacunas  digite           (1)
                             -  Si es el Plan veterinario digite (2)
                             -  Si son Los dos servicios digite  (3)  :       " ;
     cin>> adi;

     if ( adi == 1)
     {
      T= (P+35000);
       cout << endl<< endl <<" El precio de su perro con estas caracteristicas y los servicios adicionales es: "<< T ;
     }
     else if ( adi == 2)
     {
       T= P+150000;
      cout << endl<< endl <<" El precio de su perro con estas caracteristicas y los servicios adicionales es: "<< T ;
     }
     else if (adi == 3)
     {
      T= P+((150000+35000)*(0.2));
      cout << endl<< endl <<" El precio de su perro con estas caracteristicas y los servicios adicionales es: "<< T ;
     }
 }
 else if ( adicionales == 2)
 {
  cout << endl<< endl <<" El precio de su perro con estas caracteristicas es: "<< P << endl ;
 }
 getch ()  ;
 return(0) ;

}
