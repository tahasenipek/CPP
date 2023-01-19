#include <iostream>

int sizecontrol(char c)
{
    if (c <= 122 && c >= 97)
        return (1);
    return (0);
}

void    megaphone(char **s)
{
    int     i = 1;
    int     c = 0;
    char    tmp;
    char    space = ' ';

    while (s[i])
    {
        while (s[i][c])
        {
            if (sizecontrol(s[i][c]))
            {
                tmp = s[i][c] - 32;
                std::cout<< tmp;
            }
            else
                std::cout<< s[i][c];
            c++;
        }
        if (s[i + 1])
            std::cout << space;
        i++;
        c = 0;
    }
    std::cout << std::endl;
}

int main(int av, char **arg)
{
    if (arg[1] && av)
        megaphone(arg);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
}