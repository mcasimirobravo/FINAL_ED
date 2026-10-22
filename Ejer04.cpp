#include<iostream>
#include<string>
using namespace std;
struct Alumno{
    string nombre;
    int edad;
    float nota;
};
int main(){
    int n;
    cout<<"Ingrese cantidad de alumnos:";
    cin>>n;
   /* Alumno al[n];
    Alumno *p = al;*/

    Alumno *p = new Alumno[n];
    cout<<"DATOS DE ALUMNO"<<endl;
    for(int i=0; i<n; i++)
    {
        cin.ignore();
        cout<<"Nombre:";
        getline(cin,p[i].nombre);

        cout<<"Edad:";
        cin>>p[i].edad;

        cout<<"Nota:";
        cin>>p[i].nota;

    }
    system("cls");
    //imprimir
     for(int i=0; i<n; i++)
    {
        cout<<"Nombre:"<<(p + i)->nombre;

        cout<<"Edad:"<<(p + i)->edad;

        cout<<"Nota:"<<(p + i)->nota;

    }
    

    
    system("pause");
    return 0;
}