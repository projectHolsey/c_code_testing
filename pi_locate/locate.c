#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char path[1035];

    /* Open the command for reading. */
    fp = popen("nmap 10.0.0.0/24", "r");
    if (fp == NULL) {
        printf("Failed to run command\n" );
        exit(1);
    }

    /* Read the output a line at a time - output it. */
    while (fgets(path, sizeof(path), fp) != NULL) {
        printf("%s", path);
    }

    /* close */
    pclose(fp);

    return 0;
}