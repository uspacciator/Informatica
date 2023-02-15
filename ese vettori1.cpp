/*
	Name:esercizio cerchio
	Copyright: colamonico
	Author: mercurio
	Date: 28/09/22 09:48
	Description: Dato in input un vettore di N numeri interi, dare in output la somma di tutti gli elementi del vettore. 
*/
#include <iostream>     
using namespace std;

int main()              
{
	     //dichiaro un indice
        int indice;
        int somma;
        
        //assegno all'indice un valore
        indice=4;
        
        //dichiaro il vettore
        int vettore[indice];
        
        
        vettore[0] = 7;
        vettore[1] = 4;
        vettore[2] = 2;
        vettore[3] = 8;
         
somma=vettore[0]+vettore[1]+vettore[2]+vettore[3];
cout<<somma<<endl;
        
	
	
	                
	

	 
return 0;	           
}
