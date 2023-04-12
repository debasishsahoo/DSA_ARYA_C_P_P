#include <iostream>
using namespace std;
class Shape
{ //  base class
public:
    virtual void draw()
    { // virtual function
        cout << "drawing..." << endl;
    }
};
class Rectangle : public Shape //  inheriting Shape class.
{
public:
    void draw()
    {
        cout << "drawing rectangle..." << endl;
    }
};
class Circle : public Shape //  inheriting Shape class.

{
public:
    void draw()
    {
        cout << "drawing circle..." << endl;
    }
};
int main(void)
{
    Shape *s; //  base class pointer.
    Shape sh; // base class object.

    Rectangle rec;

    Circle cir;

    s = &sh;
    s->draw();

    //s = &rec;
    s->draw();

    //s = &cir;
    s->draw();
}
