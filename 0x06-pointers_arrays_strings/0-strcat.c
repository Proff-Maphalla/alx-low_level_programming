Task 0.txt

Who has access

A

System properties

Type

Text

Size

468 bytes

Storage used

468 bytes

Location

0x06-pointers_arrays_strings

Owner

Antony Bahati

Modified

01:02 by Antony Bahati

Opened

04:55 by me

Created

01:05

No description

Viewers can download

#include "main.h"



/**

 *_strcat - concatenates  the string pointed to by @src to

 * the end of the string pointed to by @dest

 *@dest: String that will be appended

 *@src: String to be concatenated upon

 *

 * Return: returns poiner to @dest

 */



char *_strcat(char *dest, char *src)

{



	int index = 0, dest_len = 0;



	while (dest[index++])

		dest_len++;



	for (index = 0; src[index]; index++)

		dest[dest_len++] = src[index];



	return (dest);

}
