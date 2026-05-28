#include <stdio.h>

int main(){
    // Open the file in append mode
    FILE *file = fopen("file.txt", "a");
    if (file == NULL) {
        printf("Error opening file.txt\n");
        return 1;
    }
    const char *data_to_append = "This is the new data to append.\n";
    // Append data to the file
    if (fputc(text))
    {
        /* code */
    }
    
    return 0;
}