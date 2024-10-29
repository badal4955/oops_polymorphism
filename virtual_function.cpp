#include <iostream>
using namespace std;
class animal
{
public:
    virtual void speak()
    {
        cout << "HUHU\n";
    }
};
class Dog : public animal
{
public:
    void speak()
    {
        cout << "BARK\n";
    }
};
int main()
{
    animal *p;
    p = new Dog();
    p->speak();
    return 0;
}