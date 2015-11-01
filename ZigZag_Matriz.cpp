#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream.h>

main()
{

int l, z, i, j ;
cout<<"trabajo de JOSAFAT PIRAQUIVE TRIANA COD 260911"<<endl;

cout<<endl<<"DIGITE EL TAMAÑO DE LA MATRIZ(LARGO)"<<endl;
cin>>l;
cout<<"DIGITE LOS DATOS "<<endl;
int Z[l][l];
if (z%2==0)
{
for (z=0; z<l; z++)
  {
  if(l%2==0)
   {
      j=z;
      i=0;
      while (i<=z)
        {
          cin>>Z[j][i];
          i=i+1;
          j=j-1;
        }
   }
  else
   {
    i=z;
    j=0;
    while (j<=z)
    {
      cin>>Z[j][i];
      j=j+1;
      i=i-1;
    }
   }
  }

for (z=1; z<l; z++)
  {
    if(z%2==0)
    {
      i=z;
      j=l-1;
      while (j>=z)
       {
         cin>>Z[i][j];
         i=i+1;
         j=j-1;

       }
    }
    else
    {
      j=z;
      i=l-1;
      while (i>=z)
       {
         cin>>Z[i][j];
         j=j+1;
         i=i-1;
       }
    }
  }


cout<<endl<<"SU MATRIZ DESEADA ES:"<<endl;

i=0;
while (i<l)
 {
   j=0;
   while (j<l)
    {
     cout<<Z[i][j]<<"     ";

     j=j+1;
    }
      i=i+1;
      cout<<endl;
 }
}
else
{
for (z=0; z<l; z++)
 {
  if(z%2==0)
   {
    j=z;
    i=0;
    while (i<=z)
     {
      cin>>Z[j][i];
      i=i+1;
      j=j-1;
     }
   }
  else
   {
    i=z;
    j=0;
    while (j<=z)
     {
      cin>>Z[j][i];
      j=j+1;
      i=i-1;
     }
   }
 }

for (z=1; z<l; z++)
 {
  if(z%2==0)
   {
    j=z;
    i=l-1;
    while (i>=z)
     {
      cin>>Z[i][j];
      j=j+1;
      i=i-1;

     }
   }
  else
   {
    i=z;
    j=l-1;
    while (j>=z)
     {
      cin>>Z[i][j];
      i=i+1;
      j=j-1;
     }
   }
 }


cout<<endl<<"SU MATRIZ DESEADA ES:"<<endl;

i=0;
while (i<l)
 {
  j=0;
  while (j<l)
  {
    cout<<Z[i][j]<<"     ";

    j=j+1;
  }
   i=i+1; cout<<endl;
 }
}

  system("PAUSE");
  return 0;
}


