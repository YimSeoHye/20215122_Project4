#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
	string name;
	int salary;
public:
	Employee(string name, int salary) {
		this->name = name;
		this->salary = salary;
	}
	void setSalary(int num) {
		salary = num;
	}
	int getSalary() {
		return salary;
	}
	int computeSalary() {
		return salary;
	}
	void print() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << computeSalary() << endl;
	}
};

class Manager :public Employee {
private:
	int bonus;
public:
	Manager(string name, int salary, int bonus) : Employee(name, salary){
		this->bonus = bonus;
	}
	void setBonus(int num) {
		bonus = num;
	}
	int getBonus() {
		return bonus;
	}
	int computeSalary() {
		return Employee::getSalary() + bonus;
	}
	void print() {
		Employee::print();
		cout << "���ʽ�: " << getBonus()<< endl;
		cout << "��ü �޿�: " << computeSalary() << endl;
	}
};

int main() {
	Manager m("��ö��", 200, 100);
	m.print();
	return 0;
}