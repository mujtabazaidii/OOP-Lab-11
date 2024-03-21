#include<iostream>
#include<conio.h>
using namespace std;
class Person {
	string personName;
	int age;
public:
	Person(string p = " ", int a = 0) {
		personName = p;
		age = a;
	}
	void setPersonName(string p) {
		personName = p;
	}
	void setAge(int a) {
		age = a;
	}
	string getPersonName() {
		return personName;
	}
	int getAge() {
		return age;
	}
	virtual void Print() {
		cout << "Print Called";
	}
};
class Patient : public Person {
	string DiseaseType;
	string RecommendedMedicine;
public:
	Patient(string d = " ", string r = " ") {
		DiseaseType = d;
		RecommendedMedicine = r;
	}
	void setdisease(string d) {
		DiseaseType = d;
	}
	void setMedicine(string r) {
		RecommendedMedicine = r;
	}
	string getDisease() {
		return DiseaseType;
	}
	string getMedicine() {
		return RecommendedMedicine;
	}
	void Print() {
		cout << "Disease Type : " << DiseaseType << endl;
		cout << "Dedicated Medicine :" << RecommendedMedicine << endl;
	}
};
class MedicarePatient :public Patient {
	string HospitalName;
	string WardName;
	int room;
public:
	MedicarePatient(string Hospital = " ", string Ward = " ", int r = 0) {
		HospitalName = Hospital;
		WardName = Ward;
		room = r;
	}
	void Print() {
		cout << "Hospital Name : " << HospitalName << endl;
		cout << "Ward Name : " << WardName << endl;
		cout << "Room Number : " << room << endl;
	}
};
int main() {
	MedicarePatient m1("Jinnah Hospital ", "ICU", 72);
	m1.Print();
	cout << endl << endl << endl;
}