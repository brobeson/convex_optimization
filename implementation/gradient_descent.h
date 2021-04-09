#ifndef GRADIENT_DESCENT_HPP
#define GRADIENT_DESCENT_HPP

#include <stdexcept>
#include <utility>

namespace co
{
    // function type has the form double f(const double);
    using function = double(*)(const double);

    /**
     * \brief Perform gradient descent on a function.
     * \param[in] f The function on which to perform gradient descent. \a f must be convex,
     * differentiable, and unbounded.
     * \param[in] gradient The gradient of \a f, and at any point x.
     * \param[in] initial_x The initial value of x at which to begin gradient descent.
     * \param[in] step_size The size of steps to take when descending to the next value of x. This
     * must be in the range (0, 1).
     * \param[in] convergence_threshold The threshold for determining convergence, and terminating
     * the descent. The algorithm ends when \$ \left| f\left(x_i\right) - f\left(x_{i-1}\right)
     * \right| \le \text{convergence_threshold} \$.
     * \return The pair (x, f(x)) for which x minimizes the given function \a f.
     * \throws std::runtime_error This may be thrown if the gradient_descent() detects that it is
     * diverging instead of converging.
     * \throws std::invalid_argument This is thrown if \a step_size is outside the allowed range.
     */
    std::pair<double, double> gradient_descent(function f,
                                               function gradient,
                                               const double initial_x,
                                               const double step_size = 0.1,
                                               const double convergence_threshold = 0.0001);
}

#endif
