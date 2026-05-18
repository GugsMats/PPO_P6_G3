//
// Created by Gustavo on 07/05/2026.
//

#include "Msg.h"

//defeito
Msg:: Msg(): info("") {}

//definido
Msg:: Msg(std::string i): info(i) {}

//getters
std::string Msg:: getInfo() const {return info;}

//impressão
void Msg::print() const {
  std::cout << "\n";
  std::cout << "Informação: " << info << "\n";
}
