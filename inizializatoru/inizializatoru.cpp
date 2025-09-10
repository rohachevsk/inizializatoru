//#include<iostream>
//using namespace std;
//
//class CPU
//{
//	double price;
//	double power;
//	char* model;
//public:
//	CPU(): model(nullptr),power(0),price(0)
//	{}
//	CPU(const char* m, double pow, double pr):power(pow),price(pr)
//	{
//		model = new char[strlen(m) + 1];
//		strcpy_s(model, strlen(m) + 1, m);
//	}
//	~CPU()
//	{
//		delete[] model;
//	}
//	void print()
//	{
//		cout << "Model:  " << model << endl;
//		cout << "Power:  " << power << endl;
//		cout << "Price:  " << price << endl;
//	}
//};
//
//class PC
//{
//	char* model;
//	double price;
//	CPU cpu;
//public:
//	PC(const char* mod, double p, const char* cp, double powcpu, double prcpu) :price(p), cpu(cp, powcpu, prcpu)
//	{
//		model = new char[strlen(mod) + 1];
//		strcpy_s(model, strlen(mod) + 1, mod);
//		price = p;
//	}
//	void Print()
//	{
//		cout << "-- PC:\n";
//		cout << model << "\t" << price << endl;
//		cpu.print();
//	}
//};
//int main()
//{
//	PC obj("HP", 28000, "AMD razer", 3.5, 2000);
//	obj.Print();
//}
#include<iostream>
using namespace std;
class Elevator
{
	int currentfloor;
	int kuda;
	bool isWorking;
public:
	Elevator()
	{
		currentfloor = 1;
		isWorking = true;
	}
	void diapazon()
	{
		cout << "You are currently on the floor " << currentfloor << endl;
		cout << "You can go to the second floor.If you want turn 2" << endl;
		cin >> kuda;
		if (kuda == 2)
		{
			moveTo(2);
		}
		else
		{
			moveTo(1);
		}
	}
	void moveTo(int floor) // 5
	{
		if (floor == 1 || floor == 2)
		{
			if (floor == currentfloor)
			{
				cout << "Error! You are already on this floor. " << endl;
			}
			else
			{
				cout << "The movement begins at " << floor << " etazh" << endl;
				currentfloor = floor;
			}
		}
	}
	void currentFloor()
	{
		cout << "The current floor is equal to " << this->currentfloor << endl;
	}
	void turnOn() // 2
	{
		isWorking = true;
		cout << "Lift is turn on and ready to work!" << endl;
	}
	void turnOff()
	{
		isWorking = false;
		cout << "Lift is turn off" << endl;
	}
	bool getStatus()
	{
		return isWorking;
	}
	void setStatus(bool status)
	{
		isWorking = status;
	}

};
int main()
{
	
	Elevator lift;
	if (lift.getStatus())
	{
		cout << "Status : Lift is working" << endl;
	}
	else
	{
		cout << "Status : Lift isnt working" << endl;
	}
	lift.turnOn();
	lift.diapazon();
	lift.getStatus();
	lift.currentFloor();
	lift.turnOff();
}