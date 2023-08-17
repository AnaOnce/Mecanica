#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int opcion;
    double desplazamiento, velocidadi, velocidadf, aceleracion, tiempo, velocidad;

    cout << "Que deseas calcular?" << endl;
    cout << "1. Desplazamiento" << endl;
    cout << "2. Velocidad" << endl;
    cout << "3. Aceleracion" << endl;
    cout << "4. Tiempo" << endl;
    cout << "Ingresa la opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: // Desplazamiento
            char opcion1;
            cout<<"Elije la formula dependiendo de los  datos disponibles "<< endl;
            cout<<"1.Tiene la velocidad incial, el tiempo y la aceleracion"<<endl;
            cout<<"2.Tiene la velocidad final, velocidad incial y la aceleracion"<<endl;
            cout<<"Coloca la eleccion: ";
            cin>>opcion1;
            if (opcion1 == '1' || opcion == '1'){
            cout << "Ingresa la velocidad inicial: ";
            cin >> velocidadi;
            cout << "Ingresa el tiempo: ";
            cin >> tiempo;
            cout << "Ingresa la aceleracion: ";
            cin >> aceleracion;
            desplazamiento = (velocidadi * tiempo)+( ( 0.5 * aceleracion) * pow(tiempo,2));
            cout << "El desplazamiento es : " << desplazamiento << endl;
            }
            else if(opcion == '2' || opcion == '2'){
            cout << "Ingresa la velocidad final: ";
            cin >> velocidadf;
            cout << "Ingresa la velocidad incial: ";
            cin >> velocidadi;
            cout << "Ingresa la aceleracion: ";
            cin >> aceleracion;
            desplazamiento =( velocidadf - velocidadi ) / (2 * aceleracion) ;
            cout << "El desplazamiento es: " << desplazamiento << endl;
            }
            else{
                cout<<"Invalido."<<endl;
            }
            break;

        case 2: // Velocidad
                cout << "Ingresa la velocidad: ";
                cin >> velocidad;
                cout << "Ingresa la aceleración: ";
                cin >> aceleracion;
                cout << "Ingresa el tiempo: ";
                cin >> tiempo;
                velocidad +=  aceleracion * tiempo;
                cout<<"La velocidad final es : "<< velocidad << endl;
            break;

        case 3: // Aceleración
            char opcion;
            cout<<"Cuentas con el tiempo (s/n): ";
            cin>>opcion;
            if (opcion == 's' || opcion == 'S'){
            cout << "Ingresa la velocidad inicial: ";
            cin >> velocidadi;
            cout << "Ingresa la velocidad final: ";
            cin >> velocidadf;
            cout << "Ingresa el tiempo: ";
            cin >> tiempo;
            aceleracion = (velocidadf - velocidadi) / tiempo;
            cout << "La aceleración es: " << aceleracion << endl;
            }
            else if(opcion == 'n' || opcion == 'N'){
            cout << "Ingresa la velocidad inicial: ";
            cin >> velocidadi;
            cout << "Ingresa la velocidad final: ";
            cin >> velocidadf;
            cout << "Ingresa el desplazamiento: ";
            cin >> desplazamiento;
            aceleracion = ((velocidadf*velocidadf)-(velocidadi*velocidadi))/(desplazamiento * 2);
            cout << "La aceleración es: " << aceleracion << endl;
            }
            else{
                cout<<"Invalido."<<endl;
            }
            break;

        case 4: // Tiempo
                cout << "Ingresa la velocidad inicial: ";
                cin >> velocidadi;
                cout << "Ingresa la velocidad final: ";
                cin >> velocidadf;
                cout << "Ingresa la aceleración: ";
                cin >> aceleracion;
                tiempo = velocidadf - velocidadi / aceleracion;
                cout<<"El tiempo es: "<< tiempo << endl;
                break;

        default:
            cout << "Opción inválida" << endl;
    }

    return 0;
}
