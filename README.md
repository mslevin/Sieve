The Sieve of Eratosthenes
=========================

**From Wikipedia:**
>In mathematics, the sieve of Eratosthenes, one of a number of prime number 
>sieves, is a simple, ancient algorithm for finding all prime numbers up to 
>any given limit. It does so by iteratively marking as composite (i.e. not 
>prime) the multiples of each prime, starting with the multiples of 2.

---

An implementation of the Sieve of Eratosthenes in C. 

To use: compile (use -lm with gcc) and run the executable. The pogram will 
calculate primes up to (non-inclusive) the entered number.

It also prompts for whether or not you want to print the output. It prints in chunks
beause it prints "when it finds the primes".

The program also gives you the calculation time- this will be much higher if
you print the results. Of course, then its somewhat useless.

*There was another printing method in there, but I removed it because I'm an idiot.*

It segfaults for me when I try numbers near a billion- probably just because calculating
primes below a billion would take +3GB just to hold the data (stored as longs).

This program isn't super fast, but I love the algorithm.

More info on the Sieve of Eratosthenes at [its Wikipedia page.](http://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
