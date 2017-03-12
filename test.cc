#include<iostream>
#include<memory>

using namespace std;
struct A
{

    int a;
    int b;
};



int main()
{
    auto a = make_shared<A>();

    a->a = 1;

    a->b = 2;
    cout<<"hello world" <<endl;
    cout<< a->a<<a->b  <<endl;
}
