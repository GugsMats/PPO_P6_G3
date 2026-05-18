#include <iostream>
#include <string>
#include <iomanip>
#include "Msg.h"

#ifndef PPO_P6_G3_MOBILEMSG_H
#define PPO_P6_G3_MOBILEMSG_H

using namespace std;

class MobileMsg: public Msg {

    private:
        static unsigned int nextId;
        string srcPhoneNo;
        string dstPhoneNo;

    public:
        //defeito
        MobileMsg();

        //definido
        MobileMsg(string spn, string dpn, string i);
            virtual ~MobileMsg() {}

        //getters
        unsigned int getId() const;
        string getSrcPhoneNo() const;
        string getDstPhoneNo() const;
        string getType() const;

        //impressão
        void print() const;

    //teste porra

};

#endif //PPO_P6_G3_MOBILEMSG_H
