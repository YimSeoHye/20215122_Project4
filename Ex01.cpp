#include<iostream>

using namespace std;

class Box {
private:
	int width, height, length;
	int vol;
public:
	Box(int x, int y, int z) :length{ x }, width{ y }, height{ z }{
		cout << "상자의 길이: " << x << endl;
		cout << "상자의 너비: " << y << endl;
		cout << "상자의 높이: " << z << endl;
		vol = z * y * z;
		cout << "상자의 부피: " << vol << endl;
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