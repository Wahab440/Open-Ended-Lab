#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	
	char choice ;
	int number,f=0,i ;
	long int start_point, end_point;
	cout << "Find prime number(P) or check the specific number(N)?";
	cin >> choice ;
	if (choice == 'P' || choice == 'p')
	{
		cout << "\nInput the range of Prime numbers:";
		cout << "\nenter your start_range:";
		cin >> start_point;
		cout << "\nEnter your end_range:";
		cin >> end_point;
		cout << "\nPrime number from" << start_point << "to" << end_point;

		while (start_point <= end_point)
		{
			f = 0;
			for (i = 2; i <= start_point / 2; i++)
			{
				if (start_point % i == 0)
				{
					f = 1;
					break;
				}
			}
			if (f == 0)
				cout << "\t" << start_point;
			start_point += 1;
		}
	}
	else if (choice== 'N' || choice  == 'n')
	{
		cout << "\nEnter the number : ";
		cin >>  number;
		for (int n = 1; n <=  number; n++)
		{
			if (number % n != 0)
			{
				cout << "prime number\n";
			}
			else
			{
				cout << "Not a prime number\n";
			}
		}
	
	}
	else
	{
		cout << "\nInvalid Option";	
	}
	system ("pause");
	return 0;
}

