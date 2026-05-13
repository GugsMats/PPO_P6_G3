//
// Created by Gustavo on 05/05/2026.
//

#ifndef PROJETO_USER_H
#define PROJETO_USER_H

using namespace std;
#include "string"



class User {

private:
    string nome;
    string email;
    string numTele;

public:
    //construtor defeito
    User(): nome(""), email(""), numTele("") {}
    //construtor definido
    User(string n, string e, string nt): nome(n), email(e), numTele(nt) {}
    //getters
    string getNome() {return nome;}
    string getEmail() {return email;}
    string getNumTele() {return numTele;}
    //impressão
    virtual void print() const {
        cout << "\n";
        cout << "Nome: " << nome << "\n";
        cout << "Email: " << email << "\n";
        cout << "Número de Telemóvel: " << numTele << "\n";
    }      

};



#endif //PROJETO_USER_H
