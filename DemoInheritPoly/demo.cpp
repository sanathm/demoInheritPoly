#include <iostream>
#include <string>

using namespace std;

class Animal{
protected:
	string name;
public:
	Animal(){
		name = "animal";
	}
	void whoAmI(){
		cout << "I am " << name << endl;
	}
	virtual void does(){
		cout << "do nothing" << endl;
	}
};

class Dog :public Animal{
protected:
	int numLegs;
public:
	Dog(){
		name = "Dog";
		numLegs = 4;
	}
	virtual void does(){ //virtual keyword not necessary
		cout << "Woof!" << endl;
	}
	int howManyLegs(){
		return numLegs;
	}
};


int main(){
	Animal myAnimal;
	Dog myDog;
	Animal *animalPtr;

	animalPtr = &myDog;
	myAnimal.whoAmI();
	myAnimal.does();

	myDog.whoAmI();
	myDog.does();
	cout << "Dogs have " << myDog.howManyLegs() << " legs" << endl;

	cout << "using base class pointer to access derived class object" << endl;
	animalPtr->whoAmI();
	animalPtr->does();
}