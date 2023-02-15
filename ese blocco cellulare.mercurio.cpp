/*
	Name: Sblocco Cellulare
	Copyright: colamonico
	Author: mercurio
	Date: 29/11/22 14:57
	Description: Si scriva un programma che simula lo lo sblocco di un cellulare.
Il programma legge 4 cifre inserite dall’utente e le imposta come pin.
Il programma successivamente chiede di reinserire il pin, se viene inserito quello corretto scrive “telefono sbloccato”, altrimenti lo richiede e al terzo tentativo errato visualizza il messaggio “telefono bloccato”
*/
#include <iostream>      
using namespace std;

int main()            
{
const int max=100;
int n;
int vet[max];
int i;







cout<<"SCEGLI IL PIN: "<<endl;
for(int i=0; i<4; i++ ){
cin>>vet[max];
}


cout<<"INSERISCI IL PIN: "<<endl;	
cin>>n;	
for(int i=0; i<3; i++ ){
cin>>vet[max];	
cout<<"PIN ERRATO: "<<endl;cout<<"Immettere nuovamente il pin: "<<endl;
cin>>n;
for(int i=0; i<3; i++ )
cin>>vet[max];






cout<<"TELEFONO BLOCCATO";











	 
	
	 
return 0;	         
}
