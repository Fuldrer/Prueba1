//
// Created by Carlos Molina on 2/14/2018.
//

#include "Registro_1.h"

void Registro_1::mostrar_registros() {

}

char *Registro_1::tochar() {
    char*data = new char();
    int pos =0;
    memcpy(&data[pos],nombre, sizeof(nombre));
    pos+= sizeof(nombre);
    memcpy(&data[pos],"|",1);
    pos+=1;
    memcpy(&data[pos],apellido,sizeof(apellido));
    pos+=sizeof(apellido);
    memcpy(&data[pos],"|",1);
    pos+=1;
    memcpy(&data[pos],&edad,4);
    pos+=4;
    memcpy(&data[pos],"|",1);
    pos+=1;
    memcpy(&data[pos],direccion, sizeof(direccion));
    pos+=sizeof(direccion);
    memcpy(&data[pos],";",1);
    pos+=1;
    return data;
}

void Registro_1::fromchar(char *data) {
    int pos=0;
    char*pch;
    char*pch2;
    pch=strtok(data,";");
    while(pch!=NULL) {
        cout<<pch2<<endl;
        pch2 = strtok(pch, "|");
    }
}

void Registro_1::abrir_archivo() {
    archivo->abrir("registros1.txt");
}

void Registro_1::leer_archivo() {

}

void Registro_1::guardar_archivo(char *data) {
    archivo->escribir(data,0,tam_registro);
}

void Registro_1::cerrar_archivo() {
    archivo->cerrar();
}

Registro_1::Registro_1(char *nombre, char *apellido, int edad, char *direccion) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->edad = edad;
    this->direccion = direccion;
    this->tam_registro = strlen(nombre)+strlen(apellido)+4+strlen(direccion)+4;
}
