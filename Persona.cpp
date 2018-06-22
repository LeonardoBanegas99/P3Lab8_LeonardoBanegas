#include "Persona.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

Persona::Persona()
{
}

Persona::Persona(string nombre, string genero, string colorCabello, string colorOjos, string colorPiel, bool fertil)
{
    this->nombre = nombre;
    this->genero = genero;
    this->colorCabello = colorCabello;
    this->colorOjos = colorOjos;
    this->colorPiel = colorPiel;
    this->fertil = fertil;
}

const Persona Persona::operator +(const Persona &p)
{
    
}

const Persona Persona::operator *(const Persona &p)
{
    if(this->getGenero() == "Masculino"){
        
    }else if(this->getGenero() == "Femenino"){

    }
}

void Persona::setNombre(string s)
{
    this->nombre = s;
}
void Persona::setGenero(string s)
{
    this->genero = s;
}
void Persona::setColorCabello(string s)
{
    this->colorCabello = s;
}
void Persona::setColorOjos(string s)
{
    this->colorOjos = s;
}
void Persona::setColorPiel(string s)
{
    this->colorPiel = s;
}
void Persona::setFertil(bool f)
{
    this->fertil = f;
}

string Persona::getNombre()
{
    return nombre;
}
string Persona::getGenero()
{
    return genero;
}
string Persona::getColorCabello()
{
    return colorCabello;
}
string Persona::getColorOjos()
{
    return colorOjos;
}
string Persona::getColorPiel()
{
    return colorPiel;
}
bool Persona::isFertil()
{
    return fertil;
}
