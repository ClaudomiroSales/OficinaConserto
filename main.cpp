#include <iostream>
using std::cout;

#include <vector>
using std::vector;


#include "SmartTVGame.h"
#include "SmartTVGame.cpp"
#include "TV.h"
#include "TV.cpp"
#include "Eletrodomestico.h"
#include "Eletrodomestico.cpp"

void avaliarAparelho( Eletrodomestico *);

int main(int argc, char **argv)
{
    SmartTVGame *ptr = new SmartTVGame( 55, 110, "TV microLED");
    
	vector< Eletrodomestico * > eletros;

    eletros.push_back( new SmartTVGame( 29, 110, "TV OLED") );
	eletros.push_back( new SmartTVGame( *ptr ) );

    for( Eletrodomestico *eletro : eletros )
        avaliarAparelho( eletro );
	
    for( Eletrodomestico *eletro : eletros )
        delete eletro;

    delete ptr;
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
