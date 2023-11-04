#include "main.h"

/**
 * main - Entry point
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	data_shell datash;
	(void) ac;

	signal(SIGINT, get_sigint);
	set_structure_data(&datash, av);
	loop_through(&datash);
	free_data_held(&datash);
	if (datash.status < 0)
		return (255);
	return (datash.status);
}
