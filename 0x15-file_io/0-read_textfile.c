#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the fliename .
 * @letters: The amount of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         Op/wte - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wte;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wte = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wte == -1 || wte != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wte);
}
