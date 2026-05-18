//
// Created by Gustavo on 05/05/2026.
//

#include "User.h"

//defeito
User::User(): nome(""), email(""), numTele("") {}

//definido
User:: User(std::string n, std::string e, std::string nt): nome(n), email(e), numTele(nt) {}

//getters
std::string User:: getNome() const {return nome;}
std::string User:: getEmail() const {return email;}
std::string User:: getNumTele() const {return numTele;}

//impressão
void User::print() const {
  std::cout << "\n";
  std::cout << "Nome: " << nome << "\n";
  std::cout << "Email: " << email << "\n";
  std::cout << "Número: " << numTele << "\n";
};



//ficheiro (escrita)
  void User::saveToFile(std::string nfic) const {
    std::ofstream ficheiro(nfic);

    if (!ficheiro.is_open()) {
      std::cout << "Não foi possível abrir um ficheiro \n";
      return;
    }
    ficheiro << nome << "\n";
    ficheiro << email << "\n";
    ficheiro << numTele << "\n";

    ficheiro.close();
  }


//ficheiro (leitura)
void User::loadFromFile(std::string nfic) {

    std::ifstream ficheiro(nfic);

    if (!ficheiro.is_open()) {
      std::cout << "Não foi possível abrir o ficheiro\n";
      return;
    }

    getline(ficheiro, nome);
    getline(ficheiro, email);
    getline(ficheiro, numTele);

    ficheiro.close();
  }