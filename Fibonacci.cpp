#include "Fibonacci.h"
#include <iostream>
#include <cmath>

void fib::Fibonacci::generate_seq(int n)
{
    long t1{0}, t2{1}, nextTerm{0};

    nextTerm = t1 + t2;
    for (size_t i = 0; i < n; i++)
    {
        std::cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}