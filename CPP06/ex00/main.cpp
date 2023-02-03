#include "Type.hpp"

void    impossible()
{
    std::cout << "Char : Impossible" << '\n';
    std::cout << "int : Impossible" << '\n';
    std::cout << "Float : Impossible" << '\n';
    std::cout << "Double : Impossible" << '\n';
}

int main(int ac, char **av)
{
    int i = 0;
   if (ac != 2) {
        std::cerr << "Your input is not correct!!" << std::endl;
        return 1;
    }
    else if (av[1])
    {
        while (av[1][i])
        {
            if (!isdigit(av[1][i]))
            {
                impossible();
                return (0);
            }
            i++;
        }
    }
    Type c(atof(av[1]));
    std::cout << c;
    return 0;
}