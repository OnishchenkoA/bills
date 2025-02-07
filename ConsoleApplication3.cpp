#include <Windows.h>
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct accounts 
{
	int number;
	std::string name;
	double balance;
};

void increment_balance(accounts& bal)
{
	bal.balance++;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "russian");
	double bal2;
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
	std::cin >> bal2;
	acc.balance = bal2;
	std::cout << std::endl;
	std::cout << "¬аш счет:  " << acc.number << " " << acc.name << " " << acc.balance <<std::endl;

}

