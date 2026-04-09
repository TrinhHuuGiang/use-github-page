#include <stdio.h>
#include <stdlib.h>

int append_file(FILE *out, const char *filename) {
    FILE *in = fopen(filename, "r");
    if (!in) return 0;

    int c;
    while ((c = fgetc(in)) != EOF) {
        fputc(c, out);
    }
    fclose(in);

    // append newline each file
    fputc('\n', out);
    return 1;
}

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("Usage: %s [output_file] [input1] [input2 ...]\n", argv[0]);
        return 1;
    }
        // open to write, truncate to 0 size, create new if not exist
    FILE *out = fopen(argv[1], "w");
    if (!out) {
        perror("Cannot open output file");
        return 1;
    }

    for (int i = 2; i < argc; i++) {
        if (!append_file(out, argv[i])) {
            fprintf(stderr, "Failed to append %s\n", argv[i]);
        }
    }


    fclose(out);
    printf("Done! Output written to %s\n--------------------\n", argv[1]);
    return 0;
}