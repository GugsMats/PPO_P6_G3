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
    static unsigned int nextId;
    unsigned int id;
    std::string srcAddr;
    std::string dstAddr;

public:
    //construtor defeito
    EmailMsg();

    //construtor definido
    EmailMsg(std::string sa, std::string da, std::string txt);
        virtual ~EmailMsg() {}


    //getters
    unsigned int getId() const override;
    std::string getSrcAddr() const;
    std::string getDstAddr() const;
    std::string getType() const override;

    //impressão
    void print() const;
       
    };



#endif //PROJETO_EMAILMSG_H
