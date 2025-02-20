
#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

struct accounts 
{
	int number;
	std::string name;
	double balance;
};

void inc_balance(accounts *acc, double bal1)
{
	acc -> balance = bal1;
}

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "russian");
	double new_bal;
	accounts acc;
	std::cout << "¬ведите номер счета:  ";
	std::cin >> acc.number;
	std::cout << std::endl;
	std::cout << "¬ведите им€ владельца:  ";
	std::cin >> acc.name;
	std::cout << std::endl;
	std::cout << "¬ведите баланс:  ";
	std::cin >> acc.balance;
	std::cout << std::endl;
	std::cout << "¬ведите новый баланс:  ";
	std::cin >> new_bal;
	std::cout << std::endl;
	inc_balance(&acc, new_bal);
	std::cout << "¬аш счет:  " << acc.number << " " << acc.name << " " << acc.balance << std::endl;
	return 0;
}

