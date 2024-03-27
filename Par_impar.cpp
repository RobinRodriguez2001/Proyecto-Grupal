#include <iostream>
using namespace std;
class Par_impar{
	//atributos
	protected : int num1; 
	
	//constructor
	protected :
		Par_impar(){
		}
		Par_impar(int n1){
			num1 = n1;
		}
	//metodo
	void determinar();		
	
};
