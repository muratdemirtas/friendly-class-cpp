#include "stdio.h"

#ifndef __cplusplus
#error "we are working with C++, change your main.c to main.cpp and use g++,not gcc"
#endif

class foo
{
public:
    void doSomething();
protected:
    friend void reachMe(int target,foo);
    void canyouhelpme() { printf("yes or no?\n"); }
private:
    int count = 0;
};

void reachMe(int target,foo friendclass)
{
    friendclass.canyouhelpme();

    while(friendclass.count <= target)
        printf("reaching %d\n",friendclass.count++);
    printf("reached to %d, exiting\n",target);
}


int main(int argc, char *argv[])
{
    foo Foo;

    reachMe(10,Foo);
    return 0;
}
