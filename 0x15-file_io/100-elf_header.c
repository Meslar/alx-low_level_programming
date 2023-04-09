#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s source_file dest_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *source_file = fopen(argv[1], "rb");
    if (source_file == NULL) {
        fprintf(stderr, "Error: Cannot open source file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    FILE *dest_file = fopen(argv[2], "wb");
    if (dest_file == NULL) {
        fclose(source_file);
        fprintf(stderr, "Error: Cannot open destination file %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    char buffer[1024];
    size_t num_read;
    while ((num_read = fread(buffer, 1, sizeof(buffer), source_file)) > 0) {
        if (fwrite(buffer, 1, num_read, dest_file) != num_read) {
            fprintf(stderr, "Error: Cannot write to destination file %s\n", argv[2]);
            fclose(source_file);
            fclose(dest_file);
            exit(EXIT_FAILURE);
        }
    }

    if (fclose(source_file) != 0) {
        fprintf(stderr, "Error: Cannot close source file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if (fclose(dest_file) != 0) {
        fprintf(stderr, "Error: Cannot close destination file %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    return 0;
}

