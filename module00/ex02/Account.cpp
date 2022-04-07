/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 00:00:55 by thhusser          #+#    #+#             */
/*   Updated: 2022/04/07 16:16:05 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	this->_accountIndex = Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account() {
    Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::getNbAccounts() {
	return (Account::_nbAccounts);
}

int Account::getTotalAmount() {
	return (Account::_totalAmount);
}

int Account::getNbDeposits() {
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals() {
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos() {
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	char    buffer[18];
	time_t rawtime;
	struct tm * ptm;

	time (&rawtime);
	ptm = localtime (&rawtime);
	strftime (buffer,18,"[%Y%m%d_%H%M%S]",ptm);
	std::cout << buffer;
}

void	Account::makeDeposit( int deposit ){
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if (this->_amount >= withdrawal)
	{
		Account::_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		this->_amount -= withdrawal;
		std::cout << withdrawal;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);

}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}
