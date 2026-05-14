//
// Created by Gustavo on 05/05/2026.
//

#include "User.h"

//defeito
User:: User(): nome(""), email(""), numTele("") {}

//definido
User:: User(string n, string e, string nt): nome(n), email(e), numTele(nt)

//getters
string User:: getNome() const {return nome;}
string User:: getEmail() const {return email;}
string User:: getNumTele() const {return nemTele;}

//impressão
virtual void print() const {
  cout << "\n"
        cout << "Nome: " << nome << "\n";
        cout << "Email: " << email << "\n";
        cout << "Número Telemóvel: " << numTele << "\n";
  };
}
