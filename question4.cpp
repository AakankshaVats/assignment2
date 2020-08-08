/*Create a class Rectangle with attributes length and width, each of which defaults to 1. Provide
member functions that calculate the perimeter and the area of the rectangle. Also, provide set
and get functions for the length and width attributes. The set functions should verify that
length and width are each floating-point numbers larger than 0.0 and less than 20.0 */.
class Rectangle
{
private:
double length;
double width;
public:
 Rectangle ();
 Rectangle (double len, double wid);
double getLength () const;
double getWidth () const;
void setLength (double l);
void setWidth (double w);
double getArea () const;
double getPerimeter () const;
void displayStatistics () const;
};
#include <iostream>
#include <cmath>
using namespace std;
Rectangle::Rectangle ()
{
length =1.0;
width = 1.0;
}
Rectangle::Rectangle (double len, double wid)
{
length = len;
width = wid;
}
void Rectangle::setLength (double l)
{
length = l;
}
void Rectangle::setWidth (double w)
{
width = w;
}
double Rectangle::getLength () const
{
return length;
}
double Rectangle::getWidth () const
{
return width;
}
double Rectangle::getArea () const
{
return (length*width);
}double Rectangle::getPerimeter () const
{
return (2*(length+width));
}
void Rectangle::displayStatistics () const
{
cout <<endl<<"length = " <<getLength ()<<" unit (s)";
cout <<endl<<"width = " <<getWidth ()<<" unit (s)";
cout <<endl<<"Area = " <<getArea ()<<" square unit (s)";
cout <<endl<<"Perimeter = " <<getPerimeter () <<" unit (s)";
cout <<endl;
}
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
Rectangle unitRectangle;
Rectangle myRectangle(2.0,5.0);
cout <<"Displaying the statistics of unit rectangle :"<<endl;
unitRectangle.displayStatistics ();
cout <<endl<<"Now displaying the statistics of myRectangle :"<<endl;
myRectangle.displayStatistics ();
double num1,num2;
cout <<endl;
cout <<"Enter the length and width of a rectangle followed by space:";
cin>>num1 >> num2;
myRectangle.setLength(num1);
myRectangle.setWidth (num2);
cout <<endl <<"Now displaying the statistics of the new Rectangle with ";
cout <<"Users input "<<num1<<" and "<<num2<<": "<<endl;
myRectangle.displayStatistics ();
cout <<endl;
return 0;
}
