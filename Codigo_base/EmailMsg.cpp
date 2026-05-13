//
// Created by Gustavo on 07/05/2026.
//

#include "EmailMsg.h"

//inicialização
unsigned int EmailMsg::nextId = 1;

//defeito
EmailMsg::EmailMsg(): id(0), srcAddr(""), dstAddr("") {}

//definido
EmailMsg::EmailMsg(string sa, string da): id(nextId++), srcAddr(sa), dstAddr(da) {}

//getters
unsigned int EmailMsg::getId() const {return id;} 
string EmailMsg::getSrcAddr() const {return srcAddr;}
string EmailMsg::getDstAddr() const {return dstAddr;}

//impressão
virtual void print() const {
   cout << "\n"
        cout << "Id: " << id << "\n";
        cout << "Origem: " << srcAddr << "\n";
        cout << "Destino: " << dstAddr << "\n";
}

#endif //PROJETO_EMAILMSG_H
#include "EmailMsg.h"
