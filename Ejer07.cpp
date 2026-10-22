#include <iostream>
#include <string.h>
using namespace std;

struct Alumno {
    int codigo;
    char nombre[30];
    float nota;
};

void ingresarAlumno(Alumno *a) {
    cout << "Codigo: ";
    cin >> a->codigo;
    cout << "Nombre: ";
    cin >> a->nombre;
    cout << "Nota: ";
    cin >> a->nota;
}

void mostrarAlumno(Alumno *a) {
    cout << "Codigo: " << a->codigo << endl;
    cout << "Nombre: " << a->nombre << endl;
    cout << "Nota: " << a->nota << endl;
}

void mostrarTodos(Alumno *lista, int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nAlumno " << i + 1 << endl;
        mostrarAlumno(lista + i); // puntero aritmetico
    }
}

int buscarAlumno(Alumno *lista, int n, int codigoBuscado) {
    for (int i = 0; i < n; i++) {
        if ((lista + i)->codigo == codigoBuscado) {
            return i;
        }
    }
    return -1;
}

int main() {
    int opcion, n = 0, pos;
    int codigoBuscar;
    Alumno alumnos[100];

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Ingresar alumno" << endl;
        cout << "2. Mostrar alumnos" << endl;
        cout << "3. Buscar alumno por codigo" << endl;
        cout << "4. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ingresarAlumno(&alumnos[n]);
                n++;
                cout << "Alumno registrado correctamente." << endl;
                break;

            case 2:
                if (n == 0) {
                    cout << "No hay alumnos registrados." << endl;
                } else {
                    mostrarTodos(alumnos, n);
                }
                break;

            case 3:
                if (n == 0) {
                    cout << "No hay alumnos para buscar." << endl;
                } else {
                    cout << "Ingrese el codigo a buscar: ";
                    cin >> codigoBuscar;
                    pos = buscarAlumno(alumnos, n, codigoBuscar);

                    if (pos == -1) {
                        cout << "Alumno no encontrado." << endl;
                    } else {
                        cout << "\nAlumno encontrado: " << endl;
                        mostrarAlumno(&alumnos[pos]);
                    }
                }
                break;

            case 4:
                cout << "Saliendo..." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
        }

    } while (opcion != 4);

    return 0;
}