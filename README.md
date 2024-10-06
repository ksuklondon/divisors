# Divisors

Finding divisors of a given number.  
For example 50 has dividers: 1, 2, 5, 10, 25, 50.

The solution consist of three projects:
* _DivisorsLib_ - library containing `divisors` function,
* _DivisorsUnitTest_ - unit test for `divisors` function,
* _DivisorsApp_ - sample aplication calling `divisors` function.

## Task 1
* Measure the `divisors` function execution time for numbers with large values: 10<sup>7</sup>, 10<sup>8</sup>, 10<sup>9</sup> ...
* Draw a graph of the dependence of the execution time on the value of the number.
* What is the nature of the drawn relationship (linear, square, square root, exponential)?
* Estimate the execution time of the `divisors` function for 10<sup>18</sup> (give the time in years).

## Task 2
* Tweak the `divisors` function implementation so that it has less complexity.
* Measure the `divisors` function execution time for numbers with large values:
 10<sup>10</sup>, 10<sup>15</sup>, 10<sup>16</sup>, 10<sup>17</sup>, 10<sup>18</sup>.
* Draw a graph of the dependence of the execution time on the value of the number.
* What is the nature of the drawn relationship (linear, square, square root, exponential)?

Divisors must be placed in ascending order in the returned collection.  
The given divisor may appear only once in the resulting collection.

Tip: If A is a divisor of N, then N/A is also the divisor of N. Unit tests will help you verify that the `divisors` function is working properly.