#include <iostream>
using namespace std;
class a
{
public:
    int A;
};
class b : virtual public a
{
public:
    int B;
};
class c : virtual public a
{
public:
    int C;
};
class d : public b, public c
{
public:
    int D;
};

/*here class a is inherited by b and c independently and the
both of them inherited by the class d which will make d to have to
instance of data member of class a to solve that we can either use scope
resolution operator or virtual */

int main()
{
    d D;
    D.A = 4;
    return 0;
}