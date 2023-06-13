#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {

}

BitcoinExchange::~BitcoinExchange() {
    
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
    *this = other;
}

BitcoinExchange::BitcoinExchange(const char* filename) {
    if (openAndReadFile(filename) == 0)
    {
        processData(filename);
    }
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this == &other) {
        return *this;
    }
    return *this;
}

const char* WHITESPACE = " \t\n\r";

std::string& ltrim(std::string& s) {
    size_t start = s.find_first_not_of(WHITESPACE);
    if (start != std::string::npos) {
        s.erase(0, start);
    }
    return s;
}

std::string& rtrim(std::string& s) {
    size_t end = s.find_last_not_of(WHITESPACE);
    if (end != std::string::npos) {
        s.erase(end + 1);
    }
    return s;
}

std::string& trim(std::string& s) {
    return ltrim(rtrim(s));
}

void BitcoinExchange::setData(std::string date, double value) {
    this->inputdata.insert(std::make_pair(date, value));
}

int BitcoinExchange::openAndReadFile(const char* filename) {
    const std::string csvFile = "data.csv";

    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error: Failed to open " << filename << std::endl;
        return 1;
    }
    std::ifstream csv(csvFile);
    if (!csv) {
        std::cerr << "Error: Failed to open " << csvFile << std::endl;
        return 1;
    }
    std::string csvline;
    std::getline(csv, csvline);
    while (std::getline(csv, csvline)) {
        if (csvline.find(',') == std::string::npos) {
            std::cerr << "Error : Invalid Parameter" << std::endl;
            continue;
        }
        std::string date = csvline.substr(0, csvline.find(','));
        double value;
        try {
            value = std::stod(csvline.substr(csvline.find(',') + 1));
        } catch(const std::exception& e) {
            (void)e;
            std::cerr << "Error: could not parse value" << std::endl;
            continue;
        }
        this->setData(date, value);
    }
    csv.close();
    return 0;
}

std::vector<std::string> BitcoinExchange::splitString(const std::string& str, char delimiter) {
    std::vector<std::string> substrings;
    std::istringstream iss(str);
    std::string token;
    while (std::getline(iss, token, delimiter)) {
        substrings.push_back(token);
    }
    return substrings;
}

int BitcoinExchange::datecontrol(std::string date) {
    
    std::vector<std::string> dateParts = splitString(date, '-');

    if (dateParts.size() != 3) {
        std::cout << "Error: Invalid date format. Format should be Year-Month-Day." << std::endl;
        return 0;
    }
    else
    {
        std::string year = date.substr(0, date.find('-'));
        std::string month = date.substr(5, 2);
        std::string day = date.substr(8, 2);
        int yearValue, monthValue, dayValue;
        yearValue = std::stoi(year);
        monthValue = std::stoi(month);
        dayValue = std::stoi(day);
            
        if (year.size() != 4 || month.size() != 2 || day.size() != 2)
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return 0;
        }
        else if (monthValue > 12 || monthValue < 1)
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return 0;
        }
        else if (dayValue > 31 || dayValue < 1) 
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return 0;
        }
        else
            return 1;
    }
}

bool BitcoinExchange::addcontrol(std::string date)
{
    std::string year = date.substr(0, date.find('-'));
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);
    int yearValue, monthValue, dayValue;
    yearValue = std::stoi(year);
    monthValue = std::stoi(month);
    dayValue = std::stoi(day);
    
    if (year.size() != 4 || month.size() != 2 || day.size() != 2) {
        return true;
    }
    else if (monthValue > 12 || monthValue < 1) {
        return true;
    }
    else if (dayValue > 31 || dayValue < 1) {
        return true;
    }
    else 
        return false;
}

void BitcoinExchange::processData(const char *filename) {
    std::ifstream inputfile(filename);
    std::string inputLine;

    std::vector<std::string> inputvalue;
    std::getline(inputfile, inputLine);
    while (std::getline(inputfile, inputLine)){
        if (inputLine.empty())
            continue;
        std::vector<std::string> tokens = splitString(inputLine, '|');
        if (datecontrol(tokens[0]) == 1)
        {
            if (tokens.size() < 2) {
                if (addcontrol(tokens[0]))
                    continue;
                else
                {
                    std::cout << "Error: bad input => " << tokens[0] << std::endl;
                }
            }
            std::map<std::string, float>::iterator it = this->inputdata.upper_bound(trim(tokens[0]));
            if (it != this->inputdata.end()) {
                std::pair<std::string, float> p = *(--it);
                try {
                    double inputValue = std::stod(tokens[1]);
                    if (inputValue > 1000) {
                        std::cout << "Error: too large a number." << std::endl;
                    } else if (inputValue < 0) {
                        std::cout << "Error: not a positive number." << std::endl;
                    } else {
                        std::cout << tokens[0] << " => " << tokens[1] << " = " << inputValue * p.second << std::endl;
                    }
                } catch (const std::exception &e) {
                    (void)e;
                    std::cout << "Error: Input Not A Number" << std::endl;
                    continue;
                }
            }
        }
    }
}
