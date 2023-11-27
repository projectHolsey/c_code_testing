#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// This is the API key for 'directions' - holsey.matthew
const char *my_api_key = "AIzaSyCHGKCIPMOXVXzoFa2S0IpWypPCyUmc5Mc";

int find_home() {
    
    return 0;
}

int find_work() {
    return 0;
}

int main(int argc, char *argv[]) {

    char example_url[1000];

    printf("/n");

    sprintf(example_url, "https://maps.googleapis.com/maps/api/directions/json?origin=Disneyland&destination=Universal+Studios+Hollywood&key=%s", my_api_key);
    printf("%s", example_url);


    if (argv[1] != NULL) {
        if (strcmp(argv[1], "work") == 0) {
                printf("Looking for route to work");
                find_work();
                return 0;
            }

        if (strcmp(argv[1], "home") == 0) {
            printf("Looking for route home");
            find_home();
            return 0;
        }
    }

    // printf("/n%s", argv[1]);

    // printf("No args supplied");
    return 0;
}