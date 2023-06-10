#include<iostream>
using namespace std;

float calculateTotalCost(char roomCategory, int numDays);
void displayTotalCost(float totalCost);

int main() {
	int numDays;
	float totalCost;
	char roomCategory;
	
	cout << "Welcome to the green view hotel" << endl;
	cout << "S - Standard, D - deluxe, T - suit" << endl;
	cout << "Please enter the room category: ";
	cin >> roomCategory;
	cout << "Please enter number day to stay: ";
	cin >> numDays;
	
	totalCost = calculateTotalCost(roomCategory, numDays);
	displayTotalCost(totalCost);
	
	return 0;
}

float calculateTotalCost(char roomCategory, int numDays) {
	float cost;
	int discount;
	
	switch(roomCategory) {
		case 'S':
			cost = numDays * 250 - (numDays * 250 * 0.05);
			discount = 15;
			cout << "\nYour discount is 5%" << endl;
			break;
		case 'D':
			cost = numDays * 350 - (numDays * 350 * 0.1);
			discount = 15;
			cout << "\nYour discount is 10%" << endl;
			break;
		case 'T':
			cost = numDays * 500 - (numDays * 500 * 0.15);
			discount = 15;
			cout << "\nYour discount is 15%" << endl;
			break;
		default:
			cout << "\nInvalid input" << endl;
			break;
	}
	return cost;
}

void displayTotalCost(float totalCost) {
	cout << "You total cost is " << totalCost;
}

