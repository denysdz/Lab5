#include <stdio.h>
#include <iostream>

using namespace std;

class Mammals {

public:
	virtual void OutInfo(const char* name, int age, const char* env, float weight) {
		cout << "Mammal information:" << endl;
		cout << "Name: " << name << "\n";
		cout << "Age: " << age << "\n";
		cout << "Environment: " << env << "\n";
	}
};

class People : public Mammals {
public:
	virtual void OutInfo(const char* first, const char* last, const char* sex, int age, const char* country, float height, float weight) {
		cout << "People information:" << endl;
		cout << "First name: " << first << "\n";
		cout << "Last name: " << last << "\n";
		cout << "Sex: " << sex << "\n";
		cout << "Age: " << age << "\n";
		cout << "Country: " << country << "\n";
		cout << "Height: " << height << "\n";
		cout << "Weight: " << weight << "\n";
	}
};

class Animals : public Mammals {
public:
	virtual void OutInfo() {};
};

class Cows : public Animals {

public:
	virtual void OutInfo(const char* name, const char* alias, int age, const char* sex, const char* color, float weight) {
		cout << "Animal information:" << endl;
		cout << "Name: " << name << "\n";
		cout << "Alias: " << alias << "\n";
		cout << "Age: " << age << "\n";
		cout << "Sex: " << sex << "\n";
		cout << "Color: " << color << "\n";
		cout << "Weight: " << weight << "\n";
	}
};

class Horses : public Animals {

public:
	virtual void OutInfo(const char* name, const char* alias, int age, const char* sex, const char* color, float weight, float speed) {
		cout << "Animal information:" << endl;
		cout << "Name: " << name << "\n";
		cout << "Alias: " << alias << "\n";
		cout << "Age: " << age << "\n";
		cout << "Sex: " << sex << "\n";
		cout << "Color: " << color << "\n";
		cout << "Weight: " << weight << "\n";
		cout << "Speed: " << speed << "\n";
	}
};

int main() {

	
	People people;
	people.OutInfo("Kate", "Midlton", "Female", 31, "United States", 165, 52);
	
	cout << "\n";

	Cows cows;
	cows.OutInfo("Cow", "Milka", 7, "Male", "brown", 115.5f);

	cout << "\n";

	Horses horse;
	horse.OutInfo("Cow", "Milka", 7, "Male", "brown", 115.5f, 40.5f);

	cout << "\n";

	system("pause");
	return 0;
}