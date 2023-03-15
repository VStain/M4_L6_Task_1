#include <iostream>
#include <string>
using namespace std;

class Figure
{
public:
    Figure()
    {
        //cout << "Фигура: " << sides_count << endl;
    }
    void Get_side()
    {
        cout << sides_count << endl;
    }
    void Get_name()
    {
        cout << name ;
    }

protected:
    int sides_count = 0;
    string name = "Фигура: ";
};

class Triangle:public Figure
{
public:
    Triangle()
    {
        name = "Треугольник: ";
        sides_count = 3;
    }
};

class Quadrangle:public Figure
{
public:
    Quadrangle()
    {
        name = "Четырехугольник: ";
        sides_count = 4;
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "Количество сторон: " << endl;
    Figure Figure;
    Triangle Triangle;
    Quadrangle Quadrangle;

    Figure.Get_name();
    Figure.Get_side();

    Triangle.Get_name();
    Triangle.Get_side();

    Quadrangle.Get_name();
    Quadrangle.Get_side();

}

