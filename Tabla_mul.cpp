#include "Tabla_de_multiplicar.cpp"
using namespace std;

class Tabla_mul : public Tabla_de_multiplicar {
public:
    // Constructores
    Tabla_mul() : Tabla_de_multiplicar() {}

    Tabla_mul(int nu) : Tabla_de_multiplicar(nu) {}

    // Métodos
    // Set (modificar)
    void setnu(int nu) {numero = nu; }
    

    // Get (mostrar)
    int getnu() { return numero; }

	
	void mostrar() {
		
		int table;
		
		int numero_multi;
		
		cout<<"\nDigite el numero total a mostrar: ";
		cin>>numero_multi;
		cout<<"\n";
		for(int i=0; i<numero_multi; i++){
			
			cout<<numero<<" x "<<i+1<<" = "<< numero*(i+1)<<endl;
		}
		cout<<"\n";
	}
	
	void todas_las_tablas(){
		
		cout<<"\n";
		
		for(int i=1; i<11; i++){
			for(int j=1; j<11; j++){
			
			cout<<i<<" x "<<j<<" = "<< j* i<<endl;
			
		}
		cout<<"\n";
			
		}
	}
};
   
