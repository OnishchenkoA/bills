
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

void inc_balance(accounts &bal, double bal1)
{
	accounts acc;
	std::cout << "������� ����� ������:  ";
	std::cin >> bal.balance;
	acc.balance = bal.balance;
	std::cout << std::endl;
}

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "russian");
	accounts acc;
	std::cout << "������� ����� �����:  ";
	std::cin >> acc.number;
	std::cout << std::endl;
	std::cout << "������� ��� ���������:  ";
	std::cin >> acc.name;
	std::cout << std::endl;
	std::cout << "������� ������:  ";
	std::cin >> acc.balance;
	std::cout << std::endl;
	inc_balance(acc, acc.balance);
	std::cout << "��� ����:  " << acc.number << " " << acc.name << " " << acc.balance << std::endl;
	return 0;
}

