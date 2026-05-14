//
// Created by Gustavo on 05/05/2026.
//

#ifndef PROJETO_USER_H
#define PROJETO_USER_H

using namespace std;
#include <string>
#include <iostream>
#include <fstream>

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
   void print() const;

    //ficheiros
    void saveToFile(string nfic) const;
    void loadToFile(string nfic);

};

#endif //PROJETO_USER_H
