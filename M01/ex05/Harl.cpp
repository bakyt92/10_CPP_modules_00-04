
#include "Harl.hpp"

Harl::Harl()
{
}

void    Harl::debug(void)
{
    std::string str = "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    std::cout << str << std::endl;
}

void    Harl::info(void)
{
    std::string str = "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << str << std::endl;
}

void    Harl::warning(void)
{
    std::string str = "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
    std::cout << str << std::endl;
}

void    Harl::error(void)
{
    std::string str = "ERROR: This is unacceptable! I want to speak to the manager now.";
    std::cout << str << std::endl;
}

void    Harl::complain(std::string level)
{
    void (Harl::*ptr1[]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    const char *cmd[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (cmd[i] == level)
            {
                (this->*ptr1[i])();
                return ;
            }
        i++;
    }
    if (level == "EXIT")
        {
            std::cout << "You've entered EXIT. Good buy." << std::endl;
            return;
        }
    else 
        std::cout << "Wrong command. Enter new command." << std::endl;
    return ;
}

Harl::~Harl()
{
}

