#include "Eletrodomestico.h"

#include <iostream>
using std::cout;

#include <string>
using std::string;

Eletrodomestico::Eletrodomestico( bool ligado, int voltagem,  string nome )
: ligado(ligado), voltagem(voltagem), nome(nome)
{

}

Eletrodomestico::Eletrodomestico( const Eletrodomestico & eletroOut )
: ligado(eletroOut.ligado), voltagem(eletroOut.voltagem), nome(eletroOut.nome)
{

}

Eletrodomestico::~Eletrodomestico()
{
    
}

void Eletrodomestico::printInformations( )
{
    cout << "Nome: " << this->nome << "\n";
    cout << "Voltagem: " << this->voltagem << "\n";
}