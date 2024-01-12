#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class TwoDimensionalShape
{
private:
    string name;
    string color;

public:
    TwoDimensionalShape(const string &name, const string &color) : name(name), color(color) {}

    string getName() const
    {
        return name;
    }

    string getColor() const
    {
        return color;
    }

    virtual void shapeDetails()
    {
        cout << "Number of Sides:" << endl;
        cout << "Type: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Area:" << endl;
        cout << "Perimeter:" << endl;
    }
    virtual double getArea() const
    {
        return 0.0;
    }
};

class Triangle : public TwoDimensionalShape
{
private:
    double s1;
    double s2;
    double s3;

public:
    Triangle(double s1, double s2, double s3, const string &color) : TwoDimensionalShape("Triangle", color), s1(s1), s2(s2), s3(s3) {}

    double gets1() const
    {
        return s1;
    }

    double gets2() const
    {
        return s2;
    }

    double gets3() const
    {
        return s3;
    }

    void shapeDetails()
    {
        double peri = s1 + s2 + s3;
        double s_peri = peri / 2;
        cout << "Number of sides: 3" << endl;
        cout << "Type: Triangle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Perimeter = " << peri << endl;
        cout << "Area: " << sqrt(s_peri * (s_peri - s1) * (s_peri - s2) * (s_peri - s3)) << endl;
    }
    double getArea() const
    {
        double peri = s1 + s2 + s3;
        double s_peri = peri / 2;
        return sqrt(s_peri * (s_peri - s1) * (s_peri - s2) * (s_peri - s3));
    }
};

class Rectangle : public TwoDimensionalShape
{
private:
    double length;
    double width;

public:
    Rectangle(double length, double width, const string &color) : TwoDimensionalShape("Rectangle", color), length(length), width(width) {}

    double getLength() const
    {
        return length;
    }

    double getWidth() const
    {
        return width;
    }
    void shapeDetails()
    {
        cout << "Number of sides: 4" << endl;
        cout << "Type: Rectangle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Perimeter = " << (length + width) * 2 << endl;
        cout << "Area: " << length * width << endl;
    }
    double getArea() const
    {
        return length * width;
    }
};

class Square : public TwoDimensionalShape
{
private:
    double side_length;

public:
    Square(double side_length, const string &color) : TwoDimensionalShape("Square", color), side_length(side_length) {}

    double getSideLength() const
    {
        return side_length;
    }
    void shapeDetails()
    {
        cout << "Number of sides: 4" << endl;
        cout << "Type: Square" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Perimeter = " << side_length * 4 << endl;
        cout << "Area: " << side_length * side_length << endl;
    }
    double getArea() const
    {
        return side_length * side_length;
    }
};

class Hexagon : public TwoDimensionalShape
{
private:
    double sidelength;

public:
    Hexagon(double sidelength, const string &color) : TwoDimensionalShape("Hexagon", color), sidelength(sidelength) {}

    double getsidelength() const
    {
        return sidelength;
    }
    void shapeDetails()
    {
        cout << "Number of sides: 6" << endl;
        cout << "Type: Hexagon" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Perimeter = " << sidelength * 6 << endl;
        cout << "Area: " << (3 * sqrt(3) / 2) * sidelength << endl;
    }
    double getArea() const
    {
        return (3 * sqrt(3) / 2) * sidelength;
    }
};

void sortShapeArea(TwoDimensionalShape **shapes, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (shapes[j]->getArea() < shapes[j + 1]->getArea())
            {
                TwoDimensionalShape *temp = shapes[j];
                shapes[j] = shapes[j + 1];
                shapes[j + 1] = temp;
            }
        }
    }
}

int main()
{
    const int n = 4;
    TwoDimensionalShape *t[n];
    t[0] = new Triangle(5.0, 7.0, 8.0, "Red");
    t[1] = new Rectangle(5.0, 7.0, "Blue");
    t[2] = new Square(5.0, "Green");
    t[3] = new Hexagon(5.0, "Yellow");

    sortShapeArea(t, n);

    for (int i = 0; i < n; i++)
    {
        t[i]->shapeDetails();
        cout << endl;
    }

    return 0;
}
