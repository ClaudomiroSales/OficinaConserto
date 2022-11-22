#include "TV.h"

#include <iostream>
using std::cout;

TV::TV( int tamanho, int voltagem,  string nome )
: Eletrodomestico( false, voltagem, nome )
{
    this->tamanho = tamanho;
    canal = 0;
    volume = 0;
}

TV::~TV()
{

}
/*
void TV::ligar( )
{
    setLigado( true );
    this->canal = 3;
    this->volume = 30;   
}

void TV::desligar( )
{
    setLigado( false );
    this->canal = 3;
    this->volume = 30;    
}
*/

void TV::printInformations( )
{
    Eletrodomestico::printInformations( );
    cout << "Tamanho: " << this->tamanho << '\n';
    cout << "Canal: " << this->canal << "\n";
    cout << "Volume: " << this->volume << "\n"; 

}