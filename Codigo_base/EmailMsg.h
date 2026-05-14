//
// Created by Gustavo on 07/05/2026.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "Msg.h"

#ifndef PROJETO_EMAILMSG_H
#define PROJETO_EMAILMSG_H

class EmailMsg: public Msg {

private:
    string srcAddr;
    string dstAddr;

public:
    //construtor defeito
    EmailMsg();

    //construtor definido
    EmailMsg(string sa, string da);
        virtual ~EmailMsg() {}


    //getters
    unsigned int getId() const;
    string getSrcAddr() const;
    string getDstAddr() const;
    string getType() const ;

    //impressão
    void print() const;
       
    };



#endif //PROJETO_EMAILMSG_H
