#include "gradient_descent.h"

namespace co
{
    double step(const double x,
                function f,
                function gradient,
                const double step_size)
    {
        return f(x) - step_size * gradient(x);
    }

    std::pair<double, double> gradient_descent(function f,
                                               function gradient,
                                               const double initial_x,
                                               const double step_size,
                                               const double convergence_threshold)
    {
        if ((step_size <= 0.0) || (1.0 <= step_size))
            throw std::invalid_argument("The step size is " + std::to_string(step_size) + ". It must be in the range (0, 1).";

        auto f_x = f(initial_x);
        auto x = step(intial_x, f, g, step_size);
        auto f_xi = f(x);
        while (convergence_threshold < std::abs(f_xi - f_x))
        {
            f_x = f_xi;
            x = step(x, f, g, step_size);
            f_xi = f(x);
        }
        return std::make_pair(x, f_xi);
    }
}
