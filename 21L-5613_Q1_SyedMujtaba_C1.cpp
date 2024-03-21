/*#include<iostream>
#include<conio.h>
using namespace std;
class Abstract {
	virtual string speak() {
		cout << "Speak called() ";
	}
};
class Animal {
public:
	string speak() {
		cout << "speak called () " << endl;
	}
	~Animal() {}
};
class Dog :public Animal {
public:
	string speak() {
		cout << "Woof!! Woof!! " << endl;
	}
	~Dog() {}
};
class Cat :public Animal {
public:
	string speak() {
		cout << "mew!! mew!! " << endl;
	}
	~Cat() {}
};
class Sheep :public Animal {
public:
	string speak() {
		cout << "Bleat!! Bleat!! " << endl;
	}
	~Sheep() {}
};
class Cows :public Animal {
public:
	string speak() {
		cout << "Moo!! Moo!! " << endl;
	}
	~Cows() {}
};
class Horses :public Animal {
public:
	string speak() {
		cout << "Neigh!! Neigh!! " << endl;
	}
	~Horses() {}
};
int main() {
	Animal objAnimal;
	Dog objDog;
	Animal* ptrAnimal = &objAnimal;
	Dog* ptrDog = &objDog;
	objAnimal.speak();
	cout << endl;
	objDog.speak();
	cout << endl;
	ptrAnimal->speak();
	cout << endl;
	ptrDog->speak();
	cout << endl;
	Dog lassie;
	Animal* myPet = &lassie;
	myPet->speak();
	cout << endl;
	const int size = 2;
	Animal* myPets[size];
	Cat whiskers;
	Dog mutley;
	myPets[0] = &whiskers;
	myPets[1] = &mutley;
	for (int i = 0; i < size; i++) {
		myPets[i]->speak();
		cout << endl;
	}
	cout << endl;
	int i = 0;
	while (i < size)
	{
		cout << "Press 1 for a Dog and 2 for a Cat." << endl;
		switch (_getch())
		{
		case '1':
			myPets[i] = new Dog;
			cout << "Dog added at position " << i << endl << endl;
			i++;
			break;
		case '2':
			myPets[i] = new Cat;
			cout << "Cat added at position " << i << endl << endl;
			i++;
			break;
		default:

			cout << "Invalid input. Enter again." << endl << endl;
			break;

		}
	}
	cout << endl << endl; cout << endl << endl << endl;
	return 0;
}*/