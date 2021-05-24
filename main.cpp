//
//  main.cpp
//  Tarea 01 _ Herencia
//  Created by Lydia Delgado Uriarte & Hugo Edgar Palomares Estrella on 14/05/21.
//

#include <iostream>
#include "Personaje.h"
#include "LaserMan.h"
#include "ArrowWoman.h"
#include "Genius.h"
using namespace std;

//Función para crear personaje
void CrearPersonaje(ArrowWoman listaarrow[], Genius listagenius[], LaserMan listalaser[], int pjcreado, int a, int b, int c){
    string nombre,clase;
    int ans=0, prof=0;
    int i=pjcreado;
    cout << "Bienvenido, primero que nada como quieres que se llame tu personaje?" << endl;
    cin >> nombre;
    cout << "Estas seguro que quieres que tu personaje se llame: " << nombre << " ? Escribe 1 si tu respuesta es si, cualquier otro caracter si es un no" << endl;
    cin >> ans;
    while (ans!= 1){
        cout << "Entonces como quieres que se llame tu personaje?" << endl;
        cin >> nombre;
        cout << "Estas seguro que quieres que tu personaje se llame: " << nombre << " ? Escribe 1 si tu respuesta es si, cualquier otro caracter es un no" << endl;
        cin >> ans;
    }
    ans=0;
    cout << endl << endl << endl << "Es hora de escoger una clase, existen 4 diferentes las cuales le dan habilidades especiales y características únicas a tu personaje."<< endl;
    while (ans!= 1){
        cout << " _____________________________" << endl;
        cout << "|   Que clase escoges?        |"<< endl;
        cout << "|-----------------------------|" << endl;
        cout << "|        [1] ArrowWoman       |" << endl;
        cout << "|        [2] Genius           |" << endl;
        cout << "|        [3] LaserMan         |" << endl;
        cout << "|_____________________________|" << endl << "Selecciono la clase: ";
        cin >> prof;
        if (prof== 1 ){
            cout << "Estas seguro que quieres que tu personaje sea un ArrowWoman? Escribe 1 si tu respuesta es si, cualquier otro caracter es no" << endl;
            cin >> ans;
        }
        else if(prof==2){
            cout << "Estas seguro que quieres que tu personaje sea un Genius ? Escribe 1 si tu respuesta es si, cualquier otro caracter si es no" << endl;
            cin >> ans;
        }        
        else if(prof==3){
            cout << "Estas seguro que quieres que tu personaje sea un LaserMan? Escribe 1 si tu respuesta es si, cualquier otro caracter si es no" << endl;
            cin >> ans;
        }
        else{
            cout << "Escoge una opción valida" << endl ;
        }
    }
    if (prof==1){
        listaarrow[a].setNumArrows(10);
        listaarrow[a].setNombre(nombre);
        listaarrow[a].setNivel(1);
    }
    
    else if (prof==2){
        listagenius[b].setNumAnswers(5);
        listagenius[b].setNombre(nombre);
        listagenius[b].setNivel(2);
        b++;
    }
    else{
        listalaser[c].setNumCharges(20);
        listalaser[c].setNombre(nombre);
        listalaser[c].setNivel(3);
        c++;
    }
  
    ans=0;

   
}
    


//Función para mostrar personaje
void MostrarPersonajes(ArrowWoman listaarrow[], Genius listagenius[], LaserMan listalaser[], int pjcreado,int a,int b,int c){
    cout << a << endl;
    cout << endl << "\tLista de personajes\t" << endl;
    cout << "----------------------------------------" << endl;
    cout << "\t  Arrow Women" << endl;
    for (int i=0 ; i<a; i++){
        listaarrow[i].imprime();
    }
    cout << endl;
    cout << "\t Geniuses" << endl;
    for (int i=0 ; i<b; i++){
        listagenius[i].imprime();
    }
    cout << endl;
    cout << "\t LaserMen" << endl;
    for (int i=0 ; i<c; i++){
        listalaser[i].imprime();
    }
}

int main(){
    int Pjcreado=0, a=0, b=0, c=0; 
    char opcion, o='1';
    ArrowWoman arrowpj[a];
    Genius geniuspj[b];
    LaserMan laserpj[c];
    
    do{
        cout << endl;
        cout << " ________________________________" << endl;
        cout << "|                                |" << endl;
        cout << "|             Menú               |" << endl;
        cout << "|________________________________|" << endl;
        cout << "|                                |" << endl;
        cout << "| 1. Crear Personaje             |"<< endl;
        cout << "| 2. Mostrar personajes          |"<< endl;
        cout << "| 3. Finalizar juego             |" << endl;
        cout << "|________________________________|" << endl;
        cout << "" << endl << endl << "Opcion: ";
        cin >> opcion ;
        switch (opcion){
            case '1':
                while (o != '*'){
                    CrearPersonaje(arrowpj, geniuspj, laserpj,Pjcreado, a, b, c);
                    Pjcreado++;
                    if (arrowpj[a].getNumArrows()==10){
                        a++;
                    }
                    else if (geniuspj[b].getNumAnswers()==5){
                        b++;
                    }
                    else if (laserpj[c].getNumCharges()==20){
                        c++;
                    };
                    cout << "Ingresa * para dejar de agregar personajes, cualquier otro caracter para seguir agregando" << endl;
                    cin >> o;
                }
                o='1';
                break;
               
            case '2':
                if (Pjcreado==0){
                    cout << "No has creado ningún personaje" << endl;
                }
                else {
                    MostrarPersonajes(arrowpj, geniuspj, laserpj,Pjcreado,a,b,c);
                }
                break;
             
            case '3':
                cout << "Gracias por jugar" << endl << endl;
                break;
            default:
                cout << "Ingrese una opcion valida" << endl;
        }
        
    }while (opcion != '3');
    return 0;
}
    

