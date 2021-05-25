/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:41:00 by eliott            #+#    #+#             */
/*   Updated: 2020/07/22 18:13:30 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

Account::Account(int initial_deposit): _amount(initial_deposit)
{
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created";
	this->_nbAccounts++;
}

Account::~Account( void )
{
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed"
	this->_nbAccounts--;
}

static int	Account::getNbAccounts( void )
{
	return _totalNbAccounts;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed"
}

static int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

static int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

static void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:"<<_nbAccounts<<";total:"<< _totalAmount <<";deposits:"<< _totalNbDeposits << ";withdrawals:"<< _totalNbWithdrawals << std::endl
}

static void	_displayTimestamp( void )
{

}

void	Account::makeDeposit( int deposit )
{
	if (deposit >= 0)
	{
		this->_nbDeposits++;
		_totalNbDeposits++;
		_totalAmount += deposit;
		this->_amount += deposit;
	}
	else
		std::cout << "error : negative number" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if(withdrawal >= 0 && withdrawal <= this->_amount)
	{
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		this->amount -= withdrawal;
		return true;
	}
	std::cout << "You are poor!" << std::endl;
	return false;
}

int		checkAmount( void ) const
{
	return this->_amount;
}

void	displayStatus( void ) const
{
	std::cout << "index: " << this->_accountIndex << ";amount: " <<this->_amount << ";deposits: " << this->_nbDeposits << ";withdrawals: " << this->_nbWithdrawals << std::endl;
}
