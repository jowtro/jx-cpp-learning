// #include <cpr/cpr.h>
#include <iostream>
#include <climits>
#include <iterator>
#include <vector>
#include <random>

#include "Person.cpp"
#include "Fibonacci.cpp"

int main(int argc, char **argv)
{
    //  cpr::Response r = cpr::Get(cpr::Url{"http://192.168.1.64/bnance-api/api/price/avg/BTCUSDT"});
    //  r.status_code;                  // 200
    //  r.header["content-type"];       // application/json; charset=utf-8
    //  std::string text = r.text;                         // JSON text string
    //  std::cout << text;

    int test_scores[5];
    int grid[4][4]{
        {0, 1, 2, 3},
        {0, 1, 2, 3},
        {0, 1, 2, 3},
        {0, 1, 2, 3}};

    // simple array example
    for (int x = 1; x <= std::size(test_scores); x++)
    {
        printf("value is : %i\n", x);
    }

    // Multidimensional array example
    for (int i = 0; i < std::size(grid); i++)
    {
        for (int j = 0; j < std::size(grid); j++)
        {
            printf("{%i, %i}", i, j);
        }
    }
    std::cout << std::endl;

    //Classes

    jx::Person *person = new jx::Person("teste", 2);

    printf("A pessoa tem %d anos \n\r", person->get_age());
    delete person;
    //testar vector

    std::vector<jx::Person *> persons;

    /* initialize random seed: */
    srand(time(NULL));

    persons.push_back(new jx::Person("Joaquim", rand() % 100));
    persons.push_back(new jx::Person("Janete", rand() % 100));
    persons.push_back(new jx::Person("Cleiton", rand() % 100));
    persons.push_back(new jx::Person("Roberto", rand() % 100));

    for (jx::Person *person : persons)
    {
        std::cout << "A pessoa " << person->get_name() << " tem " << person->get_age() << std::endl;
    }

    //destroy vectors
    for (jx::Person *person : persons)
    {
        delete person;
    }
    // fib::Fibonacci fib;
    // fib.generate_seq(10);
}