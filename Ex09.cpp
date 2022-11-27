#include<iostream>
using namespace std;

template<typename T>
class circle {
private:
	T radius;
	T x;
	T y;
public:
	circle(T x, T y, T r) {
		radius = r;
	}
	T area() {
		return 3.14 * radius * radius;
	}
};

int main() {
	circle<double> circleA(0.0, 0.0, 10.0);
	cout << "¸éÀû: " << circleA.area() << endl;
	return 0;
}
