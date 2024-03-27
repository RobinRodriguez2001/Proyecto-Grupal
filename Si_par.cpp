#include "Par_impar.cpp"
#include <iostream>
using namespace std;

class Si_par : Par_impar {
	
	public :
		Si_par (){
			
		}
	
	
	Si_par(int n1) : Par_impar (n1){
	} 
	//metodos
	//set (modificar)
	void setn1(int n1){num1 = n1;}		
	
	//get(mostrar)
	int getn1(){return num1;}		
	
	//metodos
	void determinar(){
		if (num1 % 2 == 0) {
        cout << "El numero " << num1 << " es par." << endl;
    	} else {
        cout << "El numero " << num1 << " es impar." << endl;
    	}
		cout<<"\n";
	}
	
};
