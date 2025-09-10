#include<iostream>
using namespace std;
class Elevator
{
	int currentfloor;
	int minFloor = 1;
	int maxFloor = 2;
	bool isWorking;
public:
	Elevator()
	{
		currentfloor = 1;
		isWorking = true;
	}
	void callLift()
	{
		int targetFloor;
		if(!isWorking)
		{
			cout << "Error! The lift is not working. Please turn on the lift!" << endl;
			return;
		}
		else 
		{
			cout << "You are currently on the floor " << currentfloor << endl;
			cout << "You can select the floor. Click on the button:   " << endl;
			cin >> targetFloor;
			moveTo(targetFloor);
		}
	}
	void moveTo(int floor) // 5
	{
			if (floor >= minFloor && floor <= maxFloor)
			{
				if (floor == currentfloor)
				{
					cout << "Error! You are already on this floor. " << endl;
				}
				else
				{
					cout << "The movement begins at " << currentfloor << " floor to floor: " << floor << endl;
					currentfloor = floor;
					cout << "You arrived on floor " << floor << endl;
				}
			}
			else
			{
				cout << "Error! There is no such floor in this building. " << endl;
			}
	}
	int returnFloor()
	{
		return currentfloor;
	}
	void currentFloor()
	{
		cout << "You are currently on the floor " << currentfloor << endl;
	}
	void turnOn() // 2
	{
		isWorking = true;
		cout << "Lift is turned on and ready to work!" << endl;
	}
	void turnOff() //2
	{
		isWorking = false;
		cout << "Lift is turned off" << endl;
	}
	void setMinFloor(int minFloor)
	{
		this->minFloor = minFloor;
	}
	void setMaxFloor(int maxFloor)
	{
		this->maxFloor = maxFloor;
	}
	void printStatus()
	{
		if (isWorking)
		{
			cout << "Lift is working" << endl;
		}
		else
		{
			cout << "Lift isnt working" << endl;
		}
	}
};
int main()
{
	Elevator lift;
	lift.turnOn();
	lift.callLift();
	lift.currentFloor();
	lift.turnOff();
	int choice;
	do
	{
		cout << "If you want to continue, press 1." << endl;
		cout << "If you want to exit press 2." << endl;
		cout << "If you want to know the status of the elevator, press 3." << endl;
		cout << "If you want to turn on the elevator, press 4." << endl;
		cout << "If you want to turn off the elevator, press 5." << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "You chose to continue." << endl;
			lift.callLift();
			break;
		case 2:
			cout << "You chose to exit." << endl;
			return 0;
			break;
		case 3:
			lift.printStatus();
			break;
		case 4:
			lift.turnOn();
			break;
		case 5:
			lift.turnOff();
			break;
		}
	} while (choice != 2); 
}