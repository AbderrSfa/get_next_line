# get_next_line
Get_next_line is a function that reads from a file, stdin or stdout and allows you to read one line from a file descriptor.
Calling the function once reads a single line from the file, and calling the function in a loop will allow you to read the file one line at a time until the EOF.
This project teaches a great deal on memory allocation. That is, when to allocate memory and when to free it in order to prevent memory leaks.

A (-1) is returned if an error occurred. A (0) is returned if the EOF is read. And a (1) is returned if a line is read.
