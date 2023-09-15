#include "main.h"

/**
 * custom_exit - Function to handle custom shell program termination.
 * @arg: Array of strings representing command line with arguments.
 * @line: The user input command.
 * @exitstatus: Exit status for the shell program.
 */
void custom_exit(char *arg[], char *line, int exitstatus)
{
	if (arg[1])
	{
		if (is_valid_exit_number(arg[1]))
		{
			exitstatus = atoi(arg[1]);
		}
		else
		{
			fprintf(stderr, "./shell: exit: invalid exit code: %s\n", arg[1]);
			exitstatus = 2;
		}
	}
	else if (exitstatus == -1)
	{
		exitstatus = EXIT_SUCCESS;
	}

	free(line);
	exit(exitstatus);
}
/**
 * valid_exit - checks if the argument is a valid exit code or not
 * @arg: argument
 * Return: 1 if it's a valid exit code, 0 otherwise
 */
int valid_exit(char *arg)
{
	if (arg[0] != '-' && is_numeric(arg))
		return (1);
	else
		return (0);
}
