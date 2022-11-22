#ifndef TV_H
#define TV_H

#include "Eletrodomestico.h"

class TV : public Eletrodomestico
{
public:
    TV( int, int,  string );
    virtual ~TV();
    //virtual void ligar( );
    //virtual void desligar( );
    //virtual void selectMode( string ) = 0;
    virtual void printInformations( );
protected:
    int tamanho;
    int canal;
    int volume;
};

#endif //TV_H