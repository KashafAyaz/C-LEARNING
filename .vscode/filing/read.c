#include <stdio.h>
int main(void) {
    char line[100]; // Buffer to hold the line read from the file
    FILE *fp = fopen("greeting.txt", "r"); // Open the file in read mode
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }  //sizeof() is a function that returns the size of a data type or variable in bytes. In this case, sizeof(line) returns the size of the line array, which is 100 bytes. This is used to ensure that fgets() does not read more characters than the buffer can hold, preventing buffer overflow and potential security vulnerabilities.
    //fgets(line, sizeof(line), fp);  //fgets() is a function to read a line from a file, it takes a buffer to store the line, the size of the buffer, and the FILE pointer as arguments. It reads until a newline character or EOF is encountered, and adds a null terminator at the end of the string. It returns NULL if an error occurs or if EOF is reached before any characters are read.
    //printf("Read from file: %s", line); 
    while (fgets(line, sizeof(line), fp) != NULL) { //fgets() returns NULL when it reaches the end of the file or encounters an error. The while loop continues to read lines from the file until fgets() returns NULL, indicating that there are no more lines to read.
        printf("%s", line); 
    }
 //%s is a format specifier used in printf() to print a string. It expects a pointer to a null-terminated character array (string) as an argument. The string is printed until the null terminator is encountered.
    fclose(fp); // Close the file
    return 0;
} //its going to stop reading after the first line because fgets() reads until a newline character.