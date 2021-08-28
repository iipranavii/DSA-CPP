#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
    }
};

void f()
{
    A a[10];
}

int main()
{
    f();
}