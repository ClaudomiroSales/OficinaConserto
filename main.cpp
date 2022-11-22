#include <iostream>
using std::cout;

#include <vector>
using std::vector;


#include "SmartTVGame.h"
#include "SmartTVGame.cpp"

void avaliarAparelho( Eletrodomestico *);

int main(int argc, char **argv)
{
	vector< Eletrodomestico * > eletros;

    eletros.push_back( new SmartTVGame( 29, 110, "TV OLED") );
	
    for( Eletrodomestico *eletro : eletros )
        avaliarAparelho( eletro );
	
	return 0;
}

void avaliarAparelho( Eletrodomestico *eletro)
{
    cout << "____________" << '\n';
    eletro->printInformations( );
    cout << (eletro->isLigado( ) ? "O aparelho esta ligado." : 
                "O aparelho esta desligado.") << '\n';
    cout << "____________" << '\n';
}