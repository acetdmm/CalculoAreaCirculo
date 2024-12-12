#include <iostream>
using namespace std;

const double PI = 3.14159265358979323846;

double calcularArea(double radio) {
	return PI * radio * radio;
}

int main() {
	double radio;
	
	cout << "ingrese el radio del circulo: ";
	cin	>> radio;
	
	double area = calcularArea(radio);
	
	cout << "El area del circulo es: " << area << std::endl;
	
	return 0;
}