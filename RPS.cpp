#include <iostream>
#include <time.h>
using namespace std;



int computer_point = 0;
int player_point = 0;
string player_choice;
string computer_choice;
string choices[3] = { "rock", "paper", "scissor" };
string lost = "You Lost\n";
string win = "You Win\n";

int main() {
	srand(time(NULL));

	int i = 0;
	while (i == 0) {
		int rand_num = rand() % 3;
		computer_choice = choices[rand_num];
		//cout << endl << computer_choice << endl;
		cout << "\nchoice rock paper scissor :- ";
		cin >> player_choice;

		if (player_choice == "paper") {
			if (computer_choice == "rock") {
				cout << win;
				cout << "computer choiced " << computer_choice;
				player_point = player_point + 1;
			}
			else if (computer_choice == "scissor") {
				cout << lost;
				cout << "computer choiced " << computer_choice;
				computer_point = computer_point + 1;
			}
			else {
				cout << "Tie\n";
				cout << "computer choiced " << computer_choice;
			}
		}
		else if (player_choice == "rock") {
			if (computer_choice == "scissor") {
				cout << win;
				cout << "computer choiced " << computer_choice;
				player_point = player_point + 1;
			}
			else if (computer_choice == "paper") {
				cout << lost;
				cout << "computer choiced " << computer_choice;
				computer_point = computer_point + 1;
			}
			else {
				cout << "Tie\n";
				cout << "computer choiced " << computer_choice;
			}
		}
		else if (player_choice == "scissor") {
			if (computer_choice == "paper") {
				cout << win;
				cout << "computer choiced " << computer_choice;
				player_point = player_point + 1;
			}
			else if (computer_choice == "rock") {
				cout << lost;
				cout << "computer choiced " << computer_choice;
				computer_point = computer_point + 1;
			}
			else {
				cout << "Tie\n";
				cout << "computer choiced " << computer_choice;
			}
		}
		else if (player_choice == "end") {
			++i;
		}

		else {
			cout << "please Write rock , paper or scissor";
		}
	}
	cout << "\nYour Point:- " << player_point << endl;
	cout << "\nComputer Point:- " << computer_point << endl;
	if (computer_point > player_point) {
		cout << "\nYou Lost";
	}
	else if (computer_point < player_point) {
		cout << "\nYou win";
	}
	else {
		cout << "Tie";
	}
}
