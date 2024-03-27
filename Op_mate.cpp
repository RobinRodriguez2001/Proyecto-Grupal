#include <iostream>
using namespace std;
class Op_mate{
	//atributos
	protected : int num1, num2; 
	
	//constructor
	protected :
		Op_mate(){
		}
		Op_mate(int n1, int n2){
			num1 = n1;
			num2 = n2;
		}
	//metodo
	void sumar();	
	void restar();	
	void multiplicar();	
	void dividir();	
	
};
