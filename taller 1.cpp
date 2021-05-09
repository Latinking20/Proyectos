#include <iostream> 
using namespace std;


class Articulo {

	private:
		string nombre;

	public:
		Articulo();
		void setNombre(string);
		string getNombre();

};


Articulo::Articulo() {
	nombre = "";
}


void Articulo::setNombre(string name) {
	nombre = name;
}


string Articulo::getNombre() {
	return nombre;
}




char menu() {
	char opc;
	cout<<endl<<endl;  
	cout<<" Menu de Opciones"<<endl;
	cout<<"1. Esta satisfecho con la lista? :"<<endl;
	cout<<"2. Desea una nueva lista? :"<<endl;
	do {
		cout<<"Digite una Opcion: ";
		cin>>opc;
	} while ((opc < '1') || (opc > '2'));
	return opc;
}

Articulo lista[20]; 
int cantidad;
string articulo;


void nuevaLista() {
	int i;

	cout<<endl<<"Cuantos articulos desea ingresar?: ";
	cin>>cantidad;
	cout<<endl;

	for (i = 0; i < cantidad; i++) {
		cout<<"Teclea el nombre del articulo "<<i+1<<endl;
		cin>>articulo;
		lista[i].setNombre(articulo);
	}
}


void verLista() {
	int i;
	cout<<endl<<"La lista de articulos ingresados es la siguiente: "<<endl;
	for (i = 0; i < cantidad; i++) {
		cout<<lista[i].getNombre()<<endl;
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
				cout<<endl<<endl<<"Mensaje de despedida; muchas gracias"<<endl;
				break;
			case '2':
				nuevaLista();
				verLista();
				break;
		}
	} while (opc != '1');
	return 0;
}
