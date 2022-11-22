#ifndef SMARTTVGAME_H
#define SMARTTVGAME_H

#include "TV.h"

class SmartTVGame : public TV
{
public:
    SmartTVGame( int, int,  string, string = "levelGameSuperior" );
    ~SmartTVGame();
    void ligar( );
    void desligar( );
    void selectMode( string = "levelGameSuperior" );
    void printInformations( );
private:
    string mode;
    string resolution; 
    int fps;       
};

#endif //SMARTTVGAME_H