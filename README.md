The Sieve of Eratosthenes
=========================



An implementation of the Sieve of Eratosthenes in C. 

To use: compile (use -lm with gcc) and run the executable. The pogram will 
calculate primes up to (non-inclusive) the entered number.

It also prompts for whether or not you want to print the output. It prints in chunks
beause it prints "when it finds the primes".

The program also gives you the calculation time- this will be much higher if
you print. You can see some commented out code- feel free to remove the prints
in the algorithm and un-comment the other prints to print the primes independently
of calculation.

It segfaults for me when I try numbers near a billion- probably just because calculating
primes below a billion would take +3GB just to hold the data (stored as longs).

This program isn't super fast, but I love the algorithm.

More info on the Sieve of Eratosthenes at [its Wikipedia page.](http://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
