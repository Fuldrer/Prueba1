//
// Created by Carlos Molina on 2/14/2018.
//

#ifndef INTENTO2_REGISTRO_2_H
#define INTENTO2_REGISTRO_2_H

#include "DataFile.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

class Registro_2 {

public:
    Registro_2(char *nom, char *ap, int edad, char *dir);
    void mostrar_registros();
    char*tochar();
    void fromchar(char*data);
    void abrir_archivo();
    void leer_archivo(); //lee el primer registro del archivo
    void guardar_archivo(char*data); //guarda el registro en el archivo
    void cerrar_archivo();
    int tam_registro;

private:
    DataFile *archivo;
    char *nombre;
    char *apellido;
    int edad;
    char *direccion;
};

#endif //INTENTO2_REGISTRO_2_H
