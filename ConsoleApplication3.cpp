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

void inc_balance(accounts& bal2)
{
	accounts acc;
	std::cout << "������� ����� ������:  ";
	std::cin >> bal2.balance;
	acc.balance = bal2.balance;
	std::cout << std::endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "russian");
	int num;
	std::string n;
	double bal;
	accounts acc1;
	std::cout << "������� ����� �����:  ";
	std::cin >> num;
	std::cout << std::endl;
	acc1.number = num;
	std::cout << "������� ��� ���������:  ";
	std::cin >> n;
	std::cout << std::endl;
	acc1.name = n;
	std::cout << "������� ������:  ";
	std::cin >> bal;
	std::cout << std::endl;
	acc1.balance = bal;
	inc_balance(acc1);
	std::cout << "��� ����:  " << acc1.number << " " << acc1.name << " " << acc1.balance << std::endl;
	return 0;
}

