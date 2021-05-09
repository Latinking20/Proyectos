#include <iostream>
using namespace std;

// calcular el area de 4 figuras geometricas
int main() {
	
	int opc;
	cout<<"1. Calcular el area del cuadrado"<<endl;
	cout<<"2. Calcular el area del triangulo"<<endl;
	cout<<"3. Calcular el area de un circulo"<<endl;
	cout<<"4. Calcular el area de un rectangulo"<<endl;
	cout<<endl;
	cout<<"Elija una opcion"<<endl;
	cin>>opc;
	int lado,base,altura,radio;
	
	switch(opc)
	{
		case 1: cout<<"Ingrese el lado del cuadrado\n";
		        cin>>lado;
		        cout<<"El area del cuadrado es: "<<lado*lado;
		        cout<<"El perimetro del cuadrado es: "<<4*lado;
		        break;
		case 2: cout<<"Ingrese la base del triangulo\n";
		        cin>>base;
				cout<<"Ingrese la altura del triangulo\n";
				cin>>altura;
				cout<<"Ingrese el lado del triangulo\n";
				cin>>lado;
				cout<<"El area del triangulo es: "<<base*altura/2;
				cout<<"El perimetro del triangulo es: "<<3*lado;
				break;
		case 3: cout<<"Ingrese el radio del circulo\n";
		        cin>>radio;
				cout<<"El area del circulo es: "<<3.1416*radio*radio;
				cout<<"El perimetro del circulo es: "<<2*3.1416*radio;
				break;
	    case 4: cout<<"Ingrese la base del rectangulo\n";
		        cin>>base;
				cout<<"Ingrese la altura del rectangulo\n";
				cin>>altura;
				cout<<"El area del rectangulo es: "<<base*altura;
				cout<<"El perimetro del rectangulo es: "<<2*base+altura;				        
	}
	
	return 0;
	
}

