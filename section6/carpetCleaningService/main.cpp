#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	cout << "Frank's Carpet Cleaning Service" << endl;
  cout << "Charges:" << endl;
  cout << "\t$25 per small room" << endl;
  cout << "\t$35 per large room" << endl;
  cout << "Sales tax rate is 6%" << endl;
  
  cout << "Number of small rooms: ";
  int smallRoom { 0 };
  cin >> smallRoom;
  cout << endl;
  
  cout << "Number of large rooms: ";
  int largeRooms { 0 };
  cin >> largeRooms;
  cout << endl;
  
  cout << "Price per small room: $25" << endl;
  cout << "Price per large room: $35" << endl;
  
  int smallRoomPrice {25};
  int largeRoomPrice {35};
  
  int cost { smallRoom * smallRoomPrice + largeRooms * largeRoomPrice};
  
  cout << "Cost: $" << cost << endl;
  
  float tax { cost * 0.06 };
  
  cout << "Tax: $" << tax << endl;
  
  cout << "=======================================" << endl;
  
  cout << "Total estimate: $" << ( cost + tax ) << endl;
  
  int validDays { 30 };
  
  cout << "This estimate is valid for " << validDays << " days" << endl; 

	return 0;
}
