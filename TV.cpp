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

void TV::printInformations( )
{
    Eletrodomestico::printInformations( );
    cout << "Tamanho: " << this->tamanho << '\n';
    cout << "Canal: " << this->canal << "\n";
    cout << "Volume: " << this->volume << "\n"; 

}