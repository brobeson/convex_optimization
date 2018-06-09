# Gradient Descent

## Example of Gradient Descent
This section provides a basic example of gradient descent. The idea is to find the minimum value of
_x_ for the given function _f(x)_.

### Given
- f(x) = x<sup>2</sup>
- ∇f(x) = 2x
- x<sup>(k-1)</sup> = 10
- t = 0.8

### Calculating x<sup>(k)</sup>
x<sup>(k)</sup> = x<sup>(k-1)</sup> - t∇f(x<sup>(k-1)</sup>)

x<sup>(k)</sup> = 10 - 0.8(2)(10)

x<sup>(k)</sup> = 6

### Calculating x<sup>(k+1)</sup>
x<sup>(k+1)</sup> = x<sup>(k)</sup> - t∇f(x<sup>(k)</sup>)

x<sup>(k+1)</sup> = -6 - 0.8(2)(-6)

x<sup>(k+1)</sup> = 3.6

### Visualization
The graph below shows these two iterations.

![Gradient descent for f(x)=x^2](descent_example.svg)
