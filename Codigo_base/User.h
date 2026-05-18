//
// Created by Gustavo on 05/05/2026.
//

#ifndef PROJETO_USER_H
#define PROJETO_USER_H

#include <string>
#include <iostream>
#include <fstream>

class User {

private:
    std::string nome;
    std::string email;
    std::string numTele;

public:
    //construtor defeito
    User();

    //construtor definido
    User(std::string n, std::string e, std::string nt);

    //getters
    std::string getNome() const;
    std::string getEmail() const;
    std::string getNumTele() const;

    //impressão
   void print() const;

    //ficheiros
    void saveToFile(string nfic) const;
    void loadFromFile(string nfic);

};

#endif //PROJETO_USER_H
