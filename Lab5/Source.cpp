#include <stdio.h>
#include <iostream>

using namespace std;

class Mammals {

public:
	virtual void OutInfo() = 0;

};

class People : public Mammals {
private:
	const char* first;
	const char* last;
	const char* sex;
	int age;
	const char* country;
	float height;
	float weight;

public:
	People(const char* first, const char* last, const char* sex, int age, const char* country, float height, float weight) {
		this->first = first;
		this->last = last;
		this->sex = sex;
		this->age = age;
		this->country = country;
		this->height= height;
		this->weight = weight;
	}
	void OutInfo() {
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
	void OutInfo() {};
};

class Cows : public Animals {
	const char* name;
	const char* alias;
	const char* sex;
	const char* color;
	int age;
	float weight;

public:
	Cows(const char* name, const char* alias, int age, const char* sex, const char* color, float weight) {
		this->name = name;
		this->alias = alias;
		this->age = age;
		this->sex = sex;
		this->color = color;
		this->weight = weight;
	}
	void OutInfo() {
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
private:
	const char* name;
	const char* alias;
	int age;
	const char* sex;
	const char* color;
	float weight;
	float speed;

public:
	Horses (const char* name, const char* alias, int age, const char* sex, const char* color, float weight, float speed) {
		this->name = name;
		this->alias = alias;
		this->age = age;
		this->sex = sex;
		this->color = color;
		this->weight = weight;
		this->weight = speed;
	}
	void OutInfo() {
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

	Mammals  *mammals;
	People people("Kate", "Midlton", "Female", 31, "United States", 165, 52);

	mammals = &people;
	mammals->OutInfo();
	
	cout << "\n";

	Cows cows("Cow", "Milka", 7, "Male", "brown", 115.5f);
	mammals = &cows;
	mammals->OutInfo();

	cout << "\n";

	Horses horse("Cow", "Milka", 7, "Male", "brown", 115.5f, 40.5f);
	mammals = &horse;
	mammals->OutInfo();


	cout << "\n";

	system("pause");
	return 0;
}