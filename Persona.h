#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
#include <sstream>

using namespace std;
class Persona{
    private:
        string nombre;
        string genero;
        string colorCabello;
        string colorOjos;
        string colorPiel;
        bool fertil;
    public:
        Persona();
        Persona(string,string,string,string,string,bool);

        void setNombre(string s);
        void setGenero(string s);
        void setColorCabello(string s);
        void setColorOjos(string s);
        void setColorPiel(string s);
        void setFertil(bool f);

        string getNombre();
        string getGenero();
        string getColorCabello();
        string getColorOjos();
        string getColorPiel();
        bool isFertil();

        const Persona operator +(const Persona&);
        const Persona operator *(const Persona&);



};
#endif