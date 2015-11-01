#include <iostream.h>
#include <stdlib.h>
#define DPTOS 3

void main()
{
     int votos[DPTOS][7],votantes[DPTOS],abstencion[DPTOS],total,i,j;
     int maximo,max_indice;
     system("CLS");
     for(i=0;i<DPTOS;i++) {
           for(j=0;j<=6;j++)  {
                if(j == 0) {
                       cout<<"Votos en blanco en el Dpto " <<i<<": ";
	       cin>>votos[i][j]; // Almacena los datos leidos en la matriz
                }
                else {
                        cout<<"Votos del partido P"<<j<<" en el Dpto "<<i<<": ";
	        cin>>votos[i][j]; // Almacena los datos leidos en la matriz
                }
           }
     }
     cout<<endl;
     for(i=0;i<DPTOS;i++){
	cout<<"Personas que deben votar en el Dpto "<<i<<": ";
	cin>>votantes[i];
     }
     cout <<endl;
     // Suma la matriz por columnas para dar el total de votos de cada partido	
     for(j=1;j<=6;j++){
	total=0; // Variable acumuladora, por lo cual hay que inicializarla en 0
	for(i=0;i<DPTOS;i++){
		total = total+votos[i][j];
	}
	cout<<"Votos obtenidos por el partido P"<<j<<": "<<total<<endl;
     }
     cout<<endl;
     // Suma la matriz por filas para dar el total de votos por departamento
     maximo=0;
     for(i=0;i<DPTOS;i++){
	total=0; // Variable acumuladora, por lo cual hay que inicializarla en 0
	for(j=0;j<=6;j++){
		total=total+votos[i][j];
		if(i==1 && maximo<votos[i][j]){ // Busca el partido de más votos en el segundo Dpto.
			maximo=votos[i][j];
			max_indice=j; // Almacena el índice del partido con más votos
		}
	}
	abstencion[i]=votantes[i]-total; // Calcula la abstención de una vez
	cout<<"Votos totales en el Dpto "<<i<<": "<<total;
	cout<<"; Votó el "<<total*100/votantes[i]<<"% de la población."<<endl;
     }
     cout<<endl<<"El partido P"<<max_indice<<" obtuvo el mayor número de votos en el segundo Dpto."<<endl<<endl;
     maximo=0;
     for(i=0;i<DPTOS;i++){
	if(maximo<abstencion[i]){ // Busca el Dpto de más abstención
		maximo=abstencion[i];
		max_indice=i;
                }
    	cout <<"Abstención de "<<abstencion[i]<<" en el Dpto "<<i<<", para un porcentaje de     " 
                         <<abstencion[i]*100/votantes[i]<<"% "<<endl;
    }
    cout<<endl<<"El partido con mayor abstención fue el Dpto "<<max_indice<<endl;
    system("PAUSE");
}

