//
// Created by Carlos Molina on 2/14/2018.
//

#include "DataFile.h"

void DataFile::abrir(char* direccion) {
    archivo = fopen(direccion,"wb+");
}

void DataFile::cerrar() {
    fclose(archivo);
}

void DataFile::escribir(char *data, int pos, int bytes) {
    fseek(archivo,bytes,SEEK_SET);
    fwrite(data,1,bytes,archivo);
}

char *DataFile::leer(int pos, int bytes) {
    fseek(archivo,0,SEEK_SET);
    char*data = new char[bytes];
    fread(data, 1, bytes,archivo);
    return data;
}

DataFile::DataFile(char *direccion){
    archivo = fopen(direccion,"wb+");
    fclose(archivo);
}
