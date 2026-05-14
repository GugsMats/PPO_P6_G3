//
// Created by jpats on 13/05/2026.
//

#include "MobileMsg.h"

//inicialização
unsigned int MobileMsg::nextId = 1000;

//defeito
MobileMsg:: MobileMsg(): id(0), srcPhoneNo(""), dstPhoneNo("") {}

//definido
MobileMsg:: MobileMsg(string spn, string dpn): id(nextId++), srcPhoneNo(spn), dstPhoneNo(dpn) {}

//getters
unsigned int MobileMsg:: getId() const {return id;}
string MobileMsg:: getSrcPhoneNo() const {return srcPhoneNo;}
string MobileMsg:: getDstPhoneNo() const {return dstPhoneNo;}

//impressão
virtual void print() const {
    cout << "\n";
        cout << "Id: " << id << "\n";
        cout << "Origem: " << srcPhoneNo << "\n";
        cout << "Destino: " << dstPhoneNo << "\n";
    cout << Msg.print();
}
