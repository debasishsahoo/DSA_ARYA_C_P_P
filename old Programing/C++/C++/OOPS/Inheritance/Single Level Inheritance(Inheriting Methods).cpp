#include <iostream>
using namespace std;
class Animal
{
public:
  void eat()
  {
    cout << "Eating..." << endl;
  }
};

class Dog : public Animal
{
public:
  void bark()
  {
    cout << "Barking..." << endl;
  }
};
class Cat : public Animal
{
public:
  void Mu()
  {
    cout << "Mu......." << endl;
  }
};

class BabyDog : public Dog
{
public:
  void weep()
  {
    cout << "Weep......." << endl;
  }
};

int main(void)
{
  Dog d1;
  d1.eat();
  d1.bark();

  Cat c1;
  c1.eat();
  c1.Mu();

  BabyDog bd;
  bd.eat();
  bd.bark();
  bd.weep();

  return 0;
}
