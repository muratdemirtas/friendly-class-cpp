#include "stdio.h"

#ifndef __cplusplus
#error "we are working with C++, change your main.c to main.cpp and use g++,not gcc"
#endif

class bar;

class foo
{
public:
    void doSomething(bar b);
};

class bar
{
friend class foo;
public:
protected:
     int getSum(int x ,int y) { return (x+y)/2; }

private:
     int valueOfBar = 5;
};

void foo::doSomething(bar b)
{
    if(b.valueOfBar == b.getSum(5,5))
        printf("friend class working, result is %d\n",b.valueOfBar );
}

int main(int argc, char *argv[])
{
    foo Foo; bar Bar;
    Foo.doSomething(Bar);

    return 0;
}
