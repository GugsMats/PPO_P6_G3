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
    User();

    //construtor definido
    User(string n, string e, string nt);

    //getters
    string getNome() const;
    string getEmail() const;
    string getNumTele() const;

    //impressão
    virtual void print() const;     

}

#endif //PROJETO_USER_H
