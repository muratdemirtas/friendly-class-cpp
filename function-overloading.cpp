#include "stdio.h"

class foo
{
public:
    foo() {}
    void getSum(int x, int y);
    void getSum(float x, float y);

};

void  foo::getSum(float x, float y)
{
     printf("float toplama %.2f\n",(x+y)/2);
}

void foo::getSum(int x, int y)
{
      printf("int toplama %d\n",(x+y)/2);
}

int main()
{
    foo Foo;
    float k = 4.2, z = 4.3;
    Foo.getSum(5,5);
    Foo.getSum(k,z);
    return 0;
}
