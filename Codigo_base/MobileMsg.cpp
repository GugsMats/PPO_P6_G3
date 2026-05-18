//
// Created by jpats on 13/05/2026.
//

#include "MobileMsg.h"

//inicialização
unsigned int MobileMsg::nextId = 1000;

//defeito
MobileMsg:: MobileMsg(): Msg(""), srcPhoneNo(""), dstPhoneNo("") {}

//definido
MobileMsg:: MobileMsg(string spn, string dpn, string i): Msg(i), srcPhoneNo(spn), dstPhoneNo(dpn) {}

//getters
unsigned int MobileMsg:: getId() const {return id;}
string MobileMsg:: getSrcPhoneNo() const {return srcPhoneNo;}
string MobileMsg:: getDstPhoneNo() const {return dstPhoneNo;}
string MobileMsg:: getType() const {return "Mensagem via contacto telefónico";}

//impressão
void MobileMsg::print() const {
    cout << "\n";
        cout << "Id: " << id << "\n";
        cout << "Origem: " << srcPhoneNo << "\n";
        cout << "Destino: " << dstPhoneNo << "\n";
    Msg::print();
}
