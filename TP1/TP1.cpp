#include <iostream>
#include<string>
using namespace std;

//PGCD  Algorithem d'Euclide
	int PGCD(int a, int b){	
		
		int dividende, diviseur,quotion,rest;
	
		dividende = a;
		diviseur = b;
		rest = a%b;	 
		quotion = dividende/diviseur;
			
		cout<<dividende <<"="<<diviseur<<" * "<< quotion<<"+"<< rest<< "\n\n";		 
				
			while (rest != 0){				    
				quotion = dividende/diviseur;
				dividende = (dividende - rest )/quotion;
				diviseur = rest;				
				rest = dividende%diviseur;
				cout<<dividende <<"="<<diviseur<<" * "<< quotion<<"+"<< rest<< "\n\n";					
			}
		return diviseur;
	}
	

	
	void rest (int dividende, int diviseur, int quotion){
		
		 int r[100];
		 int i;
		 for (i=0;i<100; i++){
		 	
		 	r[i] = dividende - diviseur * quotion;
		 }
		
	}
	
int main(int argc,char* argv[]) {
	
	int a,b,temp, pgcd;
	
	while (a <= 0 || b <= 0){
	 cout<< "give a strictly positif number a : "; cin>>a; cout<<"\n";	
     cout<< "give a strictly positif number b : "; cin>>b; cout<<"\n";
		
	}

		
	if(b>a){	
		
	      temp=a;
		  a=b;
		  b=temp;
	}
		
	 pgcd = PGCD(a,b);	
	 cout<<"PGCD ("<<a<< ","<<b<<") = "<< pgcd ;
	 
	 // Algorithm Bezout 
	 
	
	return 0;
}
