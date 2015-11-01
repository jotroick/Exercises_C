#include <iostream.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>

double saldo[100];
int fecha [100];
int tipo_trans[100];
double valor [100], nuevo_saldo[100];
int posicion_ultima[100], num_trans[100], ultima_nombre[1000];
int num;
char nombre[1000][100];

void copiar (char aux [100], char nombre [100][100], int i)
     {
     int j;
     j=0;
     while (aux[j]!= '\0')
         {
         nombre [i][j]=aux[j];
         j++;
         }
     }

void saldo_usuario (int i)
     {
     cout<<"Ingrese el saldo del cliente "<<endl;
     cin>>saldo[i];
     cout<<endl;
     }

int nombre_usuario (char nombre[100][100], int i)
     {
     char aux[100];
     cout<<"Ingrese el nombre del cliente: "<<endl;
     gets(aux);
     cout<<endl;
     ultima_nombre[i]=strlen(aux);
     copiar (aux, nombre, i);
     saldo_usuario (i);
     return 0;
     }

void retiro (int fecha[100], int n, double valor[100], double nuevo_saldo[100], int i, double saldo[100], int m)
     {
     double aux;
     cout<<"Ingrese la fecha ";
     cout<<endl;
     cin>>fecha[n];
     cout<<endl;
     cout<<"Ingrese el monto de dinero retirado ";
     cout<<endl;
     cin>>valor[n];
     cout<<endl;
     if (m==1)
        {
        nuevo_saldo[n]=saldo[i]-valor[n];
        }
     else
        {
        nuevo_saldo[n]=nuevo_saldo[n-1]-valor[n];
        }
     }

int consignacion (int fecha[100], int n, double valor[100], double nuevo_saldo[100], int i, double saldo[100], int m)
     {
     double aux;
     cout<<"Ingrese la fecha. (DD/MM/AAAA) ";
     cout<<endl;
     cin>>fecha[n];
     cout<<endl;
     cout<<"Ingrese el monto de dinero consignado";
     cout<<endl;
     cin>>valor[n];
     cout<<endl;
     if (m==1)
        {
        nuevo_saldo[n]=saldo[i]+valor[n];
        }
     else
        {
        nuevo_saldo[n]=nuevo_saldo[n-1]+valor[n];
        }
     return 0;
     }

void consulta_saldo (int fecha[100], int n, double valor[100], double nuevo_saldo[100], int i, double saldo[100], int m)
     {
     cout<<endl;
     cout<<"Ingrese la fecha. (DD/MM/AAAA) ";
     cin>>fecha[n];
     cout<<endl;
     cout<<"Su saldo es: ";
          if (m==1)
        {
        cout<<saldo[i];
        nuevo_saldo[n]=saldo[i];
        }
     else
        {
        cout<<nuevo_saldo[n-1];
        nuevo_saldo[n]=nuevo_saldo[n-1];
        }
       cout<<endl;
     }

void pago_servicios (int fecha[100], int n, double valor[100], double nuevo_saldo[100], int i, double saldo[100], int m)
     {
     cout<<"Recuerde que el pago de servicios a través del banco descuenta el 0.5% de su pago"<<endl;
     cout<<"Ingrese la fecha. (DD/MM/AAAA) ";
     cin>>fecha[n];
     cout<<"Ingrese el valor de la factura";
     cin>>valor[n];
          if (m==1)
        {
        nuevo_saldo[n]=saldo[i]-(valor[n]*1.05);
        }
     else
        {
        nuevo_saldo[n]=nuevo_saldo[n-1]-(valor[n]*1.05);
        }
     }

int transacciones (int i, double saldo[100], int &numero_trans, int &num)
     {
     int tipo, x;
     numero_trans=0;
     char flag;
     do
         {
         cout<<"Escoga la transaccion realizada por el cliente"<<endl;
         cout<<"Oprima 1 para retiro"<<endl;
         cout<<"Oprima 2 para consignacion"<<endl;
         cout<<"Oprima 3 para consulta de saldo"<<endl;
         cout<<"Oprima 4 para pago de servicos"<<endl;
         if (numero_trans==0)
            {
            cout<<"Oprima 5 si no se realizo transaccion"<<endl;
            }
         cin>>tipo;
         cout<<endl;
         if (tipo!=5)
         {
                  tipo_trans[numero_trans]=tipo;
                  numero_trans++;
                  num++;
         }
         switch (tipo)
            {
              case 1:
              retiro (fecha, num, valor, nuevo_saldo, i, saldo, numero_trans);
              break;

              case 2:
              x=consignacion (fecha, num, valor, nuevo_saldo, i, saldo, numero_trans);
              break;

              case 3:
              consulta_saldo (fecha, num, valor, nuevo_saldo, i, saldo, numero_trans);
              break;

              case 4:
              pago_servicios (fecha, num, valor, nuevo_saldo, i, saldo, numero_trans);
              break;

              case 5:
              nuevo_saldo[num]=saldo[i];
              flag='n';
              break;
            }
       if (tipo!=5)
       {
       cout<<endl;
       cout<<"Desea realizar otra transaccion? Si su respuesta es si, oprima la letra `s`. ";
       cout<<"De lo contrario oprima otra letra "<<endl;
       cin>>flag;
       }
        }
        while (flag=='s'|flag=='S');
     posicion_ultima[i]=num;
     num_trans[i]=numero_trans;
     return 0;
     }

int imprimir (int i, long int numero_cuenta [100])
{
int j, s, k;
cout<< endl<<endl<<endl;
cout<<"FECHA"<<"   ";
cout<<"No." <<"\t";
cout<<"NOMBRE DE USUARIO     "<<"   ";
cout<<"No. TRANS" <<"   ";
cout<<"SALDO FINAL";
cout<<endl<<endl;
for (j=0; j<i; j++)
    {
    cout<<fecha[posicion_ultima[j]]<<"\t";
    cout<<numero_cuenta[j]<<"\t";
     s=0;
     for (s=0; s<=ultima_nombre[j]; s++)
         {
         cout<<nombre [j][s];
         }
     for (k=ultima_nombre[j]; k<30; k++)
         {
         cout<<" ";
         }
     cout<<num_trans[j]<<"\t";
     cout<<nuevo_saldo[posicion_ultima[j]]<<"\t";
     cout<<endl;
    }
    return 0;
}

void main()
{
long int numero_cuenta[100];
int i, k, j, t, s, x;
char aux[100];
char band;
num=(-1);
cout<<"    ********************************************************************** "<<endl;
cout<<"  **********************************************************************"<<endl;
cout<<"***********************BIENVENIDO AL BANCO GENERAL********************"<<endl;
cout<<"  **********************************************************************"<<endl;
cout<<"    ********************************************************************** "<<endl<<endl<<endl;
cout<<"Con este servicio usted podra realizar todas sus transacciones"<<endl;
i=0;
band='s';
while (band=='s'|band=='S')
      {
      cout<<"Ingrese el numero de cuenta del cliente "<<i+1<<" :"<<endl;
      cin>>numero_cuenta[i];
      cout<<endl;
      x=nombre_usuario(nombre, i);
      x=transacciones (i, saldo, t, num);
      cout<<"Desea ingresar un nuevo cliente? Si su respuesta es si, oprima la letra `s`. ";
      cout<<"De lo contrario oprima otra letra "<<endl;
      cin>>band;
      i=i+1;
      }
      x=imprimir(i, numero_cuenta);
      system("PAUSE");
}
