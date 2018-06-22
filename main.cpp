#include <iostream>
#include <string>
#include "Persona.h"
#include <vector>
#include <time.h>
#include <stdlib.h>

vector<Persona> personas;
using namespace std;

int main(){
    bool salir = false;
    int opcion = 0;
    while(salir==false){
        cout << " " << endl;
        cout << "PRESERVATIVOS DUREX" << endl;
        cout << "1) Agregar Persona" <<  endl;
        cout << "2) Eliminar Persona" << endl;
        cout << "3) Simulacion" << endl;
        cin >> opcion;
        switch(opcion){
            case 1:{
                string nombre,genero,colorCabello,colorOjos,colorPiel;
                bool fertil;
                int gen=0;
                int f=0;
                cout << "Ingrese Nombre: " << endl;
                cin >> nombre;
                cout << "Genero 1)Masculino 2)Femenino: " << endl;
                cin >> gen;
                if(gen==1){
                    genero = "Masculino";
                }else if(gen==2){
                    genero = "Femenino";
                }else{
                    bool s = true;
                    while(s == true){
                        cout << "Opcion Invalida "<< endl <<"Genero 1)Masculino 2)Femenino: " << endl;
                        cin >> gen;
                        if(gen==1){
                            genero = "Masculino";
                            s = false;
                        }else if(gen==2){
                            genero = "Femenino";
                            s = false;
                        }
                    }
                }
                cout << "Ingrese Color de Cabello: " << endl;
                cin >> colorCabello;
                cout << "Ingrese Color de Ojos: " << endl;
                cin >> colorOjos;
                cout << "Ingrese Color de Piel: " << endl;
                cin >> colorPiel;
                cout << "Es Fertil? 1)Si 2) No: " << endl;
                cin >> f;
                if(f==1){
                    fertil = true;
                }else if(f==2){
                    fertil = false;
                }else{
                    bool s = true;
                    while(s == true){
                        cout << "Opcion Invalida"<< endl <<"Es Fertil? 1)Si 2) No: " << endl;
                        cin >> f;
                        if(f==1){
                            fertil = true;
                            s = false;
                        }else if(f==2){
                            fertil = false;
                            s = false;
                        }
                    }
                }
                Persona p(nombre,genero,colorCabello,colorOjos,colorPiel,fertil);
                personas.push_back(p);
                cout << "Persona Agregada!" << endl;
                break;
            }
            case 2:{
                if(personas.size() > 0){
                    cout << "---PERSONAS---"<< endl;
                    int g = 0;
                    for(int i = 0; i < personas.size(); i++){
                        cout << i+1 << ") " << personas.at(i).getNombre()<< " " << personas.at(i).getGenero() << endl;
                    }
                    cout << "Seleccione Persona a Eliminar: " << endl;
                    cin >> g;
                    personas.erase(personas.begin() + (g-1)); 
                }else{
                    cout << "No hay Personas Agregadas" << endl;
                }
                break;
            } 
            case 3:{
                if(personas.size() > 1){
                    cout << "---PERSONAS---"<< endl;
                    int g = 0,r = 0,a = 0;;
                    for(int i = 0; i < personas.size(); i++){
                        cout << i+1 << ") " << personas.at(i).getNombre()<< " " << personas.at(i).getGenero() << endl;
                    }
                    cout << "Seleccione Primera Persona: " << endl;
                    cin >> g;
                    cout << "Seleccione Segunda Persona: " << endl;
                    cin >> r;
                    Persona per1 = personas.at(g-1);
                    Persona per2 = personas.at(r-1);
                    cout << "1) Simulacion de Sexo Sin Proteccion: " <<  endl;
                    cout << "2) Simulacion de Sexo Con Proteccion: " <<  endl;
                    cin >> a;
                    switch (a)
                    {
                        case 1:{
                            if(per1.getGenero() != per2.getGenero()){
                                int r1=0;
                                srand(time(NULL));
                                r1 = (rand()&28) + 1;

                                
                                    if(r1>0 && r1<7 && (per1.isFertil()==true) && (per2.isFertil()==true)) {
                                        cout << "La Mujer Quedo Embarazada" << endl;

                                        int r2=0;
                                        srand(time(NULL));
                                        r2 = (rand()&100) + 1;

                                        if(r2>0 && r2<51){
                                            cout << "El bebe es Hombre" << endl;
                                            if(per1.getGenero() == "Masculino"){
                                                per1 * per2;
                                            }else if(per2.getGenero() == "Masculino"){
                                                per2 * per1;
                                            }
                                        }else{
                                            cout << "El bebe es Mujer" << endl;
                                            if(per1.getGenero() == "Femenino"){
                                                per1 * per2;
                                            }else if(per2.getGenero() == "Femenino"){
                                                per2 * per1;
                                            }
                                        }
                                    }else if((per1.isFertil()==false) || (per2.isFertil()==false)){
                                        cout << "La Mujer No Quedo Embarazada" << endl;
                                    }


                                
                            }else{
                                cout << "No se Permite el Coito entre Personas de Mismo Genero" << endl;
                            }
                        }
                        case 2:{
                            if(per1.getGenero() != per2.getGenero()){
                                int random=0;
                                srand(time(NULL));
                                random = (rand()&100) + 1;

                                int r1=0;
                                srand(time(NULL));
                                r1 = (rand()&28) + 1;

                                if(random == 1){
                                    cout << "El Preservativo estaba Roto" << endl;
                                    if(r1>0 && r1<7 && (per1.isFertil()==true) && (per2.isFertil()==true)) {
                                        cout << "La Mujer Quedo Embarazada" << endl;

                                        int r2=0;
                                        srand(time(NULL));
                                        r2 = (rand()&100) + 1;

                                        if(r2>0 && r2<51){
                                            cout << "El bebe es Hombre" << endl;
                                        }else{
                                            cout << "El bebe es Mujer" << endl;
                                        }
                                    }else if((per1.isFertil()==false) || (per2.isFertil()==false)){
                                        cout << "La Mujer No Quedo Embarazada" << endl;
                                    }

                                }
                            }else{
                                cout << "No se Permite el Coito entre Personas de Mismo Genero" << endl;
                            }

                            break;
                        }
                        default:
                            break;
                    }
                }else{
                    cout << "No hay mas de 2 Personas Agregadas" << endl;
                }
                break;
            }
        }
    }
}
    
