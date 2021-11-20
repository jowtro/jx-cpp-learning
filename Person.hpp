#include <iostream>
namespace jx
{
    class Person
    {
    public:
        Person(std::string name_v, short age_v)
        {
            this->name = name_v;
            this->age = age_v;
        };
        void set_name(std::string);
        std::string get_name();

        void set_age(short);
        short get_age();

    private:
        std::string name;
        short age;
    };
} // namespace jx
