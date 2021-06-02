# ↪️ get_next_line

## 🧐 Description
Get_next_line is a function that reads from a file, stdin or stdout and allows you to read one line from a file descriptor.
Calling the function once reads a single line from the file, and calling the function in a loop will allow you to read the file one line at a time until the EOF.
This project teaches a great deal on memory allocation. That is, when to allocate memory and when to free it in order to prevent memory leaks.

A (-1) is returned if an error occurred. A (0) is returned if the EOF is read. And a (1) is returned if a line is read.

## 🔧 Usage
You need to specify a BUFFER_SIZE of your choosing. To compile, use:

`gcc get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<number> <your file>`
