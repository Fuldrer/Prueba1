//
// Created by Carlos Molina on 2/14/2018.
//

#ifndef INTENTO2_DATAFILE_H
#define INTENTO2_DATAFILE_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class DataFile {
public:
    DataFile(char *direccion);
    void abrir(char*direccion);
    void cerrar();
    void escribir(char*data,int pos,int bytes);
    char*leer(int pos, int bytes);

private:
    char*direccion;
    FILE*archivo;

};


#endif //INTENTO2_DATAFILE_H
