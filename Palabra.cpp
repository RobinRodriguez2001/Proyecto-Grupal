#include <iostream>
using namespace std;
class Palabra_polindroma{
	//atributos
	protected : 
	
		string palabra;
	//constructor
	protected :
		Palabra_polindroma(){
		}
		Palabra_polindroma(string pal_pol){
			palabra = pal_pol;
		}
	//metodo
	void determinar();		
	
};
