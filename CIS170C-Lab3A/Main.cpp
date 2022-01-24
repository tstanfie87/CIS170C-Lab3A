// ---------------------------------------------------------------
// Programming Assignment:	LAB1A
// Developer:			          Travis Stanfield
// Date Written:			11/11/2020
// Purpose:				Salsa Array Program 
// ---------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
	//intialize variables
	string salsa[7] = {"mild", "medium", "hot", "sweet", "fruit", "verde", "zesty"};
	int sales[7];
	
	

	for (int i = 0; i < 7; i++)
	{
	
{
	cout << "Jars sold last month of "<<salsa[i]<<" : ";
	cin >> sales[i];
	while (sales[i] < 0) 
	{
		cout << "Invalid entry. Number must be positive. Resubmit: ";
		cin >> sales[i];

	}
	
}
		
	}
	cout << "\nSalsa Sales Report"<< endl;
	cout << setw(1) << "Name" <<"    "<< setw(8) << "Jars Sold" << endl;
	cout << "_________________" << endl;
	int sum = 0;
	int high= -1;
	int low=1000;
	
	for (int i = 0; i < 7; i++)
	{
	
		cout << salsa[i] << " : "<<setw(4) <<sales[i]<<endl;
		//test if num is the highest
		
		if (sales[i] > high)
			high = sales[i];
		//test if num is the lowest
		if (sales[i] < low)
			low = sales[i];
		sum += sales[i];
		
	}
	
	cout << endl << endl;
	
	cout << "Total sales " << sum << endl;
	cout << "High Seller "<< high << endl;
	cout << "Low Seller " << low << endl;







}