# Chapter 4 Expressions
## Section 4.1
#### Exercise 1
In this exercise we show the output by each of the following program fragments, we assume that i, j and k are int integers. you can see the [source file](./Exercise4_1_1.c).

- The first exercise of this file, you can check that the Binary Multiplicative division return 1, because both variables are integers, and the remainder is 2 the left over.
- The second is an arithmetic operation between 12 / 3 but the remainder is an integers that's why the output return 0.
- The third compilation returns 1, this is an interesting compilation in C because the Binary Multiplicative division between k / j is equal to 1 but the compiler does not made this Binary operation secondly, otherwise the first step in the compiler was 17 % 8 or (i + 10) % 9 and this return 8 and the last compilation in this row is 8 / 8, that's why the output return 1.
- The last exercise as the exercise before, the compiler made the first two parenthesis operations and then the Binary Division, the output was 0 because the remainder result was 2 and the value of 2 / 3 returns 0 the dividen is smaller than the divisor.

#### Exercise 2  
If i and j are positive integers, does(-i/j) always have the same value as -(i/j)? We are justify the answer here:

#### Project 1
We wrote a program that asks the user to enter a two-digit number, then prints the number with its digits reversed. A session with the program have the following appearance:

> Enter a two-digit number: 28
> The reversal is: 82

You can check the algorithm of the code [Project 1](./Project1.c)

#### Project 2