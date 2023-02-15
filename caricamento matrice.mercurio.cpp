/*
	Name: Caricamento Matrice 
	Copyright: colamonico
	Author: mercurio gianluca
	Date: 13/12/22 12:31
	Description: Scrivere un programma per caricare dei numeri interi in una matrice di numeri interi di dimensione 2X3 con un ciclo for.
                 Successivamente scrivere un ciclo per stampare gli elementi della matrice a video.
*/
#include <iostream>     
using namespace std;
int main()              
{
const int righe=2;
const int colonne=3;
int contr;
int contc;
int matrice[contr][contc];

cout<<"Inserisci numero: "<<endl;
for(contr;contr<righe;contr++){
	for(contc;contc<colonne;contc++){
cout<<matrice[contr][contc];
}
}		
cin>>contc;
cin>>contr;






return 0;
}

