#include <iostream>
using namespace std ;
void print(int* p)
{
    cout<<*p<<endl;
}

void update(int* p)
{
    p = p + 1;
    *p = *p +1;
    cout<<"Inside : "<<p<<endl;
}
int main()
{
    int value = 5;
    int* p = &value;
    print(p);

    cout<<"Before p : "<<p<<endl;
    update(p);
    cout<<"After p : "<<p<<endl;

    cout<<"Before p : "<<*p<<endl;
    update(p);
    cout<<"After p : "<<*p<<endl;
    return 0 ;
}