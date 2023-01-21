#include "Harl.hpp"

typedef void	(Harl::*FunctionPtr)();

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void    Harl::dissatisfeid(std::string level)
{
    int c = -1;
    std::string func_names[4] = {"DEBUG", "INFO" , "WARNİNG" , "ERROR"};
    FunctionPtr func[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (func_names[i] == level)
        {
            c = i;
            break;
        }
    }
   switch (c)
   {
    case 0:
        std::cout << "[ DEBUG ]" << std::endl;
        debug();
    case 1:
        std::cout << "[ INFO ]" << std::endl;
        info();
    case 2:
        std::cout << "[ WARNING ]" << std::endl;
        warning();
    case 3:
        std::cout << "[ ERROR ]" << std::endl;
        error();
        break;
   default:
        std::cout << "[ Harl message is not about you!!" << std::endl;
        break;
   }
}
