#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _accountIndex(Account::_nbAccounts), 
	_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)	{
	_nbAccounts++;
	_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" 
		<<_amount << ";created" << std::endl;
}

Account::~Account( void ) {
	static int counter = 7;
	static int all_amm[7];
	
	all_amm[counter] = _amount;
	counter--;
	if (_accountIndex == 0)
		for (int i = 0; i < 8; i++) {
				Account::_displayTimestamp();
				std::cout << "index:" << i << ";amount:" << all_amm[i] 
					<< ";closed" << std::endl;
			}
	_nbAccounts--;
	_totalAmount -= _amount;
}

int	Account::getNbAccounts( void ){
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() 
		<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::cout << "[19920104_091532] ";
}

void	Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	if (deposit < 0)
		std::cout << "deposit:refused" << std::endl;
	else {
		_totalAmount += deposit;
		std::cout << ";p_amount:" << _amount << ";";
		_amount += deposit;
		_nbDeposits++;
		std::cout << "deposit:" << deposit << ";amount:" << _amount 
			<< ";nb_deposits:" << _nbDeposits << std::endl;
		_totalNbDeposits++;
	}
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";";
	if (withdrawal < 0 || _amount - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";amount:" << _amount << ";";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}

int		Account::checkAmount( void ) const {
	return _amount;
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" 
		<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

