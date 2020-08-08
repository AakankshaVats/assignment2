/*Create a class called Date that includes three pieces of information as data members—a month
(type int), a day (type int) and a year (type int). Your class should have a con- structor with
three parameters that uses the parameters to initialize the three data members. For the purpose
of this exercise, assume that the values provided for the year and day are correct, but ensure
that the month value is in the range 1–12; if it isn’t, set the month to 1. Provide a set and a get
function for each data member. Provide a member function displayDate that displays the
month, day and year separated by forward slashes (/). Write a test program that demonstrates
class Date’s capabilities. */
#include<iostream>
#include <string>
using namespace std;

class Date
{
 public:
  Date( int, int, int );
  void setMonth( int );
  int getMonth();
  void setDay(int);
  int getDay();
  void setYear(int);
  int getYear();
  void displayDate();
 private:
  int month;
  int day;
  int year;
};
Date::Date( int m, int d, int y)
{
 if(m>=1&&m<=12)
  month=m;
 else
 {
  month=1;
 }
 day=d;
 year=y;
}
void Date::setMonth( int m)
{
 if(m>=1&&m<=12)
  month=m;
 else
 {
  month=1;
 }
}
void Date::setDay(int d )
{
 day = d;
}
void Date::setYear(int y )
{
 year=y;
}
int Date::getMonth()
{
 return month;
}
int Date::getDay()
{
 return day;
}
int Date::getYear()
{
 return year;
}
void Date::displayDate(){
 cout<<month<<"/"<<day<<"/"<<year<<endl;
}
int main()
{
 Date Date1(8,18,2019);
 cout<<"Date is ";
 Date1.displayDate();
 Date1.setMonth(0);
 Date1.setYear(2000);
 Date1.displayDate();
}
