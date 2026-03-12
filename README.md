_Project finished on november fourth 2025._\
_Score : 125/100_

# Libft

---

To see my entire 42 curriculum : [click here](https://github.com/naha7777)

---

## Purpose
In this project we will build a custom C library to reuse it in other projects.\
We must rewrite functions, learn how to create a `Makefile` to automate compilation and generate a `static library` : `libft.a` and using header files `.h`.

# Functions:

## ISALPHA <ctype.h>
Tests if character c is alphabetic, returns != 0 if yes, 0 if no. (A-Z, a-z)

## ISDIGIT <ctype.h>
Tests if c is a digit ('0' to '9')

## ISALNUM <ctype.h>
Tests if c is alphanumeric (A-Z, a-z or 0-9)

## ISASCII <ctype.h>
Tests if the value of c is a valid ASCII character. (0-127)

## ISPRINT <ctype.h>
Tests if a character is printable, i.e. visible on screen (space included), (32-126).

## STRLEN <string.h> (String Length)
Returns the length of a string (not counting '\0').

## MEMSET <string.h> (Memory Set)
Fills a memory area of n bytes with the given value.
Often used to initialize a memory area to 0.

## BZERO <strings.h> (Byte Zero)
Sets n bytes to 0 in the memory pointed to by ptr.
Bzero is not standard ISO C, memset is preferred.

## MEMCPY <string.h> (Memory Copy)
Copies n bytes from memory area src to memory area dest.

## MEMMOVE <string.h> (Memory Move)
Copies n bytes from src to dest even if the areas overlap.
Safer than memcpy.

## STRLCPY <string.h> (String Length Copy)
Copies a source string into dest while avoiding overflows. Returns the length of src, not the number of characters copied.

## STRLCAT <string.h> (String Length Concatenate)
Appends src to the end of dest, without exceeding size. Returns the total length the string would have had if it had not been truncated.

## TOUPPER <ctype.h> (To Uppercase)
Converts a character to uppercase ('a' -> 'A').

## TOLOWER <ctype.h> (To Lowercase)
Converts a character to lowercase.

## STRCHR <string.h> (String Character)
Searches for the 1st occurrence of a character in string str. Returns a pointer to the found character or NULL if not present.

## STRRCHR <string.h> (String Reverse Character)
Searches for the last occurrence of character c in string str.

## STRNCMP <string.h> (String Compare n)
Compares n characters of 2 strings S1 and S2 based on ASCII code.
0 : S1 = S2
less than 0 : S1 < S2
greater than 0 : S1 > S2

## MEMCHR <string.h> (Memory Character)
Searches for the 1st occurrence of byte c in the first n bytes of the memory block pointed to by ptr.
!= strchr because it does not stop at '\0'.

## MEMCMP <string.h> (Memory Compare)
Compares the first n bytes of 2 memory blocks.
0 if the 2 blocks are identical over n bytes
less than 0 if ptr1 is less than ptr2
greater than 0 if ptr1 is greater than ptr2

## STRNSTR <string.h>
Searches for the 1st occurrence of substring little in string big, but only within the first len characters of big.
Returns a pointer to the start of the found substring.

## ATOI <stdlib.h> (ASCII to Integer)
Converts a string to an integer (int).
Ignores spaces, recognizes a sign then reads digits.

## CALLOC <stdlib.h> (Contiguous Allocation)
Dynamically allocates memory (malloc) for an array of nmemb elements of size bytes each, and initializes all bytes to 0.
ex: calloc(5, sizeof(int)) -> allocates 5 integers initialized to 0.
Useful for:
- avoiding indeterminate values after allocation,
- ensuring array values start at 0,
- initializing pointers to NULL.
Setting bytes to 0 guarantees a clean and predictable start.

## MALLOC <stdlib.h>
Dynamically allocates a memory block of size bytes.
Always check that malloc != NULL and always free().

## STRDUP <string.h> (String Duplicate)
Creates a copy in dynamic memory of a string.

## SUBSTR (Substring)
Creates an allocated substring from string s, starting at index start and copying at most len characters.

## STRJOIN
Concatenates 2 strings (s1+s2) into a new allocated string.

## STRTRIM
Creates a new allocated string by removing the characters present in set from the beginning and end of s1.
ex: set = "*" and s1 = "*hel*lo*" => "hel*lo"

## SPLIT
Splits string s into an array of separately allocated substrings, using separator c.

## ITOA (Integer to ASCII)
Converts an integer (int) to a string.

## STRMAPI (String Map Indexed)
Creates a new allocated string where each character of s is transformed by function f (unsigned int i, char c).

## STRITERI (String Iterate Indexed)
Applies function f to each character of string s (unsigned int, char *).

STRMAPI -> creates a new string
!=
STRITERI -> modifies the original string

## PUTCHAR_FD
Writes a single character c to a file descriptor fd.

### Standard descriptors:
standard input stdin 0
standard output stdout 1
standard error stderr 2
ex: `ft_putchar_fd('A', 1);` = writes A to standard output.

## PUTSTR_FD
Writes a string to file descriptor fd.

## PUTENDL_FD
Writes a string and a newline to file descriptor fd.

## PUTNBR_FD
Writes an integer n as text to file descriptor fd.

---

# Bonus Functions:

## LSTNEW
Creates a new node.

## LSTADD_FRONT
Adds the new node at the beginning of the list.

## LSTADD_BACK
Adds the new node at the end of the list.

## LSTSIZE
Counts the number of nodes in the list.

## LSTLAST
Returns the last node of the list.

## LSTDELONE
Frees the node's content using the del function
