//
// Created by Gustavo on 07/05/2026.
//

#ifndef PROJETO_MSG_H
#define PROJETO_MSG_H

using namespace std;
#include <string>


class Msg {
    protected:
        unsigned int id;
        string info;

    public:
        //defeito
        Msg();

        //definido
        Msg(std::string i);
         virtual ~Msg(){}

        //getters
        string getInfo() const;

        //impressão
    	virtual void print() const;


};


#endif //PROJETO_MSG_H
