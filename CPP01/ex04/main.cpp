#include <string>
#include <fstream>
#include <iostream>

using std::string;
using std::ofstream;
using std::ifstream;

void    replacer(string name, string str1, string str2)
{
    ifstream    infile;
    ofstream    outfile;
    string      line;
    size_t      found;
    bool        start = false;

    infile.open(name, std::ios::in);
    if (!infile)
    {
        std::cout << "No file exists in that name." << std::endl;
		return;
    }
    outfile.open(name.append(".replace"), std::ios::out);
    while (std::getline(infile, line))
    {
        if (start)
            outfile << std::endl;
        start = true;
        found = line.find(str1);
        while (found != std::string::npos)
        {
            line.erase(found, str1.length());
            line.insert(found, str2);
            found = line.find(str1);
        }
        outfile << line;
    }
    infile.close();
    outfile.close();
    std::cout << "Done√√√";
}


int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Your argument count is not true!! Try again." << std::endl;
        return (0);
    }
    replacer(std::string(av[1]), std::string(av[2]), std::string(av[3]));
}