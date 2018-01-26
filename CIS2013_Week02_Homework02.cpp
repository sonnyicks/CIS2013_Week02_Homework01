#include <iostream>
using namespace std;

int main(){
	int bottles = 99;
	while(bottles !=0){
		//Bottle count of one will use the singular song verse
		if(bottles==1){
			cout << "\n" << bottles << " bottle of beer on the wall... \n";
			cout << bottles << " bottle of beer. \n";
			cout << "You take one down, and pass it around... \n";}
		else{
			//multiple bottles will use plural verse.
		cout << bottles << " bottles of beer on the wall, \n";
		cout << bottles << " bottles of beer... \n";
		cout << "You take one down, and pass it around... \n";}
		//decrease the bottle amount for next verse.  If none are left, line 19 if statement prompts the last verse.
		bottles = (bottles-1);
		if(bottles==0){cout << "No more bottles of beer on the wall! \n";}
	else{if (bottles ==1){cout << bottles << " bottle of beer on the wall. \n";}
	else{cout << bottles << " bottles of beer on the wall. \n" << "\n";}}}
	
	return 0;
}