//Un archivo creado para pruebas y estudios. ;)
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

void suma (){
	int a, b, res;
	cout << "Ingrese el primer digito: " << endl;
	cin >> a;
	cout << "Ingrese el segundo digito: " << endl;
	cin >> b;
	
	res = a + b;
	cout << "El resultado es: " << res;
}
void resta (){
	int a, b, res;
	cout << "Ingrese el primer digito: " << endl;
	cin >> a;
	cout << "Ingrese el segundo digito: " << endl;
	cin >> b;
	
	res = a - b;
	cout << "El resultado es: " << res;
}
void mult (){
	int a, b, res;
	cout << "Ingrese el primer digito: " << endl;
	cin >> a;
	cout << "Ingrese el segundo digito: " << endl;
	cin >> b;
	
	res = a * b;
	cout << "El resultado es: " << res;
}

void div (){
	float a, b, res;
	cout << "Ingrese el primer digito: " << endl;
	cin >> a;
	cout << "Ingrese el segundo digito: " << endl;
	cin >> b;
	
	res = a / b;
	cout << "El resultado es: " << res;
}

int main(){
	int op, op_2;
	bool repetir = true;
	
	do{
		system("cls");
		
		cout << "¿Que operacion desea realizar?\n***********\n1) Suma\n2) Resta\n";
		cout << "3) Multiplicacion\n4) Division\n5) Salir" << endl;
		cout << "***********\nIngrese su opcion aqui: ";
		cin >> op;
	
		switch(op){
			case 1:
				suma();
				cout << "\nPresione ENTER para regresar al menu principal...";
				system("pause>nul");
				break;
			case 2:
				resta();
				cout << "\nPresione ENTER para regresar al menu principal...";
				system("pause>nul");
				break;
				
			case 3:
				mult();
				cout << "\nPresione ENTER para regresar al menu principal...";
				system("pause>nul");
				break;
				
			case 4:
				div();
				cout << "\nPresione ENTER para regresar al menu principal...";
				system("pause>nul");
				break;
			default:
				cout << "PROGRAMA TERMINADO";
				repetir = false;
				break;	
		}
	} while(op != 5 or repetir);
	
	getch();
	return 0;
}
