#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int opcion;
    float a = 0;
    float b = 0;

    do{
        cout << "Calculadora Simple" << endl;
        cout << "Seleccione una Opcion para la operacion." << endl;
        cout << "1. Suma." << endl;
        cout << "2. Resta." << endl;
        cout << "3. Multiplicacion." << endl;
        cout << "4. Division." << endl;
        cout << "5. Salir." << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese primer numero: " << endl;
            cin >> a;
            cout << "Ingrese segundo numero: " << endl;
            cin >> b;
            cout << "El resultado de la suma es: " << a + b << endl;
            break;
        case 2:
            cout << "Ingrese primer numero: " << endl;
            cin >> a;
            cout << "Ingrese segundo numero: " << endl;
            cin >> b;
            cout << "El resultado de la resta es: " << a - b << endl;
            break;
        case 3:
            cout << "Ingrese primer numero: " << endl;
            cin >> a;
            cout << "Ingrese segundo numero: " << endl;
            cin >> b;
            cout << "El resultado de la multiplicacion es: " << a * b << endl;
            break;
        case 4:
            cout << "Ingrese primer numero: " << endl;
            cin >> a;
            cout << "Ingrese segundo numero: " << endl;
            cin >> b;
            cout << "El resultado de la division es: " << a / b << endl;
            break;
        default:
            cout << "Saliendo del programa. ¡Adios!" << endl;
            break;
        }
    } while (opcion != 5);

        return 0;
};