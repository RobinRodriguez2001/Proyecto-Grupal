#include <iostream>
using namespace std;
class Op_mate{
	//atributos
	protected : float num1, num2; 
	
	//constructor
	protected :
		Op_mate(){
		}
		Op_mate(float n1, float n2){
			num1 = n1;
			num2 = n2;
		}
	//metodo
	void sumar();	
	void restar();	
	void multiplicar();	
	void dividir();	
	
};
