/*#include<iostream>
#include<conio.h>
using namespace std;
class Computer {
	string companyName;
	int price;
public:
	Computer(string CN = " ", int p = 0) {
		companyName = CN;
		price = p;
	}
	void setName(string CN) {
		companyName = CN;
	}
	void setPrice(int p) {
		price = p;
	}
	string getName() {
		return companyName;
	}
	int getPrice() {
		return price;
	}
	virtual void Show() {
		cout << "Computer Specifications " << endl << endl;
		cout << "Comapny Name : " << companyName << endl;
		cout << "Price : " << price << endl;
	}
};
class Desktop:public Computer {
	string color;
	int MonitorSize;
	string ProcessorType;
public:
	Desktop(string c = " ", int m = 0, string pro = " ") {
		color = c;
		MonitorSize = m;
		ProcessorType = pro;
	}
	void setColor(string c) {
		color = c;
	}
	void setMonitorSize(int m) {
		MonitorSize = m;
	}
	void setProcessor(string pro) {
		ProcessorType = pro;
	}
	string getColor() {
		return color;
	}
	int getMonitorSize() {
		return MonitorSize;
	}
	string getProcessor() {
		return ProcessorType;
	}
	void Show() {
		cout << "Desktop Specifications " << endl << endl;
		cout << "Color : " << color << endl;
		cout << "Monitor Size : " << MonitorSize << " inches" << endl;
		cout << "Processor Type : " << ProcessorType << endl;
	}
};
class Laptop:public Computer {
	string color;
	int Size;
	int Weight;
	string ProcessorType;
public:
	Laptop(string c = " ", int s = 0, int w = 0, string pro = " ") {
		color = c;
		Size = s;
		Weight = w;
		ProcessorType = pro;
	}
	void setColor(string c) {
		color = c;
	}
	void setSize(int s) {
		Size = s;
	}
	void setWeight(int w) {
		Weight = w;
	}
	void setProcessor(string pro) {
		ProcessorType = pro;
	}
	string getColor() {
		return color;
	}
	int getSize() {
		return Size;
	}
	int getWeight() {
		return Weight;
	}
	string getProcessor() {
		return ProcessorType;
	}
	void Show() {
		cout << "Laptop Specifications " << endl << endl;
		cout << "Color : " << color << endl;
		cout << "Size : " << Size << " inches " << endl;
		cout << "Weight : " << Weight << " kg " << endl;
		cout << "Processor Type : " << ProcessorType << endl;
	}
};
int main12() {
	Desktop d1("Blue", 22, "Core i9");
	d1.Show();
	cout << endl << endl;
	Laptop l1("Red", 13, 2, "Core i7");
	l1.Show();
	cout << endl << endl << endl << endl << endl << endl << endl;
	return 0;
}*/