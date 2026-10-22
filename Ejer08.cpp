#include<iostream>
using namespace std;
struct Curso{
    string nombreCurso;
    int creditos;
};

struct Alumno{
    string nombre;
    int edad;
    Curso *curso;
};

int main(){
    //Crear un curso
    Curso c = {"Programacion", 4};
    //Crear un alumno
    Alumno al = {"Mike", 42, &c};

    //crear puntero a las 2 estrcuturas
    Alumno *p = &al;
    Curso *pc = al.curso;
    //Mostrar datos del alumno
    cout<<"DATOS DE ALUMNO"<<endl;
    cout<<"Nombre:"<<p->nombre<<endl;
    cout<<"Edad:"<<p->edad<<endl;
    //Mostrar datos del curso
    cout<<"DATOS DEL CURSO"<<endl;
    cout<<"Nombre:"<<pc->nombreCurso<<endl;
    cout<<"Créditos:"<<pc->creditos<<endl;
    return 0;
}