#include <iostream>
using namespace std;

void calcularSalario(int *, int *);


void calcularSalario(int *salarioActual, int *antiguedad, int *salarioFuturo) {
	int aumento;
	if (*antiguedad>=0 and *antiguedad<5) {
		aumento = 6;
		
	} else if (*antiguedad>=5 and *antiguedad<10) {
		aumento = 8;
	} else if (*antiguedad>10) {
		aumento = 10;
	}
	
	*salarioFuturo = *salarioActual + (*salarioActual * aumento / 100);
}

int main() {
	int salarioActual;
	int antiguedad;
	int salarioFuturo;
	
	cout<<endl<<endl<<"CALCULO DEL SALARIO MENSUAL DEL PROXIMO ANIO"<<endl<<endl;
	cout<<"Ingrese el salario mensual devengado actualmente: ";
	cin>>salarioActual;
	do {
		cout<<endl<<"Ingrese la antiguedad en anios: ";
		cin>>antiguedad;
		
	} while (antiguedad< 0);
	
	calcularSalario(&salarioActual, &antiguedad, &salarioFuturo);
	cout<<endl<<"El salario devengado actualmente es: $ "<<salarioActual<<endl;
	cout<<endl<<"El salario para el proximo anio sera: $ "<<salarioFuturo<<endl;
	cout<<endl;
	
	system("pause");
	return 0;
}
