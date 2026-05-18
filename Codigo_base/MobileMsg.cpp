//
// Created by jpats on 13/05/2026.
//

#include "MobileMsg.h"

//inicialização
unsigned int MobileMsg::nextId = 1000;

//defeito
MobileMsg:: MobileMsg(): Msg(""), srcPhoneNo(""), dstPhoneNo("") {}

//definido
MobileMsg:: MobileMsg(std::string txt, std::string spn, std::string dpn): Msg(txt), id(nextId++), srcPhoneNo(spn), dstPhoneNo(dpn) {}

//getters
unsigned int MobileMsg:: getId() const {return id;}
std::string MobileMsg:: getSrcPhoneNo() const {return srcPhoneNo;}
std::string MobileMsg:: getDstPhoneNo() const {return dstPhoneNo;}
std::string MobileMsg:: getType() const {return "Mensagem via contacto telefónico";}

//impressão
void MobileMsg::print() const {
    std::cout << "\n";
        std::cout << "Id: " << id << "\n";
        std::cout << "Origem: " << srcPhoneNo << "\n";
        std::cout << "Destino: " << dstPhoneNo << "\n";
    Msg::print();
}
