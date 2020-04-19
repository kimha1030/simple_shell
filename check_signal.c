#include "holberton.h"

/**
 * check_signal - check signal for to ctrl+c
 * @sig_num: sinal for the orden
 * Return: Always 0.
 */

void check_signal(int sig_num)
{
	(void)sig_num;
	signal(SIGINT, check_signal);
}
