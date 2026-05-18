//
// Created by Gustavo on 07/05/2026.
//

#include "EmailMsg.h"

//inicialização
unsigned int EmailMsg::nextId = 1;

//defeito
EmailMsg::EmailMsg(): id(0), srcAddr(""), dstAddr("") {}

//definido
EmailMsg::EmailMsg(std::string txt, std::string sa, std::string da): Msg(txt), id(nextId++), srcAddr(sa), dstAddr(da) {}

//getters
unsigned int EmailMsg::getId() const {return id;} 
std::string EmailMsg::getSrcAddr() const {return srcAddr;}
std::string EmailMsg::getDstAddr() const {return dstAddr;}
std::string EmailMsg::getType() const {return "Mensagem via Email";}

//impressão
void EmailMsg::print() const {
   std::cout << "\n";
        std::cout << "Id: " << id << "\n";
        std::cout << "Origem: " << srcAddr << "\n";
        std::cout << "Destino: " << dstAddr << "\n";
   Msg::print();
}
