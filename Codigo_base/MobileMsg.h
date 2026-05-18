#include <iostream>
#include <string>
#include <iomanip>
#include "Msg.h"

#ifndef PPO_P6_G3_MOBILEMSG_H
#define PPO_P6_G3_MOBILEMSG_H

class MobileMsg: public Msg {

    private:
        static unsigned int nextId;
        unsigned int id;
        std::string srcPhoneNo;
        std::string dstPhoneNo;

    public:
        //defeito
        MobileMsg();

        //definido
        MobileMsg(std::string spn, std::string dpn, std::string txt);
            virtual ~MobileMsg() {}

        //getters
        unsigned int getId() const override;
        std::string getSrcPhoneNo() const;
        std::string getDstPhoneNo() const;
        std::string getType() const override;

        //impressão
        void print() const;

    //teste porra

};

#endif //PPO_P6_G3_MOBILEMSG_H
