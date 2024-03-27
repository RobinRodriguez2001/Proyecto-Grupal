#include "Conversion.cpp"
#include <iostream>
using namespace std;

class Conversiones : Conversion {
	
	public :
		Conversiones (){
			
		}
	
	
	Conversiones(float num3) : Conversion (num3){
	} 
	//metodos
	//set (modificar)
	void setn3(int n3){num3 = n3;}		
	
	//get(mostrar)
	int getn3(){return num3;}		
	
	
	//metodos
	void conversion1(){
		cout<<"\nConversion de kilometros a millas";
		cout<<"\nResultado: "<<num3 * 1.60934;
		cout<<"\n";
	}
	
	void conversion2(){
		cout<<"\nConversion de millas a kilometros";
		cout<<"\nResultado: "<<num3 * 0.621371;
		cout<<"\n";
	}
	
	void conversion3(){
		cout<<"\nConversion de metros a pulgadas";
		cout<<"\nResultado: "<<num3 * 39.3701;
		cout<<"\n";
	}
	
	void conversion4(){
		cout<<"\nConversion de pulgadas a metros";
		cout<<"\nResultado: "<<num3 * 0.0254;
		cout<<"\n";
	}
	
	void conversion5(){
		cout<<"\nConversion de libras a kilos";
		cout<<"\nResultado: "<<num3 * 0.453592;
		cout<<"\n";
	}
	
	void conversion6(){
		cout<<"\nConversion de kilos a libras";
		cout<<"\nResultado: "<<num3 * 2.20462;
		cout<<"\n";
	}
	
	void menu(){

		cout<<"\tConversiones"<<endl;
		cout<<"\n1.	Covertir kilometros a millas";
		cout<<"\n2.	Covertir millas a kilometros";
		cout<<"\n3.	Covertir metros a pulgadas";
		cout<<"\n4.	Covertir pulgadas a metros";
		cout<<"\n5.	Covertir libras a kilos";
		cout<<"\n6.	Covertir kilos a libras";
		
	}
	
	
};
