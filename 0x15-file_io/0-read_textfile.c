#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* read_txtfile.reads a text file
* @filename:the name of the file to be read
* @letters:the highest number of letters to read and printf)
* return:returns the actual number of letters it could read and print or else return 0
*/
ssize_t read_textfile (const char *filename, size_t letters)
{
FILE *fptr = fopen (filename, "r"); 
if (fptr == NULL)
{
return (0);
}
char *temp  = (char *)malloc(letters + 1);
if (temp == NULL)
{
fclose(fptr);
return (0);
}
size_t cal = 0;
while (cal < letters && fgets(temp, letters + 1, fptr) != NULL)
{
ssize_t read = strlen(temp);
ssize_t bytes_written = fwrite(temp, sizeof(char), read, stdout);
if(bytes_written != read)
{
free(temp);
fclose (fptr);
return (0);
}
cal += bytes_written;
}
free(temp);
fclose(fptr);
return (cal);
}
