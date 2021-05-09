#include <iostream>
using namespace std;

class Empleado {
	private:
		int cedulaEmpleado;
		string nombreEmpleado;
		string telefonoEmpleado;
		string cargoEmpleado;
		int salarioEmpleado;
	public:
		Empleado();
		void setEmpleado(int, string, string, string, int);
		int getCedulaEmpleado();
		string getNombreEmpleado();
		string getTelefonoEmpleado();
		string getCargoEmpleado();
		int getSalarioEmpleado();
};



Empleado::Empleado() {
	cedulaEmpleado=0;
	nombreEmpleado="";
	telefonoEmpleado="";
	cargoEmpleado="";
	salarioEmpleado=0;
}

void Empleado::setEmpleado(int cedula, string nombre, string telefono, string cargo, int salario) {
	cedulaEmpleado=cedula;
	nombreEmpleado=nombre;
	telefonoEmpleado=telefono;
	cargoEmpleado=cargo;
	salarioEmpleado=salario;
}


int Empleado::getCedulaEmpleado() {
	return cedulaEmpleado;
}



string Empleado::getNombreEmpleado() {
	return nombreEmpleado;
}


string Empleado::getTelefonoEmpleado() {
	return telefonoEmpleado;
}


string Empleado::getCargoEmpleado() {
	return cargoEmpleado;
}


int Empleado::getSalarioEmpleado() {
	return salarioEmpleado;
}

// 3 metodos adicionales para usar la clase Empleado

// variables globales
Empleado listaEmpleados[20];	
int nomina[20][4];	
int totalEmpleados;
int numCedula;
string empleado;
string numTelefono;
string puesto;
int ingresos;
int extras;
int prestamo;
int ahorro;
int segSocial;


void nuevaListaEmpleados() {
	int i;
	

	cout<<endl<<"Cuantos empleados desea ingresar?: ";
	cin>>totalEmpleados;
	cout<<endl<<endl;
	

	for (i = 0; i < totalEmpleados; i++) {
		cout<<"Teclea la cedula del empleado "<<i+1<<endl;
		cin>>numCedula;
		cout<<"Teclea el nombre del empleado"<<i+1<<endl;
		cin>>empleado;
		cout<<"Teclea el telefono del empleado"<<i+1<<endl;
		cin>>numTelefono;
		cout<<"Teclea el cargo del empleado"<<i+1<<endl;
		cin>>puesto;
		cout<<"Teclea el salario del empleado"<<i+1<<endl;
		cin>>ingresos;
		
		listaEmpleados[i].setEmpleado(numCedula, empleado, numTelefono, puesto, ingresos);
		cout<<endl<<endl;
	}
}


void nuevaNomina() {
	int i;
	

	for (i = 0; i < totalEmpleados; i++) {
		empleado=listaEmpleados[i].getNombreEmpleado();
		cout<<endl<<"Datos para la nomina de empleado: "<<empleado<<endl<<endl;
		cout<<"Teclea las horas extras "<<endl;
		cin>>nomina[i][0];
		cout<<"Teclea el descuento por prestamos"<<endl;
		cin>>nomina[i][1];
		cout<<"Teclea el ahorro voluntario"<<endl;
		cin>>nomina[i][2];
		cout<<"Teclea el descuento por seguridad social"<<endl;
		cin>>nomina[i][3];
	}
	cout<<endl<<endl;
}


void verNomina() {
	int i;
	int total;
	
	cout<<endl<<endl<<"Nomina de la Empresa "<<endl<<endl;
	
	
	for (i = 0; i < totalEmpleados; i++) {
		
		numCedula=listaEmpleados[i].getCedulaEmpleado();
		empleado=listaEmpleados[i].getNombreEmpleado();
		numTelefono=listaEmpleados[i].getTelefonoEmpleado();
		puesto=listaEmpleados[i].getCargoEmpleado();
		ingresos=listaEmpleados[i].getSalarioEmpleado();
		
		extras=nomina[i][0];
		prestamo=nomina[i][1];
		ahorro=nomina[i][2];
		segSocial=nomina[i][3];
		
		total = ingresos + extras - prestamo - ahorro - segSocial;
			
		cout<<endl<<endl<<"Datos del empleado de la Empresa "<<endl<<endl;
		cout<<"Cedula"<<"\t\t"<<numCedula<<endl;
		cout<<"Nombre"<<"\t\t"<<empleado<<endl;
		cout<<"Telefono"<<"\t"<<numTelefono<<endl;
		cout<<"Cargo"<<puesto<<endl<<endl;

		cout<<"Salario : $ "<<ingresos<<endl;
		cout<<"Horas extras : $ "<<extras<<endl;
		cout<<"Descuento por prestamos : $ "<<prestamo<<endl;
		cout<<"Ahorro voluntario : $ "<<ahorro<<endl;
		cout<<"Descuento Seguridad Social : $ "<<segSocial<<endl<<endl;
		cout<<"Total a pagar : $ "<<total<<endl;
		
		system("pause");
		system("cls");
	}
}


int main() {
	nuevaListaEmpleados(); 
	system("pause");
	system("cls");
	
	nuevaNomina(); 
	system("pause");
	system("cls");
	
	verNomina();	
	return 0;
}

