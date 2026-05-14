//
// Created by Gustavo on 07/05/2026.
//

#include <iostream>
#include <string>
#include <iomanip>

#ifndef PROJETO_EMAILMSG_H
#define PROJETO_EMAILMSG_H

void incrementar (int &x) {
    x++;
}

class EmailMsg: public Msg {

private:
    unsigned int id = 1;
    string srcAddr;
    string dstAddr;

public:
    //construtor defeito
    EmailMsg();

    //construtor definido
    EmailMsg(string sa, string da);

    //getters
    unsigned int getId() const;
    string getSrcAddr() const;
    string getDstAddr() const;

    //impressão
    virtual void print() const;
       
    }
};



#endif //PROJETO_EMAILMSG_H
