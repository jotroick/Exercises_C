#include <iostream.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

unsigned short int sum(unsigned short int A,unsigned short int B)

{
	unsigned short int  mantisaA, mantisaB, ordenA, ordenB, Y ;
    int X;

	mantisaA= A&0xFFF;
	mantisaB= B&0xFFF;
	ordenA=A>>12&0xF;
	ordenB=B>>12&0xF;

    if(ordenA<ordenB)
    {
		X=ordenB-ordenA;
		ordenA=ordenA+X;
		mantisaA= mantisaA/Y(2,X);
	}
	

	if(ordenA>ordenB)
    {
		X=ordenA-ordenB;
		ordenB=ordenB+X;
		mantisaB= mantisaB /Y(2,X);
	}


	unsigned short int mantisa=mantisaA+mantisaB;
	
	if (mantisa>4095)
    {
		mantisa=mantisa/10;
	}

	mantisa=(ordenA<<12)|mantisa;
	return mantisa;


}
unsigned short int numeros (float H)
{
	
	
	float K;
	unsigned short int orden, C;
    float J;

    K=H;
	J=K;
	orden=0;

	while (J>1)
	{
		J=J/2;
		orden = orden + 1;
	}

     J=J*10000;



if(J>4095)
  {
    J=J/10;
  }
     unsigned short int J;
  C = J;

  C = orden<<12 |C;

  return C;
}





int main(int argc, char *argv[])
{
	unsigned short int Z=0;
	unsigned short int W=0;
	unsigned short int sumar=0;
    float A, B;

    cout<<"----------------------------JOSAFAT PIRAQUIVE TRIANA----------------------------";
    cout<<"----------------------------------    260911    --------------------------------"<< endl<< endl;

      cout<<"La funcion que cumple el programa es sumar"<< endl;
    cout<< endl<< endl<<" Escriba el valor del primer numero A: "<<;
    cin>>A;
    cout<< endl<< endl<<" Escriba el valor del segundo numero B: "<<;
	cin>>B;
	cout<<endl;

	Z=numeros(B);
	W=numeros(A);

	sumar=sum(Z,W);

}
