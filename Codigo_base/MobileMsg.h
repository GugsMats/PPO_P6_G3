#include <iostream>
#include <string>
#include <iomanip>

#ifndef PPO_P6_G3_MOBILEMSG_H
#define PPO_P6_G3_MOBILEMSG_H

#ifndef PROJETO_EMAILMSG_H
#define PROJETO_EMAILMSG_H

using namespace std;

class MobileMsg: public Msg {

    private:
        string srcPhoneNo;
        string dstPhoneNo;

    public:
        //defeito
        MobileMsg();

        //definido
        MobileMsg(string spn, string dpn);
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
