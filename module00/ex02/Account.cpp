/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhusser <thhusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 00:00:55 by thhusser          #+#    #+#             */
/*   Updated: 2022/01/02 00:15:25 by thhusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit) : _amount(initial_deposit) {
    //...
}

static int Account::getNbAccounts() {
    return (this->_nbAccounts);
}

static int Account::getTotalAmount() {
    return (this->_totalAmount);
}

static int Account::getNbDeposits() {
    return (this->_totalNbDeposits);
}

static int Account::getNbWithdrawals() {
    return (this->_totalNbWithdrawals);
}

static void Account::displayAccountsInfos() {
    std::cout << "Number of accounts       : " << this->_nbAccounts << std::endl;
    std::cout << "Total Amount             : " << this->_totalAmount << std::endl;
    std::cout << "Total number deposit     : " << this->_totalNbDeposits << std::endl;
    std::cout << "Total number withdrawals : " << this->_totalNbWithdrawals << std::endl;
}
