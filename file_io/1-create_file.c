#include "main.h"
/**
 * create_file - read a file
 * @filename: name of the file
 * @text_content: content to the file
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int file, i;

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (text_content == NULL)
		return (1);

	if (file == -1 || filename == NULL)
		return (-1);

	for (i = 0; text_content[i]; i++)
	;
	write(file, text_content, i);
	close(file);
	return (1);
}
