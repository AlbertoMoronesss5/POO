#include<iostream>
#include<stdlib.h>
using namespace std;

class Vehiculo{
	
	private: //ESTOS SON LOS ATRIBUTOS (CARACTERISTICAS)
		int llantas;
		string tipo;
	
	public: //ESTOS SON LOS METODOS (COSAS QUE HACE MI CLASE)
		Vehiculo(int,string); //CONSTRUCTOR 
		void avanzar();
		void parar();
		
};


//COSTRUCTOR, wtf ??
Vehiculo::Vehiculo(int _llantas, string _tipo){
	llantas = _llantas;
	tipo = _tipo;
}

void Vehiculo::avanzar(){
	cout<<"\nESTOY TRASPORTANDOME EN UN "<<tipo<<" CON "<<llantas<<" LLANTAS, Y ESTOY AVANZANDO\n";
}

void Vehiculo::parar(){
	cout<<"\nME TRASPORTO EN UN "<<tipo<<" CON "<<llantas<<" LLANTAS, Y ACABO DE PARAR DE AVANZAR\n"; 
}

int main(){
	Vehiculo v1 = Vehiculo(4,"camion");
	Vehiculo v2(4, "porsche");
	Vehiculo v3(10, "limosina");
	
	v1.avanzar();
	v2.parar();
	v3.avanzar();
	
	
	
	
	
	system("pause");
	return 0;
}
