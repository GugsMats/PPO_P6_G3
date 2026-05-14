//
// Created by Gustavo on 05/05/2026.
//

#include "User.h"

//defeito
User::User(): nome(""), email(""), numTele("") {}

//definido
User:: User(string n, string e, string nt): nome(n), email(e), numTele(nt) {}

//getters
string User:: getNome() const {return nome;}
string User:: getEmail() const {return email;}
string User:: getNumTele() const {return numTele;}

//impressão
void User::print() const {
  cout << "\n";
  cout << "Nome: " << nome << "\n";
  cout << "Email: " << email << "\n";
  cout << "Número: " << numTele << "\n";
};



//ficheiro (escrita)
  void User::saveToFile(string nfic) const {
    ofstream ficheiro(nfic);

    if (!ficheiro.is_open()) {
      cout << "Não foi possível abrir um ficheiro \n";
      return;
    }
    ficheiro << nome << "\n";
    ficheiro << email << "\n";
    ficheiro << numTele << "\n";

    ficheiro.close();
  }


//ficheiro (leitura)
void User::loadToFile(string nfic) {

    ifstream ficheiro(nfic);

    if (!ficheiro.is_open()) {
      cout << "Não foi possível abrir o ficheiro\n";
      return;
    }

    getline(ficheiro, nome);
    getline(ficheiro, email);
    getline(ficheiro, numTele);

    ficheiro.close();
  }