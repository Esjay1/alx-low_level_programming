#include "main.h"

/**
 * isprime - test if the number is a prime number
 * @a: the tested number
 * @b: the denominator
 *
 * Return: 1 if prime, 0 otherwise
 */
int isprime(int a, int b)
{
	if ((a <= 1) || (((a % b) == 0) && (a != b)))
	{
		return (0);
	}
	if (a == b)
	{
		return (1);
	}
	return (isprime(a, (b + 1)));
}

/**
 * is_prime_number - Function to get prime numbers
 * @n: the integer to be tested if it is prime
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (isprime(n, 2));
}
