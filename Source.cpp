#include <iostream>
using namespace std;

int main()
{
	int userchoice = 0;
	while (userchoice <= 5000)
	{
		if (userchoice > 5000)
		{
			cout << "number bigger than 5000, try again \n";
		}

		else
		{
			cout << "insert a number fromm 1 to 5000 \n";
			cin >> userchoice;
			cout << "Their dividers are";
			for (int i = userchoice; i > 0; i--)
			{
				if (userchoice % i == 0)
				{
					cout << i << "\n";
				}
			}
		}    
	}
	return 0;
}