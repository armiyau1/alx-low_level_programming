#include "main.h"

/**
*  * create_file - this isnto create a file.
*   * @filename:the name  of the file to create.
*    * @text_content: this signifies what to qfite to thw file
*     *
*      * Return: -1 should bw returned on failure else retuen 1.
*/
int create_file(const char *filename, char *text_content)
{
int f, w, length = 0;
if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}

f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(f, text_content, length);

if (f == -1 || w == -1)
return (-1);
close(f);
return (1);
}
