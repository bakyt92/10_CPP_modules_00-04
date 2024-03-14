#include <iomanip>
#include <iostream>
#include <ctime>
#include "Account.hpp"

Account::Account(int initial_deposit)
{

}

Account::~Account()
{

}

static int Account::getNbAccounts()
{
    return (_nbAccounts);
}

static int Account::getTotalAmount()
{
    return (_totalAmount);
}

static int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

static int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void Account::_displayTimestamp(void)
{
    std::time_t result = std::time(0);
    std::cout << std::asctime(std::localtime(&result))
              << result << " seconds since the Epoch\n";
    return ;
}

int main (void)
{
    Account A;
    A._displayTimestamp();
    return 0;
}
