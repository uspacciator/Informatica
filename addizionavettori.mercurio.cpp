/*
	Name: AddizionaVettori
	Copyright: colamonico
	Author: mercurio
	Date: 28/09/22 09:48
	Description: Dati in input due vettori di numeri interi, dare in output un terzo vettore contenente le somme degli elementi corrispondenti.
*/
#include <iostream>      
using namespace std;

int main()            
{
const int max=100;
int cont;
int i;
int vet1[i];
int vet2[i];
int vet3[i];
int somma;


cout<<"inserisci il primo elemento: "<<endl;
cin>>vet1[i];
cout<<"inserisci il secondo elemento: "<<endl;
cin>>vet2[i];
for(cont=0;cont<i;i++){
        somma=somma+vet1[i];
        cout<<"La somma degli elementi e': "<<somma<<endl;	
        cout<<"inserisci elementi";	
        cin>>vet1[i];      
	}
for(cont=0;cont<i;i++){
        somma=somma+vet2[i];
        cout<<"La somma degli elementi e': "<<somma<<endl;	
        cout<<"inserisci elementi";	
        cin>>vet2[i];    
}
for(cont=0;cont<i;i++){
vet3[i]=vet1[i]+vet2[i];
cout<<"La somma degli elementi e': "<<somma<<endl;		
cin>>vet3[i];
}       




	 
	
	 
return 0;	         
}
