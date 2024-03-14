#include <iomanip>
#include <iostream>
#include <ctime>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
    _nbAccounts++;
    _displayTimestamp();
    std::cout << "Index:" << _accountIndex << ";";
    _amount = 0;
    _amount += initial_deposit;
    _totalAmount += initial_deposit;
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "created";
    std::cout << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "Index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "closed";
    std::cout << std::endl;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << ";";
    std::cout << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t result = std::time(0);
    std::cout << std::asctime(std::localtime(&result))
              << result << " seconds since the Epoch\n";
    return ;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << checkAmount() << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << "p_amount:" << checkAmount() << ";";
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << "nb_deposits:" << _nbDeposits;
    std::cout << std::endl;
    return ;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << checkAmount() << ";";
    std::cout << "withdrawal:" << withdrawal << ";";
    int x = checkAmount();
    x -= withdrawal;
    if (x <= 0)
        {
            std::cout << "refused" << std::endl;
            return 1;
        }
    else
        {
            _amount = x;
            std::cout << "amount:" << checkAmount() << ";";
            _nbWithdrawals++;
            _totalNbWithdrawals++;
            _totalAmount -= withdrawal;
            std::cout << "nb_withdrawals:" << _nbWithdrawals;
            std::cout << std::endl;
        }
    return 0;
}

int	Account::checkAmount( void ) const
{
    return (this->_amount);
}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;
}