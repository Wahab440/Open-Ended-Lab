#include<iostream>
#include<string>
using namespace std;
int main()
{
	string book_name, borrow;
	int borrow_date, return_date;
	int total_days = 0;
	int fine = 0;
	cout << "Enter the name of desire book you want:";
	getline(cin,book_name);
	cout << book_name<<""<< "Is available" << endl;
	cout << "Do you want to borrow:"<<endl;
	cin >> borrow;

	if (borrow == "y" || borrow == "Y")
	{
		cout << "\nYou must return the book within 5 days, either you will be pay fine 1$ per day";
		cout << "\nEnter your borrow date=";
		cin >> borrow_date;
		cout << "\nEnter your return date=";
		cin >> return_date;
		total_days = return_date - borrow_date;
		if (total_days >10)
			fine = total_days * 1;
		cout << "\nYou should pay fine:"<<fine;
	}
	else if (total_days < 8)
	{
		cout << "NO fine.That's All!!" << endl;
	}
	else if (borrow == "n" || borrow == "N")
	{
		cout << "Thanks" << endl;
	}
	system("pause");
	return 0;

}
