#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
/* Declare file descriptor, read/write bytes, and buffer */
ssize_t file_descriptor, bytes_read, bytes_written;
char *buffer;

/* Check if the filename is NULL */
if (filename == NULL)
return (0);
/* Allocate memory for the buffer */
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
/* Open the file for reading */
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
{
free(buffer);
return (0);
}
/* Read from the file into the buffer */
bytes_read = read(file_descriptor, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(file_descriptor);
return (0);
}
/* Write the contents of the buffer to STDOUT */
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(file_descriptor);
return (0);
}
free(buffer);
close(file_descriptor);
return (bytes_written);
}

