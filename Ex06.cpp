#include<iostream>

using namespace std;

class Weapon {
public:
    virtual void load() = 0;
};
class Bomb : public Weapon {
public:
    void load() { cout << "���� �����մϴ�." << endl; }
};
class Gun : public Weapon {
public:
    void load() { cout << "��ź�� �����մϴ�." << endl; }
};

int main(void) {
    Weapon* w1[3];
    w1[0] = new Bomb;
    w1[1] = new Gun;
    w1[2] = new Gun;

    for (Weapon* w : w1)
        w->load();

    return 0;
}