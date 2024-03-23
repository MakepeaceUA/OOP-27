#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Point
{
public:
    int x,y;
    Point(int val1,int val2)
    {
        x = val1;
        y = val2;
    }
};

int main()
{
    vector<Point> arr;
    list<Point> lst;

    arr.push_back(Point(1,2));
    arr.push_back(Point(3,4));
    arr.push_back(Point(5,6));
    arr.push_back(Point(7,8));
    arr.push_back(Point(9,10));

    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << i->x << " " << i->y << "\n";
    }
    cout << "\n";



    lst.push_back(Point(11,12));
    lst.push_back(Point(13,14));
    lst.push_back(Point(15,16));
    lst.push_back(Point(17,18));
    lst.push_back(Point(19,20));

    for (auto i = lst.begin(); i != lst.end(); i++)
    {
        cout << i->x << " " << i->y << "\n";
    }

}