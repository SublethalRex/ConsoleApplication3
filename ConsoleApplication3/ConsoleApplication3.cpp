// ConsoleApplication3.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int secretNumber = rand() % 64 + 1;
	int tries = 0;
	int guess;
	int end;


	cout << "\tWelcome to guess my number\n\n";

	do
	{
		cout << "|1|2|3|4|5|6|7|8|\n|9|10|11|12|13|14|15|16|\n|17|18|19|20|21|22|23|24|\n|25|26|27|28|29|30|31|32|\n|33|34|35|36|37|38|39|40|\n";
		cout << "|41|42|43|44|45|46|47|48|\n|49|50|51|52|53|54|55|56|\n|57|58|59|60|61|62|63|64|\n";
		
		guess = rand() % 64 + 1;
		cout << "We'll find them captain!\n";
		++tries;
		cout << "We fired at space " << guess << "\n";
		if (guess > secretNumber)
		{
			cout << "We missed! We aimed too high\n\n";
			
		}

		else if (guess < secretNumber)
		{
			cout << "We missed! we aimed too low\n\n";
			
		}
		else
		{
			cout << "\n\n\nWe got them sir, it only took " << tries << " tries!\n They were hiding on grid square " << secretNumber<< "!\n";
			
		}

		if (tries > secretNumber)
		{
			cout << "Sir it may of been faster to go from line to line\n";
		}
	} while (guess != secretNumber);


	
	
	cin >> end;

	return 0;
}

