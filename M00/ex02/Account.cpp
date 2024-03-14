/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:45:34 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/14 18:15:20 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
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
    std::cout << "index:" << _accountIndex << ";";
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
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << ";";
    std::cout << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t result = std::time(0);
    tm *tm_local = localtime(&result);
    std::cout << "[" << tm_local->tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2) << tm_local->tm_mon + 1;
    std::cout << std::setw(2) << tm_local->tm_mday << "_";
    std::cout << std::setw(2) << tm_local->tm_hour; 
    std::cout << std::setw(2) << tm_local->tm_min;
    std::cout << std::setw(2) << tm_local->tm_sec << "] ";
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