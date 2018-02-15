//
// Created by Carlos Molina on 2/14/2018.
//

#include "Registro_2.h"

void Registro_2::mostrar_registros() {

}

char *Registro_2::tochar() {
    int pos=0;
    char*data= new char[94];
    memcpy(&data[pos],nombre,30);
    pos+=30;
    memcpy(&data[pos],apellido,30);
    pos+=30;
    memcpy(&data[pos], &edad,4);
    pos+=4;
    memcpy(&data[pos],direccion,30);
    pos+=30;
    return data;
}

void Registro_2::fromchar(char *data) {
    int pos =0;
    memcpy(&nombre,&data[pos],30);
    pos+=30;
    memcpy(&apellido,&data[pos],30);
    pos+=30;
    memcpy(&edad,&data[pos],4);
    pos+=4;
    memcpy(&direccion,&data[pos],30);
    pos+=30;
}

void Registro_2::abrir_archivo() {
    archivo->abrir("registros2.txt");
}

void Registro_2::leer_archivo() {
    fromchar(archivo->leer(0,94));
    cout<<nombre<<endl;
    cout<<apellido<<endl;
    cout<<edad<<endl;
    cout<<direccion<<endl;

}

void Registro_2::guardar_archivo(char*data) {
    archivo->escribir(data,0,94);
}

void Registro_2::cerrar_archivo() {
    archivo->cerrar();
}

Registro_2::Registro_2(char *n, char *a, int ed, char *dir){
    nombre = new char[30];
    nombre = n;
    apellido = new char[30];
    apellido =n;
    edad = ed;
    direccion = new char[30];
    direccion = dir;
}
