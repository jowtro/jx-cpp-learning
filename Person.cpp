#include "iostream"
#include "Person.hpp"

void jx::Person::set_name(std::string name)
{
    this->name = name;
}

void jx::Person::set_age(short age_v)
{
    this->age = age_v;
}

std::string jx::Person::get_name()
{
    return this->name;
}

short jx::Person::get_age()
{
    return this->age;
}
