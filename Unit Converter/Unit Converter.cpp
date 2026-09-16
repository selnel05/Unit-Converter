#include <iostream>
using namespace std;

void cmToInches(double cm) //void functions to calculate each conversion
{
	cout << "Answer: " << cm / 2.54 << " inches" << endl;
}

void inchesToCm(double inches)
{
	cout << "Answer: " << inches * 2.54 << " cm" << endl;
}

void kgToLbs(double kg)
{
	cout << "Answer: " << kg * 2.205 << " lbs" << endl;
}

void lbsToKg(double lbs)
{
	cout << "Answer: " << lbs / 2.205 << " kg" << endl;
}

void celToFah(double c)
{
	cout << "Answer: " << (c * 9 / 5) + 32 << " Fahrenheit" << endl;
}

void fahToCel(double f)
{
	cout << "Answer: " << (f - 32) * 5 / 9 << " Celsius" << endl;
}

int main()
{
	int choice; //letting user choose what to convert
	double number;
	char again = 'y'; //allows program to continue running according to user choice

	while (again == 'y')
	{
		cout << "\nUNIT CONVERTER\n";
		cout << "1. CM to Inches\n";
		cout << "2. Inches to CM\n";
		cout << "3. KG to LBS\n";
		cout << "4. LBS to KG\n";
		cout << "5. Celsius to Fahrenheit\n";
		cout << "6. Fahrenheit to Celsius\n";

		cout << "Enter your choice: ";
		cin >> choice;

		cout << "Enter value: ";
		cin >> number;

		if (choice == 1) //if statements to convert units according to what the user wants to convert
			cmToInches(number);

		else if (choice == 2)
			inchesToCm(number);

		else if (choice == 3)
			kgToLbs(number);

		else if (choice == 4)
			lbsToKg(number);

		else if (choice == 5)
			celToFah(number);

		else if (choice == 6)
			fahToCel(number);

		else
			cout << "Invalid choice" << endl;

		cout << "Convert another? (y/n): ";
		cin >> again;
	}

	return 0;
}
