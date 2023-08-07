#include "main.h"
/**
 * append_text_to_file - appends text at the end of file
 *
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 Success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t file;

	if (!filename)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, strlen(text_content));

	return (1);
}
