/*File Name: CIS2013_Week02_Homework01.cpp
Author: Sonny Icks
Email Address: sonny.icks@okstate.edu
Assignment Number: 2
Description: simple calculator used to add, subtract, multiply or divide two numbers
Last Changed: January 28, 2018*/

#include <iostream>
using namespace std;

int main (){
	float first_number = 0;
	float second_number = 0;
	char math_sign = 0;
	float calculated_solution = 0;
	bool run_again = true;
	char yes_or_no = 'n';
	bool invalid_response = true;
	
	while(run_again==true){
	//prompt user to enter 2 numbers and operator.
	cout << "Please enter your first number: "; 
	cin >> first_number;
	cout << "Please enter your second number: "; 
	cin >> second_number;
	cout << "Would you like to add, subtract, multiply or divide the two numbers? \n";
	cout << "For subtraction, the second number will be taken away from the first, \n";
	cout << "and for the division, the first number will be divided by the first. \n" << "\n";
	while(invalid_response==true){
	cout << "Enter +,-,*, or / : "; 
	cin >> math_sign;
	//if condition for appropriate sign entered OR tell user the input is invalid.
	if (math_sign == '+'){
	calculated_solution=(first_number+second_number);
	invalid_response=false;}
	if (math_sign == '-'){
	calculated_solution=(first_number+second_number);
	invalid_response=false;}
	if (math_sign == '*'){
	calculated_solution=(first_number*second_number);
	invalid_response=false;}
	if (math_sign == '/'){
	calculated_solution=(first_number/second_number);
	invalid_response=false;}
	if (invalid_response==false){cout << "The solution is " << calculated_solution;}
	else{cout << "Invalid response - \n";}}
	cout << "\n" << "Would you like to perform another calculation? Y/N: ";
	cin >> yes_or_no;
	if((yes_or_no!='Y')&&(yes_or_no!='y')){run_again=false;}
	else{invalid_response=true;}}
	
	return 0;
}