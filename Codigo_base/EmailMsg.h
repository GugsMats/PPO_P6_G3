//
// Created by Gustavo on 07/05/2026.
//

#ifndef PROJETO_EMAILMSG_H
#define PROJETO_EMAILMSG_H

void incrementar (int &x) {
    x++;
}

class EmailMsg {

private:
    unsigned int id = 1;
    string srcAddr;
    string dstAddr;
public:
    //construtor defeito
    EmailMsg(): id(0), srcAddr(""), dstAddr("") {}
    //construtor definido
    EmailMsg(string sa, string da): id(nextId++), srcAddr(sa), dstAddr(da) {}
    //getters
    unsigned int getId() {return id;}
    string getSrcAddr() {return srcAddr;}
    string getDstAddr() {return dstAddr;}
    //impressão
    virtual void print() const {
        cout << "\n"
        cout << "Id: " << id << "\n";
        cout << "Origem: " << srcAddr << "\n";
        cout << "Destino: " << dstAddr << "\n";
    }
unsigned int EmailMsg::nextId = 1;


};



#endif //PROJETO_EMAILMSG_H
