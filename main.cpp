#include <iostream>
#include "Registro_2.h"
#include "Registro_1.h"
#include "Registro_3.h"

using namespace std;

int main() {
    string nombre = "Carlos";
    string apellido = "Molina";
    string direccion = "San Pedro Sula";
    char*n = new char[30];
    char*a = new char[30];
    char*d = new char[30];

    strcpy(n,nombre.c_str());
    strcpy(a,apellido.c_str());
    strcpy(d,direccion.c_str());
    Registro_1 *reg1 = new Registro_1(n,a,21,d);
    Registro_2 *reg2 = new Registro_2(n,a,21,d);
    Registro_3 *reg3 = new Registro_3(n,a,21,d);
    /*reg1->abrir_archivo();
    char*data1 = reg1->tochar();
    reg1->guardar_archivo(data2);
    reg1->cerrar_archivo();*/
   /* reg2->abrir_archivo();
    char *data2 =reg2->tochar();
    reg2->guardar_archivo(data);
    //reg2->leer_archivo();
    reg2->cerrar_archivo();*/
    reg3->abrir_archivo();
    char*data3 = reg3->tochar();
    //reg3->guardar_archivo(data3);
    reg3->cerrar_archivo();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}