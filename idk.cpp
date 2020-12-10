// Author:	Axel Haas
// Date:	10.12.2020
// Place:	achermann ict-services
// Name:	Hotelsystem

#include <iostream>
using namespace std;
int main()
{

	//define variables
	int room_available;
	int room_price_night = 90;
	int room_durationstay;
	int room_person;
	int breakfast_cost = 20;
	bool breakfast_true;
	string breakfast_yesno;
	int cost;


    // Admin things, basic pricing and stuff
	cout << "#############ADMIN########### \n";
	cout << "how many rooms are available? \n";
	cin >> room_available;
	cout << "Price for 1 Night? \n";
	cin >> room_price_night;
	cout << "#############ADMIN########### \n";
	cout << " \n \n \n";
	system("cls");


	// Check if room available
	if (room_available > 1) {
		cout << "The price pro Person for the night is: " << room_price_night << "\n \n"; //variables for math
		cout << "How many people are sleeping in 1 Room? \n";
		cin >> room_person;
		cout << "For how long? \n";
		cin >> room_durationstay;
		cout << "Breakfast included? yes or no \n";
		cin >> breakfast_yesno;
		if (breakfast_yesno == "yes") {	//check if breakfast included
			breakfast_true = true;
		}
		else { breakfast_true = false; 
		}

		cost = room_price_night * room_person; //math stuff

		if (breakfast_true == true) {
			cost = cost + (20 * room_person);
		}
		cout << "Your total cost will be:" << cost << "\n"; //Total cost from math
	}
	else { //if no room available
		cout << "No rooms available, sorry! \n";
	}
}

