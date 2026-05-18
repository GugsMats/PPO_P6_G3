//
// Created by Gustavo on 07/05/2026.
//

#ifndef PROJETO_MSG_H
#define PROJETO_MSG_H

using namespace std;
#include <string>
#include <iostream>

class Msg {
    protected:
        static unsigned int nextId;
        unsigned int id;
        string info;

    public:
        //defeito
        Msg();

        //definido
        Msg(string i);
         virtual ~Msg(){}

        //getters
        string getInfo() const;
        virtual string getType() const=0; 

        //impressão
    	virtual void print() const = 0;
        virtual void printInf() const = 0;


};


#endif //PROJETO_MSG_H
