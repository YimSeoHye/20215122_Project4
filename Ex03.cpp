#include<iostream>
#include<string>

using namespace std;

class Person {
	string name;
	int birthYear;
public:
	Person(string name, int year) {
		this->name = name;
		this->birthYear = year;
	}
	void print() {
		cout << "성명: " << name << endl;
		cout << "출생연도: " << birthYear << endl;
	}
};

class Student : public Person {
	string university;
public:
	Student(string name, int year, string university) : Person(name, year) {
		this->university = university;
	}
	void print() {
		Person::print();
		cout << "대학교: " << university << endl;
	}
};

int main() {
	Student s("임서혜", 2002, "순천향대학교");
	s.print();
	return 0;
}