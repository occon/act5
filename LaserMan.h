//
//  LaserMan.h
//  Tarea 01 herencia
//
//  Created by Lydia Delgado uriarte & Hugo Edgar Palomares Estrella on 20/05/21.
//

#ifndef LaserMan_h
#define LaserMan_h
#include "Personaje.h"

class LaserMan: public Personaje{
    public:
        LaserMan();
        LaserMan(int,string, int);
        int getNumCharges();
        void setNumCharges(int);
        void shootLaser();
        void imprime();
    private:
        int numCharges;
    
};


LaserMan::LaserMan(): Personaje(){
    numCharges=0;
}

LaserMan::LaserMan(int numch, string name, int lvl): Personaje(name, lvl){
    numCharges= numch;
    Nombre= name;
    Nivel= lvl;
}


//Getters
int LaserMan::getNumCharges(){
    return numCharges;
}


//Setters
void LaserMan::setNumCharges(int numch){
    numCharges=numch;
}


//Funciones
void LaserMan::shootLaser(){
    
}

//Funcion imprime
void LaserMan::imprime(){
    cout << "----------------------------------------" << endl;
    cout << "Nombre\tNivel\tNumCharges " << endl;
    cout << Nombre << "\t" << Nivel << "\t" << numCharges << endl;
    cout << "----------------------------------------" << endl;
}
#endif /* Laserman_h */
//
//  LaserMan.h
//  Tarea 01 herencia
//
//  Created by Lydia Delgado uriarte & Hugo Edgar Palomares Estrella on 20/05/21.
//

#ifndef LaserMan_h
#define LaserMan_h
#include "Personaje.h"

class LaserMan: public Personaje{
    public:
        LaserMan();
        LaserMan(int,string, int);
        int getNumCharges();
        void setNumCharges(int);
        void shootLaser();
        void imprime();
    private:
        int numCharges;
    
};


LaserMan::LaserMan(): Personaje(){
    numCharges=0;
}

LaserMan::LaserMan(int numch, string name, int lvl): Personaje(name, lvl){
    numCharges= numch;
    Nombre= name;
    Nivel= lvl;
}


//Getters
int LaserMan::getNumCharges(){
    return numCharges;
}


//Setters
void LaserMan::setNumCharges(int numch){
    numCharges=numch;
}


//Funciones
void LaserMan::shootLaser(){
    
}

//Funcion imprime
void LaserMan::imprime(){
    cout << "----------------------------------------" << endl;
    cout << "Nombre\tNivel\tNumCharges " << endl;
    cout << Nombre << "\t" << Nivel << "\t" << numCharges << endl;
    cout << "----------------------------------------" << endl;
}
#endif /* Laserman_h */
