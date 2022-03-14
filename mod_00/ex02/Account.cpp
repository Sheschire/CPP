/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemesle <tlemesle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:06:52 by tlemesle          #+#    #+#             */
/*   Updated: 2022/03/14 15:15:20 by tlemesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

static int	_nbAccounts = 0;
static int	_totalAmount = 0;
static int	_totalNbDeposits = 0;
static int	_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {}

Account::~Account(void) {}

static int	getNbAccounts(void)
{
	return (_nbAccounts);
}

static int	getTotalAmount(void)
{
	return (_totalAmount);
}

static int	getNbDeposits(void)
{
	return (_totalNbDeposits);
}

static int	getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

static void	displayAccountsInfos(void)
{
	
}