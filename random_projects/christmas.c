#include <stdio.h>
#include <time.h>

int main() {
    // Get the current date and time
    time_t now;
    struct tm christmas;
    time(&now);

    // Set the date for Christmas (December 25th of the current year)
    christmas = *localtime(&now);
    christmas.tm_mon = 11;  // December is month 11 (0-based)
    christmas.tm_mday = 25;

    // Calculate the difference in seconds between now and Christmas
    double seconds_remaining = difftime(mktime(&christmas), now);

    // Calculate the number of days remaining
    int days_remaining = (int)(seconds_remaining / (24 * 60 * 60));

    if (days_remaining < 0) {
        printf("Christmas has already passed this year!\n");
    } else if (days_remaining == 0) {
        printf("Merry Christmas!\n");
    } else {
        printf("Days until Christmas: %d\n", days_remaining);
    }

    return 0;
}
