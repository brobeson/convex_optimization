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

## Example of Backtracking
This section uses the gradient descent example to demonstrate backtracking. This example goes
through backtracking for one iteration of gradient descent: _x<sup>(k-1)</sup>_ to
_x<sup>(k)</sup>_. The algorithm is

### Given
- f(x) = x<sup>2</sup>
- ∇f(x) = 2x
- x = x<sup>(k-1)</sup> = 10
- t<sub>init</sub> = 0.8
- α = β = 0.5

### Check the Condition
f[x - t∇f(x)] > f(x) - αt||∇f(x)||<sub>2</sub><sup>2</sup>

[10 - 0.8(2)(10)]<sup>2</sup> > 10<sup>2</sup> - 0.5(0.8)||2(10)||<sub>2</sub><sup>2</sup>

(10 - 16)<sup>2</sup> > 100 - 0.4(20<sup>2</sup>)

(-6)<sup>2</sup> > 100 - 0.4(400)

36 > 100 - 160

36 > -60

### The condition is true, so adjust _t_ and recalculate:

t = βt<sub>init</sub> = 0.5(0.8) = 0.4

f[x - t∇f(x)] > f(x) - αt||∇f(x)||<sub>2</sub><sup>2</sup>

[10 - 0.4(2)(10)]<sup>2</sup> > 10<sup>2</sup> - 0.5(0.4)||2(10)||<sub>2</sub><sup>2</sup>

(10 - 8)<sup>2</sup> > 100 - 0.2(20<sup>2</sup>)

(2)<sup>2</sup> > 100 - 0.2(400)

4 > 100 - 80

36 > 20

### The condition is false, so calculate _x<sup>(k)</sup>_:

x<sup>(k)</sup> = x<sup>(k-1)</sup> - t∇f(x<sup>(k-1)</sup>)

x<sup>(k)</sup> = 10 - 0.4(2)(10)

x<sup>(k)</sup> = 2
