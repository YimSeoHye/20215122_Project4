#include<iostream>

using namespace std;

class Box {
private:
	int width, height, length;
	int vol;
public:
	Box(int x, int y, int z) :length{ x }, width{ y }, height{ z }{
		cout << "������ ����: " << x << endl;
		cout << "������ �ʺ�: " << y << endl;
		cout << "������ ����: " << z << endl;
		vol = z * y * z;
		cout << "������ ����: " << vol << endl;
		cout << endl;
	}
	bool operator<(const Box x) {
		return (this->vol < x.vol);
	}
};

int main() {
	Box a(10, 10, 10);
	Box b(20, 20, 20);

	cout << boolalpha << (a < b) << endl;
}