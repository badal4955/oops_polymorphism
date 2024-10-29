#include <iostream>
using namespace std;
class area
{
public:
    int calculatedarea(int a)
    {
        return 3.14 * a * a;
    }
    int calculatedarea(int l, int b)
    {
        return l * b;
    }
};
int main()
{
    area ob;
    cout << ob.calculatedarea(2) << endl;
    cout << ob.calculatedarea(2, 3);
    return 0;
}