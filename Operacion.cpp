#include "Op_mate.cpp"
#include <iostream>
using namespace std;

class Operacion : Op_mate {
	
	public :
		Operacion (){
			
		}
	
	
	Operacion(float n1, float n2) : Op_mate (n1, n2){
	} 
	//metodos
	//set (modificar)
	void setn1(float n1){num1 = n1;}	
	void setn2(float n2){num2 = n2;}	
	
	//get(mostrar)
	float getn1(){return num1;}	
	float getn2(){return num2;}	
	
	//metodos
	void sumar(){
		cout<<"\nLa Suma es : "<<num1+num2;
		cout<<"\n";
	}
	
	void restar(){
		cout<<"\nLa Resta es : "<<num1-num2;
		cout<<"\n";
	}
	
	void multiplicar(){
		cout<<"\nLa Multiplicacion es : "<<num1*num2;
		cout<<"\n";
	}
	
	void dividir(){
		float divid = num1/num2;
		cout<<"\nLa Division es : "<<num1/num2;
		cout<<"\n";
	}
	
};
