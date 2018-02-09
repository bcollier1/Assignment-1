// Assignment 1.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	int month;
	int day;
	int year;

	cout << "Enter birth month: ";
	cin >> month;
	cout << "\n" << "Month entered: " << month << "\n\n";
	cin.get();
	cout << "Enter birth date: ";
	cin >> day;
	cout << "\n" << "You entered: " << day << "\n\n";
	cin.get();
	cout << "Enter birth year: ";
	cin >> year;
	cout << "\n" << "Year entered: " << year << "\n\n";
	cin.get();
	cout << "Your date of birth is " << month << "/" << day << "/" << year << ".";
	cin.get();
	cout << flush;
	system("CLS");
	cout << "Enter current month: ";
	cin >> month;
	cout << "\n" << "Month entered: " << month << "\n\n";
	cin.get();
}