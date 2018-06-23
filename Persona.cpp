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

Persona Persona::operator +(Persona &p)
{
    string nom,gen,colorcabello,colorojos,colorpiel;
    bool fertil;
    if(this->getGenero() == "Masculino"){
        nom = this->getNombre() + "-Hijo";
        gen = this->getGenero();
        
    }else if(this->getGenero() == "Femenino"){
        nom = this->getNombre() + "-Hija";
        gen = this->getGenero();
    }

    if(this->getColorCabello() == "Negro" && p.getColorCabello() == "Cafe"){
        colorcabello = "Negro";
    }else if(this->getColorCabello() == "Cafe" && p.getColorCabello() == "Rubio"){
        colorcabello = "Cafe";
    }else if(this->getColorCabello() == "Rubio" && p.getColorCabello() == "Negro"){
        colorcabello = "Negro";
    }
    
    if(p.getColorCabello() == "Cafe" && this->getColorCabello() == "Negro"){
        colorcabello = "Negro";
    }else if(p.getColorCabello() == "Rubio" && this->getColorCabello() == "Cafe"){
        colorcabello = "Cafe";
    }else if(p.getColorCabello() == "Negro" && this->getColorCabello() == "Rubio"){
        colorcabello = "Negro";
    }

    //**********************
    if(this->getColorOjos() == "Azul" && p.getColorOjos() == "Verde"){
        colorojos = "Azul";
    }else if(this->getColorOjos() == "Cafe" && p.getColorOjos() == "Azul"){
        colorojos = "Cafe";
    }else if(this->getColorOjos() == "Verde" && p.getColorOjos() == "Cafe"){
        colorojos = "Cafe";
    }
    
    if(p.getColorOjos() == "Verde" && this->getColorOjos() == "Azul"){
        colorojos = "Azul";
    }else if(p.getColorOjos() == "Azul" && this->getColorOjos() == "Cafe"){
        colorojos = "Cafe";
    }else if(p.getColorOjos() == "Cafe" && this->getColorOjos() == "Verde"){
        colorojos = "Cafe";
    }

    //**********************
    if(this->getColorPiel() == "Blanco" && p.getColorPiel() == "Negro"){
        colorpiel = "Negro";
    }else if(this->getColorPiel() == "Canela" && p.getColorPiel() == "Blanco"){
        colorpiel = "Canela";
    }else if(this->getColorPiel() == "Negro" && p.getColorPiel() == "Canela"){
        colorpiel = "Negro";
    }
    
    if(p.getColorPiel() == "Negro" && this->getColorPiel() == "Blanco"){
        colorpiel = "Negro";
    }else if(p.getColorPiel() == "Blanco" && this->getColorPiel() == "Canela"){
        colorpiel = "Canela";
    }else if(p.getColorPiel() == "Canela" && this->getColorPiel() == "Negro"){
        colorpiel = "Negro";
    }

    Persona bebe(nom,gen,colorcabello,colorojos,colorpiel,true);

    return bebe;

}

Persona Persona::operator *(Persona &p)
{
   string nom,gen,colorcabello,colorojos,colorpiel;
    bool fertil;
    if(this->getGenero() == "Masculino"){
        nom = this->getNombre() + "-Hijo";
        gen = this->getGenero();
        
    }else if(this->getGenero() == "Femenino"){
        nom = this->getNombre() + "-Hija";
        gen = this->getGenero();
    }

    if(this->getColorCabello() == "Negro" && p.getColorCabello() == "Cafe"){
        colorcabello = "Negro";
    }else if(this->getColorCabello() == "Cafe" && p.getColorCabello() == "Rubio"){
        colorcabello = "Cafe";
    }else if(this->getColorCabello() == "Rubio" && p.getColorCabello() == "Negro"){
        colorcabello = "Negro";
    }
    
    if(p.getColorCabello() == "Cafe" && this->getColorCabello() == "Negro"){
        colorcabello = "Negro";
    }else if(p.getColorCabello() == "Rubio" && this->getColorCabello() == "Cafe"){
        colorcabello = "Cafe";
    }else if(p.getColorCabello() == "Negro" && this->getColorCabello() == "Rubio"){
        colorcabello = "Negro";
    }

    //**********************
    if(this->getColorOjos() == "Azul" && p.getColorOjos() == "Verde"){
        colorojos = "Azul";
    }else if(this->getColorOjos() == "Cafe" && p.getColorOjos() == "Azul"){
        colorojos = "Cafe";
    }else if(this->getColorOjos() == "Verde" && p.getColorOjos() == "Cafe"){
        colorojos = "Cafe";
    }
    
    if(p.getColorOjos() == "Verde" && this->getColorOjos() == "Azul"){
        colorojos = "Azul";
    }else if(p.getColorOjos() == "Azul" && this->getColorOjos() == "Cafe"){
        colorojos = "Cafe";
    }else if(p.getColorOjos() == "Cafe" && this->getColorOjos() == "Verde"){
        colorojos = "Cafe";
    }

    //**********************
    if(this->getColorPiel() == "Blanco" && p.getColorPiel() == "Negro"){
        colorpiel = "Negro";
    }else if(this->getColorPiel() == "Canela" && p.getColorPiel() == "Blanco"){
        colorpiel = "Canela";
    }else if(this->getColorPiel() == "Negro" && p.getColorPiel() == "Canela"){
        colorpiel = "Negro";
    }
    
    if(p.getColorPiel() == "Negro" && this->getColorPiel() == "Blanco"){
        colorpiel = "Negro";
    }else if(p.getColorPiel() == "Blanco" && this->getColorPiel() == "Canela"){
        colorpiel = "Canela";
    }else if(p.getColorPiel() == "Canela" && this->getColorPiel() == "Negro"){
        colorpiel = "Negro";
    }

    Persona bebe(nom,gen,colorcabello,colorojos,colorpiel,true);

    return bebe;
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
