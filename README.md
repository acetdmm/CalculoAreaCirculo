#Calculadora de Área de un Círculo

Este programa en C++ permite calcular el área de un círculo dado su radio. Utiliza la constante Pi (π) con alta precisión y la fórmula estándar para el cálculo del área:

Área = π * radio^2

Características:

- Solicita al usuario ingresar el valor del radio.
- Calcula el área utilizando la fórmula: Área = π * radio^2.
- Muestra el área con dos decimales de precisión.
- Valida que el radio ingresado sea un número positivo.

Requisitos:

- Compilador C++ (por ejemplo, g++ o cualquier compilador compatible con C++)
- Sistema operativo: Funciona en Windows, macOS y Linux.

Instrucciones de Uso:

1. Clona o descarga el archivo `main.cpp`.
2. Compila el archivo fuente:
   g++ -o calcular_area main.cpp
3. Ejecuta el programa:
   ./calcular_area
4. Ingresa el valor del radio cuando el programa lo solicite. El área del círculo será calculada y mostrada.

Ejemplo de Ejecución:

ingrese el radio del circulo: 5
El area del circulo es: 78.54

Detalles Técnicos:

- El valor de Pi se define con alta precisión (3.14159265358979323846).
- El programa valida que el radio sea mayor que cero. Si el valor ingresado es inválido, se solicita un nuevo valor.
- La salida del área es redondeada a dos decimales.

Código Fuente:

#include <iostream>
#include <iomanip> // Para controlar la precisión de la salida
using namespace std;

const double PI = 3.14159265358979323846;

double calcularArea(double radio) {
    return PI * radio * radio;
}

int main() {
    double radio;
    
    cout << "ingrese el radio del circulo: ";
    cin >> radio;
    
    // Validación de entrada
    if (radio <= 0) {
        cout << "Por favor ingrese un radio positivo." << endl;
        return 1;  // Salir del programa si la entrada no es válida
    }

    double area = calcularArea(radio);
    
    // Mostrar el área con dos decimales
    cout << "El area del circulo es: " << fixed << setprecision(2) << area << endl;
    
    return 0;
}

Contribuciones:

Si deseas contribuir al proyecto, sigue estos pasos:

1. Haz un fork del repositorio.
2. Crea una rama para tus cambios (git checkout -b nueva-caracteristica).
3. Realiza tus cambios y haz commit de ellos (git commit -am 'Añadir nueva característica').
4. Sube tus cambios a tu repositorio (git push origin nueva-caracteristica).
5. Crea un pull request para que tus cambios sean revisados y fusionados.
