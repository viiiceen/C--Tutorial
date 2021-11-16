#include <iostream>

/* 1 */ const int globalVar = 10;

int *foo(const int *other)
{

    /* 5 */ int fooLocal = 0;

    std::cout << "foo's local: " << fooLocal << std::endl;

    std::cout << "main's local: " << *other << std::endl;

    /* 6 */ return &fooLocal;
}

int main()

{

    /* 2 */ int mainLocal = 15;

    /* 3 */ int *fooPointer = foo(&mainLocal);

    std::cout << "main's local: " << mainLocal << std::endl;

    std::cout << "We should not access the content of fooPointer! It's not valid." << std::endl;

    /* 4 */ return 0;
}