//
//  Genius.h
//  Tarea 01 herencia
//
//  Created by Lydia Delgado uriarte & Hugo Edgar Palomares Estrella on 23/05/21.
//

#ifndef Genius_h
#define Genius_h
#include "Personaje.h"

class Genius: public Personaje{
    public:
        Genius();
        Genius(int, string, int);
        void setNumAnswers(int);
        int getNumAnswers();
        void telepathy();
        void freeze();
        void imprime();
    private:
        int numAnswers;
};

Genius::Genius(): Personaje(){
    numAnswers=0;
}

Genius::Genius(int Ans, string name, int lvl): Personaje(name, lvl){
    numAnswers= Ans;
    Nombre= name;
    Nivel= lvl;
}


//Getters
int Genius::getNumAnswers(){
    return numAnswers;
}

//Setters
void Genius::setNumAnswers(int Ans){
    numAnswers= Ans;
}

//Metodos
void Genius::telepathy(){
    
}

void Genius::freeze(){
    
}

void Genius::imprime(){
    cout << "----------------------------------------" << endl;
    cout << "Nombre\tNivel\tNumAnswers " << endl;
    cout << Nombre << "\t" << Nivel << "\t" << numAnswers << endl;
    cout << "----------------------------------------" << endl;
}


#endif /* Genius_h */