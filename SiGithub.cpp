// Github example
//  main.cpp
//  15
/* create a class number that contains int num
 and a getter and setter for num
 - create a class square that contains
    ~no private variables
    ~ a function called getSquared() that returns num^2
- create a class cube that contains
    ~no private variables
    ~a function valled getCube() that returns num^3
 ~in main , create a square and cube object and print out the square and cube of any number
*/

#include <iostream>
#include <cmath>
using namespace std;
// parent class
class Number
{
protected:
    int num;
public:
    void setNum(int n)
    {
        num = n;
    }
    int getNum()
    {
        return num;
    }
};
class Square: public Number
{
public:
    int getSquared()
    {
        return pow(num,2);
    }
    
};
class Cube: public Number
{
    public:
    int getCubed()
    {
        return pow(num,3);
    }
};

int main()
{
    Square s;
    Cube c;
    int sqr, cube;
    s.setNum(10);
    c.setNum(10);
    sqr = s.getSquared();
    cube = c.getCubed();
    cout << "The square of " << s.getNum() << " is " << sqr;
   
   system("Pause");
    return 0;
}
