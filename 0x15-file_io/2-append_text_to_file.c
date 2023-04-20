#include "main.h"

/**
 * append_text_to_file-function that appends text at the end of the file.
 * @filename: filename.
 * @text_content: ad or append content.
 *
 * Return: 1 if successful and -1 if not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fa;
	int bletters;
	int rwr;

	if (filename == NULL)
		return (-1);

	fa = open(filename, O_WRONLY | O_APPEND);

	if (fa == -1)
		return (-1);

	if (text_content)
	{
		for (bletters = 0; text_content[bletters]; bletters++)
			;

		rwr = write(fa, text_content, bletters);

		if (rwr == -1)
			return (-1);

	}

	close(fa);

	return (1);
}
