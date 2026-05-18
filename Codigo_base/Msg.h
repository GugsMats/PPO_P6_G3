//
// Created by Gustavo on 07/05/2026.
//

#ifndef PROJETO_MSG_H
#define PROJETO_MSG_H

#include <string>
#include <iostream>

class Msg {
    protected:
        std::string info;

    public:
        //defeito
        Msg();

        //definido
        Msg(std::string i);
         virtual ~Msg() {}

        //getters
        std::string getInfo() const;
        virtual std::string getType() const=0;
        virtual unsigned int getId() const = 0;

        //impressão
    	virtual void print(std::ostream& os) const = 0;


};


#endif //PROJETO_MSG_H
