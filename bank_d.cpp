#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

 char  s;
long int sali, salf, numero1, fecha1, ret, con, d, A[100][4];
int  i;
int  n, j, tip;



int LEERDATOS (char nombre[100][25],long int cuenta[100]  )
{
   cout<<"Ingrese el numero de cuenta  ";
   cin>> cuenta[i];
   cout<<"Ingrese el nombre del usuario " ;
   gets(nombre[i]);
   cout<<"Ingrese la cantidad de dinero con que el usuario inico su cuenta bancaria "<< endl;
   cin>> sali;
   d=sali;
   A[i][0]= d ;
   return 0;
}

int TRANSACCIONES ( )
{
  char X;
  int tran;
  int  tip ;
  tran=0;
tip=0;
X='s';
     while(X == 's' )
     {
    cout<<"ingrese la fecha de la transaccion "<< endl;
    cin>> fecha1;
    A[i][1]=  fecha1;
    cout<<" cual tipo de transaccion realizo: "<< endl;
    cout<<"   (1) retiro "<< endl;

    cout<<"   (2) consignacion "<< endl;

    cout<<"   (3) cosultar saldo "<< endl;
    cin>> tip;

         switch (tip)
         {
           case 1:

           cout <<"su transaccion fue retiro" ;
           cout <<"cuanto dinero retiro " ;
           cin>> ret;
           if (ret>sali)
           {
           cout <<"no retiro porque no tenia fondos" ;
           }
           else
           {
              salf = sali - ret ;
              sali = salf;
           }
            break;

          case 2:
          cout<<"su transaccion fue consignar " ;
          cout <<"cuanto dinero cosigno " ;
           cin>> con;

           salf = sali + con ;
           sali = salf;
          break;
          case 3:
          cout <<" su transaccion fue consultar saldo ";

          break;

         }
         cout <<"  hizo otra transaccion?  s/n";
        cin>>X;
       tran=tran+1;

     }
       A[i][2]= salf;
        A[i][3]= tran;




       return 0;
}




int main()
{
  char nombre [100][25], H;
   long int cuenta[100];
   int L, M ;


  i=0;
  H = 's' ;
  while(H == 's' )
  {
         L = LEERDATOS (nombre, cuenta);
         M = TRANSACCIONES ( );


        cout <<"  quiere otro ?  s/n";
        cin>>H;
         i=i+1;
  }

           for ( n=0; n<i; n++)
           {

             cout<< cuenta[n]<<"\t";
             cout<< nombre[n]<<"\t";
             for (j=0; j<4; j++)
             {
             cout<< A[n][j]<< "\t" ;
             }

                cout<<endl;
            }



 system ("PAUSE");
return 0;

}

