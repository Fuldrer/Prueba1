//
// Created by Carlos Molina on 2/14/2018.
//

#ifndef INTENTO2_REGISTRO_3_H
#define INTENTO2_REGISTRO_3_H

#include "DataFile.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

class Registro_3 {
public:
    void mostrar_registros();
    char*tochar();
    void fromchar(char*data);
    void abrir_archivo();
    void leer_archivo(); //lee el primer registro del archivo
    void guardar_archivo(char*data); //guarda el registro en el archivo
    void cerrar_archivo();
    int tam_registro;

    Registro_3(char *nombre,char *apellido, int edad, char *direccion);

private:
    int tam_nombre;
    int tam_apellido;
    int tam_direccion;
    DataFile *archivo;
    char *nombre;
    char *apellido;
    int edad;
    char *direccion;
};


#endif //INTENTO2_REGISTRO_3_H
