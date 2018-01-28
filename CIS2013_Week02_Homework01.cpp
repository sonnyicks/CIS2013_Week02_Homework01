#include <iostream>
using namespace std;

int main (){
	int first_number;
	int second_number;
	char math_sign;
	float calculated_solution;
	bool run_again = true;
	
	cout << "Please enter your first number: "; 
	cin >> first_number;
	cout << "Please enter your second number: "; 
	cin >> second_number;
	cout << "Would you like to add, subtract, multiply or divide the two numbers? \n";
	cout << "For subtraction, the second number will be taken away from the first, \n";
	cout << "and for the division, the first number will be divided by the first. \n" << "\n";
	cout << "Enter +,-,*, or /.  "; 
	cin >> math_sign;
	//if condition for addition
	if (math_sign == '+'){
		calculated_solution=(first_number+second_number);
	cout << "The solution is " << calculated_solution;}
	
	return 0;
}