/*
	Name:area triangolo
	Copyright: colamonico
	Author: mercurio
	Date: 28/09/22 09:48
	Description: calcolare l'area del triangolo
*/
#include <iostream>      //1 includo le librerie
using namespace std;

int main()              //2 inizio il blocco int main
{
     float b=0;            //3 dichiaro le variabili
     float h=0; 
     float a=0;
     
     cout<<"Inserisci la base";    //4 inizializzo le variabili
     cin>>b;                      //5 input
     cout<<"inserisci l'altezza";  
     cin>>h;
     
     a=(b+h)/2;                      //6 logica   
     cout<<"il risultato dell'area e\'"<<a;      //7 ritorno al sistema operativo     
    
       
return 0;	           //8 fine del programma 
}
