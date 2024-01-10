#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the input integer
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check if number is prime
 * @n: the number to be checked
 * @i: the iteration time
 * Return: 1 if prime, 0 otherwise
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i < n)
		return (0);

	if (n / i < i)
		return (1);

	return (check_prime(n, i + 1));
}
