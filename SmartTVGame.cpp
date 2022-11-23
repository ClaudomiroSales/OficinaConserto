#include "SmartTVGame.h"

#include <iostream>
using std::cout;

SmartTVGame::SmartTVGame( int tamanho, int voltagem,  string nome, string mode )
: TV( tamanho, voltagem,  nome )
{
    selectMode( mode );      
}

SmartTVGame::SmartTVGame( const SmartTVGame &smarty )
: TV( smarty )
{
    this->mode = smarty.mode;
    this->resolution = smarty.resolution; 
    this->fps = smarty.fps;  
}

SmartTVGame::~SmartTVGame()
{
    
}

void SmartTVGame::selectMode( string mode )
{
    //Verificar se mode está correto
    this->mode = mode;
    if (this->mode == "levelGameSuperior" )
    {
        resolution = "1440p";   
        fps = 60;  
    }
}

void SmartTVGame::ligar( )
{
    setLigado( true );
    this->canal = 3;
    this->volume = 30;
    mode = "normalTV";
    resolution = "4k"; 
    fps = 20; 

}

void SmartTVGame::desligar( )
{
    setLigado( false );
    this->canal = 3;
    this->volume = 30;
    mode = "normalTV";
    resolution = "4k"; 
    fps = 20; 

}

void SmartTVGame::printInformations( )
{
    TV::printInformations( );
    cout << "Mode: " << this->mode << '\n';
    cout << "Resolution: " << this->resolution << "\n";
    cout << "FPS: " << this->fps << "\n"; 
}