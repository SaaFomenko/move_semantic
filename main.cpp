#include <iostream>
#include <vector>


template <class T>
void move_vectors(std::vector<T>& lhs, std::vector<T>& rhs)
{
    lhs = std::move(rhs);
}

int main()
{
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    move_vectors(two, one);

    if (&one == nullptr)
    {
        std::cout << "Container \"one\" will be deleted.\n";
    }
    else
    {
        std::cout << "Container \"one\" do not deleted.\n";
        std::cout << "one address: " << &one << '\n';
        if (one.empty())
        {
            std::cout << "Container \"one\" is empty.\n";
        }
        else
        {
            std::cout << "The container \"two\" has a elements:\n";
            for (const std::string elem : one)
            {
                std::cout << elem << '\n';
            }
        }
    }


    std::cout << "Container \"two\" has a address: " << &two << '\n';
    std::cout << "The container \"two\" has a elements:\n";
    for (const std::string elem : two)
    {
        std::cout << elem << '\n';
    }

    return 0;
}