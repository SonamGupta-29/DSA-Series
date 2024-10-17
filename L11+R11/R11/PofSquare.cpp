#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

// constructor
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int perimeter(){
      return 2 * (length + breadth);
    }

    int area(){
     return length * breadth;
    }
};

class Square : public Rectangle
{
    // constructor
    public:
    Square(int l, int b) : Rectangle(l, b){

    }
};
int main()
{
    Square* obj = new Square(5, 6);
    cout<<obj->perimeter()<<"\n";
    cout<<obj->area();

    return 0;
}