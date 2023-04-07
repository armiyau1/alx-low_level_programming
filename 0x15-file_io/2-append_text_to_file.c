#include "main.h"
/**
*  * append_text_to_file - this is used to  Appends text at the end of a file.
*@filename: the name of the file to create
*@text_content:this contains the things we are going to write in file.
*      * Return: If the function later  fails or filename is NULL -1.
*If the file does not exist the user does not have the permissions to write -1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, length = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (length = 0; text_content[length]);
length++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, length;
if (o == -1 || w == -1)
{
return (-1);
}
close(o);
return (1);
}
