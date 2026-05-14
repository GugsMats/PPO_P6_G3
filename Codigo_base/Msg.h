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
        std::string info;

    public:
        Msg(std::string i);
         virtual ~Msg(){}
        
    	virtual std::string Getype() const=0 ;


};


#endif //PROJETO_MSG_H
