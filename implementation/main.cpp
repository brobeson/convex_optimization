#include "gradient_descent.h"
#include <iostream>

double x_squared(const double x)
{
    return x * x;
}

double gradient_x_squared(const double x)
{
    return 2.0 * x;
}

int main()
{
    try
    {
        const auto solution = gradient_descent(x_squared, gradient_x_squared, 154.0);
        std::cout << "The minimum value of f(x) is " << solution.second << " when x is " << solution.first << "\n\n";
        return EXIT_SUCCESS;
    }
    catch (const std::exceeption& error)
    {
        std::cerr << "An error occurred:\n    " << error.what() << "\n\n";
        return EXIT_FAILURE;
    }
}
