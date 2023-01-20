#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "created" << std::endl;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << "8" << ";" << "total:" << _totalAmount << ";" << "deposits:" << _totalNbDeposits << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposit:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int current_amount;

	current_amount = _amount + deposit;
	_totalAmount -= _amount;
	_totalAmount += current_amount;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "deposit:" << deposit << ";" << "amount:" << current_amount << ";" << "nb_deposit:" <<  _nbDeposits << std::endl;
	_amount = current_amount;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int current_amount;
	if (_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "withdrawals:" << "refused" << std::endl;
		checkAmount();
		return (false);
	}
	else
	{
		current_amount = _amount - withdrawal;
		_nbWithdrawals++;
		_totalAmount -= _amount;
		_totalAmount += current_amount;
		_totalNbWithdrawals++;
		_displayTimestamp();
		std::cout <<  " index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "withdrawals:" << withdrawal << ";" << "amount:" << current_amount << ";" << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		_amount = current_amount;
		return (true);
	}
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	current_time;

	current_time = time(NULL);

	tm *tm_local = localtime(&current_time);
	std::cout << "[" << tm_local->tm_year + 1900 << tm_local->tm_mon + 0 << tm_local->tm_mday << "_" << tm_local->tm_hour << tm_local->tm_min << tm_local->tm_sec << "]";
}

int	Account::getNbAccounts(void)
{
	return (121);
}

int	Account::getNbDeposits(void)
{
	return (122);
}

int	Account::getNbWithdrawals(void)
{
	return (123);
}

int		Account::checkAmount( void )const
{
	return(0);
}

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;