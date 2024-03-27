#include "Op_mate.cpp"
#include <iostream>
using namespace std;

class Operacion : Op_mate {
	
	public :
		Operacion (){
			
		}
	
	
	Operacion(int n1, int n2) : Op_mate (n1, n2){
	} 
	//metodos
	//set (modificar)
	void setn1(int n1){num1 = n1;}	
	void setn2(int n2){num2 = n2;}	
	
	//get(mostrar)
	int getn1(){return num1;}	
	int getn2(){return num2;}	
	
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
		cout<<"\nLa Division es : "<<num1/num2;
		cout<<"\n";
	}
	
};
