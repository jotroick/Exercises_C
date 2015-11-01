#include <iostream.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

unsigned short int resta(unsigned short int A,unsigned short int B)
{
   unsigned short int  mantisaA, mantisaB, expm, expx,;


	mantisaA= A&0xFFF;
	mantisaB= B&0xFFF;
	expx=A>>12&0xF;
	expm=B>>12&0xF;

	int dif;
    unsigned short int pow;

	if(expx>expm)
    {
		dif=expx-expm;
		expm=expm+dif;
		mantisaB=(mantisaB)/(pow(2,dif));
	}

	if(expx<expm)
    {
		dif=expm-expx;
		expx=expx+dif;
		mantisaA=(mantisaA)/(pow(2,dif));
	}

	if(mantisaB>mantisaA)
    {
     return 0;
    }

	unsigned short int mantisa;
     mantisa=mantisaA-mantisaB;
	
	if (mantisa>4095){
		mant=mantisa/10;
	}
	mant=(expx<<12)|mantisa;
	return mantisa;


}


unsigned short int suma(unsigned short int m,unsigned short int x){
	unsigned short int expm, expx, mantisaB, mantisaA;

	mantisaA= x&0xFFF;
	mantisaB= m&0xFFF;
	expx=x>>12&0xF;
	expm=m>>12&0xF;
	int dif;
	if(expx>expm){
		dif=expx-expm;
		expm=expm+dif;
		mantisaB=(mantisaB)/((unsigned short int)pow(2,dif));
	}
	if(expx<expm){
		dif=expm-expx;
		expx=expx+dif;
		mantisaA=(mantisaA)/((unsigned short int)pow(2,dif));
	}
	
	unsigned short int mantisa=mantisaA+mantisaB;
	
	if (mantisa>4095){
		mantisa=mantisa/10;
	}
	mantisa=(expx<<12)|mantisa;
	return mantisa;


}

unsigned short int convertir (float m) {
	
	
	float temp;
	unsigned short int exp;
	temp=m;
	float otro;
	otro=temp;
	exp=0;
	while (otro>1)
	{
		otro=otro/2;
		exp++;
	}

otro=otro*10000;
unsigned short int s;
if(otro>4095){otro=otro/10;}
s=(unsigned short int)otro;

s=(exp<<12)|s;




		return s;
}

main()
{
	unsigned short int f=0;
	unsigned short int f2=0;
	unsigned short int sum=0;
	unsigned short int rest=0;
	float A, B;
	cin>>A;
	cin>>B;
	cout<<endl;
	f=convertir(B);
	f2=convertir(A);
	sum=suma(f,f2);	
	rest=resta(f2,f);

}
