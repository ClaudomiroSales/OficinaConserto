#ifndef ELETRODOMESTICO_H
#define ELETRODOMESTICO_H

#include <string>
using std::string;

class Eletrodomestico
{
public:
    Eletrodomestico( bool, int,  string );
    virtual ~Eletrodomestico();
    virtual void ligar( ) = 0;
    virtual void ligar( ) = 0;
    void setLigado( bool ligado = false ) { this->ligado = ligado; }
    bool isLigado( ) { return this->ligado; }
    int getVoltagem( ) { return this->voltagem; }
    string getNome( ) { return this->nome; }
    virtual void printInformations( );
private:
    bool ligado;
    int voltagem;
    string nome;
};

#endif //ELETRODOMESTICO_H