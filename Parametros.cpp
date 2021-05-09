#include <iostream>
using namespace std;

void pedirDatos(int suma[], int max);
int totalSuma(int suma[5]);

int main(){
 int max = 5;
 int suma[max];
 pedirDatos(suma,max);
 cout << "Suma total: " << totalSuma(suma) << endl;
 return 0;
}

void pedirDatos(int suma[],int max){
        cout << "Introducir elementos" << endl;
 for(int i = 0; i < max; i++){
  cin >> suma[i];
 }
}

int totalSuma(int Suma[5]){
 int sumaTotal = 0;
 for(int i = 0; i < 5; i++){
  sumaTotal += Suma[i];
 }
 return sumaTotal;
} 
