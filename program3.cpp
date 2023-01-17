#include <iostream>
using namespace std;
class A
{
public:
    A(int length, int width)
    {
        cout << "area  of rectangle is = : " << length * width << endl;
    }
    A(float a)
    {
        cout << "area of sqauare is = " << a * a << endl;
    }
};
int main()

{
    A aa(4);
    A bb(4, 4);
}
