## Problem 10
### Summation of primes

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

## Solution comments

10-slow.c is a brute force solution that takes a couple seconds to run

10-fast.c uses a sieve of Eratosthenes with the primality of the numbers in the list represented by 1 byte each (wasting 7/8ths of the memory)

10.c is 10-fast.c but with bit-hacking to only use 1 bit per number in the primality list. It uses an eighth of the memory at the cost of extra operations per access. High compiler optimization (gcc -O3) manages to get it as fast as 10-fast.c anyway though.
