#include<iostream>
using namespace std;
/* OVERRIDE (suprascriere/redefinire)
 OVERLOADING (supraîncărcare de simboluri)
Shape este clasa abstracta, iar aria() si display() sunt functii pure, adica pot fi
redefinite in clasa derivata
*/
class Shape {
public:
	virtual double aria() = 0 ;
	virtual void display() = 0;
};
class Rectangle: public Shape {
private:
	double heigth, width;
public:
	Rectangle(double heigth, double width )
	{
		this->heigth = heigth;
		this->width  = width;
	}
	double aria(){
		return heigth * width;
	}
	void display()
	{
		printf("Rectangle is equal: heigth= %.2lf, width= %.2lf ", heigth, width );
	}
};
class Triangle: public Shape {
private:
	float base, heigth;
public:
	Triangle(float base, float heigth) {
		this-> base = base;
		this->heigth= heigth;
	}
	double aria() {
		return base*heigth/2;
	}
	void display() {
		printf("Triangle is equal: base = %.2lf, heigth = %.2lf ", base, heigth);
	}
};
class Circle: public Shape {
private:
	float radius;
public:
	Circle(float r) {
		radius = r;
	}
	double aria() {
		return 3.14 * radius * radius;
	}
	void display() {
		printf("Circle is equal: %.2lf ", radius);
	}
};
int main()
{
	Shape *r = new Rectangle(34, 45);
	Shape *t = new Triangle(6,7);
	Shape *c = new Circle(4);
	
	r->display();
	printf("%.2lf\n", r->aria());
	
	t->display();
	printf("%.2lf\n", t->aria());
	
	c->display();
	printf("%.2lf\n", c->aria());
}



/*	În C avem: lf(long float) pentru double, f pt float
               d = decimal, c = character, s=string
	În python avem:  f pt double(sau float), c = character, s= string, d = decimal  
În C:
int main()
{
    double a = 1.23;
    float b = 3.14;
    printf( "%.2lf %.2lf", a, b );
    
    return 0;
}
În py:
def main():
    
    a = 1.23
    b = 3.14
    c ="Andrei"
    d= "Boto"
    print( "%.2lf %.2lf" %(a, b) )
    print("%s %s" %(c, d) )
main()
*/

