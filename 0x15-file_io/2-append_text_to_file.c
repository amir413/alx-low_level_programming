#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content) {
    // check if filename is NULL
    if(filename == NULL) {
        return -1;
    }

    // open the file in append mode
    FILE *file = fopen(filename, "a");

    // check if the file was opened successfully
    if(file == NULL) {
        return -1;
    }

    // check if text_content is not NULL
    if(text_content != NULL) {
        // write the text_content to the file
        int result = fputs(text_content, file);
        if (result == EOF) {
            // Close the file before returning
            fclose(file);
            return -1;
        }
    }

    // close the file
    fclose(file);

    // return success
    return 1;
}
