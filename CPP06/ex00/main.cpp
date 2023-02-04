#include "Type.hpp"

int cont(const char *av)
{   
    int i = 0;
    while (av[i])
    {
        if (!isdigit(av[i]))
        {
            std::cout << "Char : Impossible" << '\n';
            std::cout << "int : Impossible" << '\n';
            std::cout << "Float : Impossible" << '\n';
            std::cout << "Double : Impossible" << '\n';
            return (1);
        }
        i++;
    }
    return (0);
}

int    impossible(const char *av)
{
    std::string str(av);
    if (str == "nan" || str == "nanf")
    {
        std::cout << "Char : Impossible" << '\n';
        std::cout << "int : Impossible" << '\n';
        std::cout << "Float : nanf" << '\n';
        std::cout << "Double : nan" << '\n';
        return (1);
    }
    else if (str == "inf" || str == "inff")
    {
        std::cout << "Char : Impossible" << '\n';
        std::cout << "int : Impossible" << '\n';
        std::cout << "Float : Impossible" << '\n';
        std::cout << "Double : Impossible" << '\n';
        return (1);
    }
    else if ((cont(av)))
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    int i = 0;
    if (impossible(av[1]))
        return (0);
   if (ac != 2 ) {
        std::cerr << "Your input is not correct!!" << std::endl;
        return 1;
    }
    Type c(atof(av[1]));
    std::cout << c;
    return 0;
}