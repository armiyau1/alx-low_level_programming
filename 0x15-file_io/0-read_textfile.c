#include "main.h"
#include <stdlib.h>

/**
*  * read_textfile: Read text file print to STDOUT.
*   * @filename: text file that is going to be  read
*    * @letters: number of letters to be read
*     * returns the actual number of letters it could read and print
*      *return 0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *temp;
ssize_t fd;
ssize_t w;
ssize_t t;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
temp = malloc(sizeof(char) * letters);
t = read(fd, temp, letters);
w = write(STDOUT_FILENO, temp, t);

free(temp);
close(fd);
return (w);
}

