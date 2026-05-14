//
// Created by Gustavo on 07/05/2026.
//

#include "Msg.h"

//defeito
Msg:: Msg(): id(0), info("") {}

//definido
Msg:: Msg(string i): info(i) {}

//getters
string Msg:: getInfo() const {return info;}

//impressão
string Msg::printInf() const {
  cout << "\n";
  cout << "Informação: " << info << "\n";
}
