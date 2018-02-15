//
// Created by Carlos Molina on 2/14/2018.
//

#include "Registro_3.h"

void Registro_3::mostrar_registros() {

}

char *Registro_3::tochar() {
    int pos=0;
    char*data= new char();
    memcpy(&data[pos],&tam_nombre,4);
    pos+=4;
    memcpy(&data[pos],&nombre,tam_nombre);
    pos+=tam_nombre;
    memcpy(&data[pos],&tam_apellido,4);
    pos+=4;
    memcpy(&data[pos],&apellido,tam_apellido);
    pos+=tam_apellido;
    memcpy(&data[pos],& edad,4);
    pos+=4;
    memcpy(&data[pos],&tam_direccion,4);
    pos+=4;
    memcpy(&data[pos],direccion,tam_direccion);
    pos+=tam_direccion;
    return data;
}

void Registro_3::fromchar(char *data) {
    int pos=0;
    memcpy(&tam_nombre,&data[pos],4);
    pos+=4;
    memcpy(&nombre,&data[pos],tam_nombre);
    pos+=tam_nombre;
    memcpy(&tam_apellido,&data[pos],4);
    pos+=4;
    memcpy(&apellido,&data[pos],tam_apellido);
    pos+=tam_apellido;
    memcpy(&edad,&data[pos],4);
    pos+=4;
    memcpy(&tam_direccion,&data[pos],4);
    pos+=4;
    memcpy(direccion,&data[pos],tam_direccion);
    pos+=tam_direccion;
}

void Registro_3::abrir_archivo() {
    archivo->abrir("registros3.txt");
}

void Registro_3::leer_archivo() {

}

void Registro_3::guardar_archivo(char *data) {
    archivo->escribir(data,0,tam_registro);
}

void Registro_3::cerrar_archivo() {
    archivo->cerrar();
}

Registro_3::Registro_3(char *nombre, char *apellido, int edad, char *direccion){
    this->nombre = nombre;
    tam_nombre = strlen(nombre);
    tam_apellido = strlen(apellido);
    this->apellido = apellido;
    this->edad = edad;
    this->direccion = direccion;
    tam_direccion= strlen(direccion);
}
