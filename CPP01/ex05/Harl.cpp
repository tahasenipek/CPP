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
    bool    trigger = false;
    std::string func_names[4] = {"debug", "info" , "warning" , "error"};
    FunctionPtr func[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (func_names[i] == level)
        {
            trigger = true;
            (this->*func[i])();
            break;
        }
    }
    if (!trigger)
        std::cout <<  "No level exists in that name." << std::endl;
}
