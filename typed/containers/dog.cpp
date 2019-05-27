#include <iostream>
#include <array>
#include <string>
#include <time.h>

using namespace std;

class Animal
{
private:
    /* data */
    string animal_name;
    int weight;
    static int _numOfAnimals;
public:
    string name;
    static int num;
    Animal(string s)
    {
        std::cout << "Animal contractor" << endl;
        weight = 100;
        animal_name = s;
        name = s;
    };
    Animal() {
        std::cout << "Animal contractor" << endl;
        weight = 100;
        animal_name = "no name";
        name = "no name";
    };
    int getNum() {
        return _numOfAnimals;
    }
    void getName()
    {
        std::cout << animal_name << endl;
    }
    void setName(string s) {
        animal_name = s;
    }
};
// 私有静态属性
int Animal::_numOfAnimals = 1000;
// 公共静态属性
int Animal::num = 10000;

class Dog : Animal
{
private:
    string dog_name;

public:
    string name;
    // super父类构造方法
    Dog(string s) : Animal(s)
    {
        std::cout << "Dog constrator" << endl;
        dog_name = s;
    }

    void getDogName()
    {
        std::cout << "dog private name: " << dog_name << endl;
    }
};

int main()
{
    Animal animal("dragen");
    Dog dog("friday");

    animal.getName();
    cout << animal.getNum() << endl;
    cout << animal.num << endl;
    cout << animal.name << endl;
    cout << "dog public name: " << dog.name << endl;
    dog.getDogName();

    dog.name = "jack";
    cout << dog.name << endl;

    return 0;
}