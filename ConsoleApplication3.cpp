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
	std::cout << "������� ����� �����:  ";
	std::cin >> acc.number;
	std::cout << std::endl;
	std::cout << "������� ��� ���������:  ";
	std::cin >> acc.name;
	std::cout << std::endl;
	std::cout << "������� ������:  ";
	std::cin >> acc.balance;
	std::cout << std::endl;
	std::cout << "������� ����� ������:  ";
	std::cin >> bal2;
	acc.balance = bal2;
	std::cout << std::endl;
	std::cout << "��� ����:  " << acc.number << " " << acc.name << " " << acc.balance <<std::endl;

}

