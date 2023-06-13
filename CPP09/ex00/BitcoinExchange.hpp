#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <vector>
#include <cctype>


class BitcoinExchange {
private:
    std::map<std::string, float> inputdata;

public:
    BitcoinExchange();
    BitcoinExchange(const char* filename);
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);
    std::vector<std::string> splitString(const std::string& str, char delimiter);
    void processData(const char *filename);
    int datecontrol(std::string date);
    bool addcontrol(std::string date);
    int  stringcontrol(std::string year, std::string month, std::string day);
    void setData(std::string date, double value);
    int openAndReadFile(const char* filename);
    ~BitcoinExchange();
};



#endif 
