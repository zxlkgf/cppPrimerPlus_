// stock00.cpp -- implementing the Stock class
// version 00
#include <iostream>
#include "stock00.h"

void 
Stock::acquire(const std::string& co, long n, double pr)
{
	this->company = co;
	if (n < 0)
	{
		std::cout << "Number of shares cant't be negative;"
			<< company << "share set to 0" << std::endl;
	}
	else {
		shares = n;
	}
	share_val = pr;
	set_tot();
}

void
Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares puchased can't be negative:"
			<< "Transaction is aborted." << std::endl;
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}

void 
Stock::sell(long num, double price)
{
	using std::cout;
	using std::endl;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative:"
			<< "Transaction is aborted." << endl;
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have!"
			<< "Transaction is aborted." << endl;
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void
Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void
Stock::show()
{
	using std::cout;
	using std::endl;
	// setformat to #.###
	std::ios_base::fmtflags orig =
		cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::streamsize prec = std::cout.precision(3);

	cout << "Company: " << company
		<< ", Shares: " << shares << endl;
	cout << " Share Price: $" << share_val;
	// setformat to #.##
	cout.precision(2);
	cout << " Total Worth: $" << total_val << endl;
	// restore original format
	cout.setf(orig);
	cout.precision(prec);
}
