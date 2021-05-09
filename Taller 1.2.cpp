#include <iostream>
using namespace std;


class Producto {
	private:
		int cantidad;
		double valorUnitario;
		double porcentajeDescuento;
	public:
		Producto();
		void setProducto(int, double, double);
		int getcantidad();
		double getvalorUnitario();
		double getporcentajeDescuento();

};


Producto::Producto() {
	cantidad=0;
	valorUnitario=0;
	porcentajeDescuento=0;
}


void Producto::setProducto(int cant, double precio, double descuento) {
	cantidad=cant;
	valorUnitario=precio;
	porcentajeDescuento=descuento;
}


int Producto::getcantidad() {
	return cantidad;
}


double Producto::getvalorUnitario() {
	return valorUnitario;
}


double Producto::getporcentajeDescuento() {
	return porcentajeDescuento;
}


char menu() {
	char opc;

	cout<<endl<<endl;
	cout<<" Menu de Opciones"<<endl;
	cout<<"1. Desea calcular el valor total? "<<endl;
	cout<<"2. Desea una nueva lista? "<<endl;
	do {
		cout<<"Opcion ->";
		cin>>opc;
	} while ((opc < '1') || (opc > '2'));
	return opc;
}

Producto lista[20];
int totalProductos;
int cantidad;
double valorUnitario;
double porcentajeDescuento;


void nuevaLista() {
	int i;

	cout<<endl<<"Cuantos productos desea calcular?: ";
	cin>>totalProductos;
	cout<<endl; 
	for (i = 0; i < totalProductos; i++) {
		cout<<"Teclea la cantidad del producto "<<i+1<<endl;
		cin>>cantidad;
		cout<<"Teclea el valor unitario del producto "<<i+1<<endl;
		cin>>valorUnitario;
		cout<<"Teclea el porcentaje de descuento del producto "<<i+1<<endl;
		cin>>porcentajeDescuento;
		lista[i].setProducto(cantidad, valorUnitario, porcentajeDescuento);
	}
}


void verLista() {
	int i;
	cout<<endl<<"La lista de productos ingresados es la siguiente: "<<endl;
	cout<<"Producto"<<"\t"<<"Cantidad"<<"\t"<<"Vr. Unitario"<<"\t"<<"Descuento"<<endl;
	for (i = 0; i < totalProductos; i++) {
		cantidad=lista[i].getcantidad();
		valorUnitario=lista[i].getvalorUnitario();
		porcentajeDescuento=lista[i].getporcentajeDescuento();
		cout<<i+1<<"\t\t"<<cantidad<<"\t\t $"<<valorUnitario<<"\t\t"<<porcentajeDescuento<<" %"<<endl;
	}
}


void verTotal() {
	int i;
	cout<<endl<<"El costo total por producto es el siguiente: "<<endl;
	cout<<"Producto"<<"\t"<<"Cantidad"<<"\t"<<"Vr. Unitario"<<"\t"<<"Descuento"<<"\t"<<"Costo total"<<endl;
	for (i = 0; i < totalProductos; i++) {
		cantidad=lista[i].getcantidad();
		valorUnitario=lista[i].getvalorUnitario();
		porcentajeDescuento=lista[i].getporcentajeDescuento();
		cout<<i+1<<"\t\t"<<cantidad<<"\t\t $"<<valorUnitario<<"\t\t"<<porcentajeDescuento<<" %"
		    <<"\t\t $ "<<cantidad*valorUnitario*(1-(porcentajeDescuento/100))<<endl;
	}
}

int main() {
	char opc;
	nuevaLista(); 
	verLista();	

	do {
		opc = menu();
		switch (opc) {
			case '1':
				cout<<endl<<endl<<"Costo total"<<endl;
				verTotal();
				break;
			case '2':
				nuevaLista();
				verLista();
				break;
		}
	} while (opc != '1');
	return 0;
}
