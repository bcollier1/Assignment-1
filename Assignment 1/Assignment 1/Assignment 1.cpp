// Assignment 1.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	// Variables for month, day, year, day amount, hour
	int month, month1;
	int day, day1;
	int year, year1;
	int x = 30;
	int y = 24;
	char ans = 'Y';

	// Getting Main loop
	while (ans == 'Y' || ans == 'y') {
		// Getting users date of birth
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
		system("CLS");

		// Getting user to imput todays date
		cout << "Enter current month: ";
		cin >> month1;
		cout << "\n" << "Month entered: " << month1 << "\n\n";
		cin.get();
		cout << "Enter current date: ";
		cin >> day1;
		cout << "\n" << "You entered: " << day1 << "\n\n";
		cin.get();
		cout << "Enter current year: ";
		cin >> year1;
		cout << "\n" << "Year entered: " << year1 << "\n\n";
		cin.get();
		cout << "Todays date is " << month1 << "/" << day1 << "/" << year1 << ".";
		cin.get();
		system("CLS");
		cout << "You have lived for " << (((year1 - year) * 365) + ((month1 - month) * x) + (day1 - day)) << " days." << "\n";
		cin.get();
		cout << "You have slept for " << ((((year1 - year) * 365) + ((month1 - month) * x) + (day1 - day)) * 8) << " hours." << "\n";
		cin.get();
		// Asking user if they would want to redue the program
		cout << "Would you like to do this program over again? (Y/N)" << "\n\n";
		cin >> ans;
		if (ans == 'Y' || ans == 'y') 
			system("CLS");
	}
	cout << "\nThank you for using this program.\n";

	return 0;
}