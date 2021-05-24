//
//  ArrowWoman.h
//

#ifndef ArrowWoman_h
#define ArrowWoman_h
#include "Personaje.h"

using namespace std;

class ArrowWoman:public Personaje{
    public:
        ArrowWoman();
        ArrowWoman(int,string,int);
        void shootArrow();
        int getNumArrows();
        void setNumArrows(int);
        void imprime();
    
    private:
        int numArrows;
};

ArrowWoman::ArrowWoman(): Personaje(){ //Constructor default
    numArrows=0;
}

ArrowWoman::ArrowWoman(int arrows, string name, int lvl): Personaje(name, lvl){
    numArrows=arrows;
    Nombre= name;
    Nivel= lvl;
}

//Getters
int ArrowWoman::getNumArrows(){
    return numArrows;
}


//Setters
void ArrowWoman::setNumArrows(int arrows){
    numArrows= arrows; 
}

// Metodos

void ArrowWoman::shootArrow(){
    if (numArrows==0){
        cout << "Haz disparado 1 flecha, te quedan " << numArrows << " flechas" << endl;
    }
    else{
        cout << "No tienes ninguna flecha" << endl;
    }
    
}

void ArrowWoman::imprime(){
    cout << "----------------------------------------" << endl;
    cout << "Nombre\tNivel\tFlechas " << endl;
    cout << Nombre << "\t" << Nivel << "\t" << numArrows << endl;
    cout << "----------------------------------------" << endl;
}



#endif /* ArrowWoman_h */
