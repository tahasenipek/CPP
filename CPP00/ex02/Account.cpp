#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << "[" << time(NULL) << "]" << " index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "created" << std::endl;
}

void Account::displayAccountsInfos(void)
{
	std::cout << "[" << time(NULL) << "]" << " accounts:" << ";" << "8;" << "total:" << _totalAmount << ";" << "deposits:" << _totalNbDeposits << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	std::cout << "[" << time(NULL) << "]" << " index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposit:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "[" << time(NULL) << "]" << " index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "deposit:" << _nbDeposits << ";" << "amount:" << _amount << ";" << "nb_deposit:" <<  getNbDeposits() << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "[" << time(NULL) << "]" << " index:" << _accountIndex << ";" << "p_amount:" << _amount << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

Account::~Account(void)
{
	std::cout << "[" << time(NULL) << "]" << " index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getNbDeposits(void)
{

	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;