#include "main.h"

/**
 *read_textfile-reads a text file and prints it to the POSIX standard output.
 *@filename: argument of the function.
 *@letters: number of letters in the file.
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	rd = read(fp, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fp);

	free(buffer);

	return (wr);
}
