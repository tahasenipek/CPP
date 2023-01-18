#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>

class Contacts
{
private:
    std::string name;
    std::string surname;
    std::string nickname;
    std::string number;
    std::string secret;
public:
    Contacts(/* args */);
    ~Contacts();
    void setName(std::string info);
    void setSurname(std::string info);
    void setNickname(std::string info);
    void setNumber(std::string info);
    void setSecret(std::string info);
    std::string    getSecret(void);
    std::string    getName(void);
    std::string    getSurname(void);
    std::string    getNumber(void);
    std::string    getNickname(void);
};

#endif