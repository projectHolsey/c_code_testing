/**
 * This is basically how strcat works under the hood
 * 
 * Move the pointer to the end of the destiation char array
 * 
 * Loop through the src char array and add them onto the end of the destination char array
 * 
 * add the end of string terminator
 * 
 * // Note in this example the destination buffer is way larger than the string
 * // normally we might have to allocate more memory to this destination character arrat string
 * 
 */


#include <stdio.h> // For printf (optional, for testing)
#include <stddef.h> // For size_t (optional, for more robust string handling)

char *my_strcat(char *dest, const char *src) {
    char *original_dest = dest; // Store the original starting address of dest

    // Find the end of the destination string
    while (*dest != '\0') {
        dest++;
    }

    // Copy characters from src to dest, starting after dest's original null terminator
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Add the null terminator to the end of the concatenated string
    *dest = '\0';

    return original_dest; // Return a pointer to the beginning of the modified dest string
}

int main() {
    char buffer[100] = "Hello, ";
    const char *world = "World!";

    printf("Before concatenation: %s\n", buffer);
    my_strcat(buffer, world);
    printf("After concatenation: %s\n", buffer);

    char empty_dest[50] = "";
    const char *first_word = "First";
    my_strcat(empty_dest, first_word);
    printf("Empty dest + First: %s\n", empty_dest);

    const char *second_word = " Second";
    my_strcat(empty_dest, second_word);
    printf("First + Second: %s\n", empty_dest);

    return 0;
}