# Libft

*The first 42 common core project. A library of C functions that will be useful in my future 42 projects.*

### General requirements
1. The projects must be written in C language.
2. The code must be written in accordance with the [Norm (Norminette)](https://github.com/42School/norminette.).
3. Functions should not quit unexpectedly (segmentation fault, bus error, double free…).
4. All heap allocated memory space must be properly freed when necessary. No leaks are tolerated.
5. A Makefile is required, which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and your Makefile must not relink.
6. Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
7. The project must be submitted in a provided git repository. Only the work in the git repository will be graded.

### Technical rules
1. Declaring global variables is forbidden.
2. If helper functions are needed, they must be declared as *”static”*. This way, their scope will be limited to the appropriated file.
3. The command *”ar”* must be used to create the library.

## Library Functions
### C Standard library functions (libc)
- ft_isalpha *< int isalpha (int c) >*: Returns true if c is an alphabetic character (a letter).
- ft_toupper *< int toupper (int c) >*: If c is a lower-case letter, toupper returns the corresponding upper-case letter. Oth- erwise c is returned unchanged.
- ft_isdigit *< int isdigit (int c) >*: Returns true if c is a decimal digit (‘0’ through ‘9’).
- ft_tolower *< int tolower (int c) >*: If c is an upper-case letter, tolower returns the corresponding lower-case letter. If c is not an upper-case letter, c is returned unchanged.
- ft_isalnum *< int isalnum (int c) >*: Returns true if c is an alphanumeric character (a letter or number).
- ft_isascii *< int isascii (int c) >*: Returns true if c is a 7-bit unsigned char value that fits into the US/UK ASCII character set.
- ft_isprint *< int isprint (int c) >*: Returns true if c is a printing character. Printing characters include all the graphic characters, plus the space (‘ ’) character.
- ft_strchr *< char \* strchr (const char \*string, int c) >*: The strchr function finds the first occurrence of the byte c (converted to a char) in the string beginning at string. The return value is a pointer to the located byte, or a null pointer if no match was found.
- ft_strrchr *< char \* strrchr (const char \*string, int c) >*: The function strrchr is like strchr, except that it searches backwards from the end of the string string (instead of forwards from the front).
- ft_strlen *< size_t strlen (const char \*s) >*: The strlen function returns the length of the string s in bytes. (In other words, it returns the offset of the terminating null byte within the array.).
- ft_strncmp *< int strncmp (const char \*s1, const char \*s2, size_t size) >*: This function is the similar to strcmp, except that no more than size bytes are compared. In other words, if the two strings are the same in their first size bytes, the return value is zero.
- ft_memset *< void \* memset (void \*block, int c, size_t size) >*: This function copies the value of c (converted to an unsigned char) into each of the first size bytes of the object beginning at block. It returns the value of block.
- ft_memcmp *< int memcmp (const void \*a1, const void \*a2, size_t size) >*: The function memcmp compares the size bytes of memory beginning at a1 against the size bytes of memory beginning at a2. The value returned has the same sign as the difference between the first differing pair of bytes (interpreted as unsigned char objects, then promoted to int).
- ft_bzero *< void bzero (void \*block, size_t size) >*: This is a partially obsolete alternative for memset, derived from BSD. Note that it is not as general as memset, because the only value it can store is zero.
- ft_memcpy *< void \* memcpy (void \*restrict to, const void \*restrict [Function] from, size_t size) >*: The memcpy function copies size bytes from the object beginning at from into the object beginning at to. The behavior of this function is undefined if the two arrays to and from overlap. The value returned by memcpy is the value of to.
- ft_strlcpy *< size_t strlcpy (char \*restrict to, const char \*restrict [Function] from, size_t size) >*: This function copies the string from to the destination array to, limiting the result’s size (including the null terminator) to size.
- ft_strcat *< char \* strcat (char \*restrict to, const char \*restrict [Function] from) >*: The strcat function is similar to strcpy, except that the bytes from from are con- catenated or appended to the end of to, instead of overwriting it. That is, the first byte from from overwrites the null byte marking the end of to.
- ft_strnstr *<  >*:
- ft_atoi *< int atoi (const char \*string) >*: Returns an Integer interpretation of the received string.
- ft_calloc *< void \* calloc (size_t count, size_t eltsize) >*: This function allocates a block long enough to contain a vector of count elements, each of size eltsize. Its contents are cleared to zero before calloc returns.
- ft_strdup *< char \* strdup (const char \*s) >*: This function copies the string s into a newly allocated string. The string is allocated using malloc.

### Addtional Functions
- ft_substr *< char \*ft_substr(char const \*s, unsigned int start, size_t len) >*: Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
- ft_strjoin *< char \*ft_strjoin(char const \*s1, char const \*s2) >*: Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
- ft_strtrim *< char \*ft_strtrim(char const \*s1, char const \*set) >*: Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
- ft_split *< char \*\*ft_split(char const \*s, char c) >*: Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.  The array must end with a NULL pointer.
- ft_itoa *< char *ft_itoa(int n) >*: Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
- ft_strmapi *< char \*ft_strmapi(char const \*s, char (\*f)(unsigned int, char)) >*: Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.
- ft_striteri *< void ft_striteri(char \*s, void (\*f)(unsigned int, char\*)) >*: Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument.  Each character is passed by address to ’f’ to be modified if necessary.
- ft_putchar_fd *< void ft_putchar_fd(char c, int fd) >*: Outputs the character ’c’ to the given file descriptor.
- ft_putstr_fd *< void ft_putstr_fd(char \*s, int fd) >*: Outputs the string ’s’ to the given file descriptor.
- ft_putendl_fd *< void ft_putendl_fd(char \*s, int fd) >*: Outputs the string ’s’ to the given file descriptor followed by a newline.
- ft_putnbr_fd *< void ft_putnbr_fd(int n, int fd) >*: Outputs the integer ’n’ to the given file descriptor.

### Bonus part
A bundle of C functions to manipulate lists.
It is mandatory the usage of the following struct:
“Struct!!”
- content: The data contained in the node.
- next: The address of the next node, or NULL if the next node is the last one.

#### Functions
- ft_lstnew *< t_list \*ft_lstnew(void \*content) >*: Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’.  The variable ’next’ is initialized to NULL.
- ft_lstadd_front *< void ft_lstadd_front(t_list \*\*lst, t_list \*new) >*: Adds the node ’new’ at the beginning of the list.
- ft_lstsize *< int ft_lstsize(t_list \*lst) >*: Counts the number of nodes in a list.
- ft_lstlast *< t_list \*ft_lstlast(t_list \*lst) >*: Returns the last node of the list.
- ft_lstadd_back *< void ft_lstadd_back(t_list \*\*lst, t_list \*new) >*: Adds the node ’new’ at the end of the list.
- ft_lstdelone *< void ft_lstdelone(t_list \*lst, void (\*del)(void\*)) >*: Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node.  The memory of ’next’ must not be freed.
- ft_lstclear *< void ft_lstclear(t_list \*\*lst, void (\*del)(void\*)) >*: Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.
- ft_lstiter *< void ft_lstiter(t_list \*lst, void (\*f)(void \*)) >*: Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
- ft_lstmap *< t_list \*ft_lstmap(t_list \*lst, void \*(\*f)(void \*), void (\*del)(void \*)) >*: Iterates the list ’lst’ and applies the function ’f’ on the content of each node.  Creates a new list resulting of the successive applications of the function ’f’.  The ’del’ function is used to delete the content of a node if needed.
