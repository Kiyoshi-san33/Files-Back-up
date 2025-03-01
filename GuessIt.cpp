#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

//User Guessing
void userGuess() { 
	int number = rand() % 100 + 1;
	int guess, attempts = 0;

	do {
		cout << "Guess the number (1 to 100): ";
		cin >> guess;
		attempts++;

		if (guess < number) 
			cout << "The secret number is higher" << endl;
		else if (guess > number) 
			cout << "The secret number is lower" << endl;
		else 
			cout << "Congratulations!" << endl;
	} while (guess != number);

}

//Bot Guessing
void botGuess() {
	int low = 1, high = 100, guess, feedback, your_number;

	cout << "Think of a number between 1 and 100: ";
	cin >> your_number;
	do {
		guess = (low + high) / 2;
		cout << "Is the number " << guess << "?" << endl;
		cout << "1. Lower" << endl;
		cout << "2. Higher" << endl;
		cout << "3. Correct" << endl;
		cout << "Enter your feedback: ";
		cin >> feedback;

		if (feedback == 1) 
			high = guess - 1;
		else if (feedback == 2) 
			low = guess + 1;
	} while (feedback != 3);

	if(guess == your_number)
		cout << "Congratulations!! " << endl;
		else 
		cout << "Invalid feedback" << endl;
}

//Main function
int main(){
	srand(time(0));
	int choice;
	cout << "1. User Guessing" << endl;
	cout << "2. Bot Guessing" << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice) {
		case 1:
			userGuess();
			break;
		case 2:
			botGuess();
			break;
		default:
			cout << "Invalid choice" << endl << endl;
	}
	return 0;
}

