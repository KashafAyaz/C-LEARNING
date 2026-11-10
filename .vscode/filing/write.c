#include <stdio.h>
int main(void){
//other modes ->read,append  etc 
FILE *fp = fopen("greeting.txt","w"); //writing a new file -> overwriting the content of the existing file
if(fp == NULL){ //FILE is a datatype defined in stdio.h ,*fp is a pointer to FILE,fopen() is a function to open a file in a specific mode, it returns NULL if the file cannot be opened
    printf("Error opening file\n"); //w is used to write a new file, if the file already exists, it will be overwritten, if the file does not exist, it will be created
    return 1; //null pointer check is important to avoid segmentation fault, it is a good practice to check if the file was opened successfully before performing any operations on it
}
fprintf(fp,"Hello, NED UNIVERSITY!\n"); //fprintf() is a function to write formatted output to a file, it takes a FILE pointer as the first argument, followed by a format string and the values to be written
fprintf(fp,"File handling in C is easy!\n");
fclose(fp); //fclose() is a function to close a file, it takes a FILE pointer as an argument, it is important to close a file after opening it to free up resources and avoid memory leaks
printf("Data written to greeting.txt.\n");
return 0;
}