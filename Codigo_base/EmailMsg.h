//
// Created by Gustavo on 07/05/2026.
//

#ifndef PROJETO_EMAILMSG_H
#define PROJETO_EMAILMSG_H



class EmailMsg {

private:
    unsigned int id;
    string srcAddr;
    string dstAddr;
public:
    //construtor defeito
    EmailMsg(): id(0), srcAddr(""), dstAddr("") {}
    //construtor definido
    EmailMsg(unsigned int iden, string sa, string da): id(iden), srcAddr(sa), dstAddr(da) {}
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



};



#endif //PROJETO_EMAILMSG_H
