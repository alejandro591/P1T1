#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int NumSecret = rand() % 10 ;
	int userchoice;
	cout << "Random generator, chose a number to 1 to 10 \n";
	cin >> userchoice;
	
	if (userchoice == NumSecret)
	{
		cout << "The secret number is the same bye";
	}
	else if (userchoice < NumSecret)
	{
		cout << "The secret number is bigger";
	}
	else if (userchoice > NumSecret)
	{
		cout << "The secret number is lower";
	}

}