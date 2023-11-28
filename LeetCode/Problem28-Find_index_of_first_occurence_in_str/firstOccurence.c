#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    
    int i = strlen(haystack);
    int k = strlen(needle);

    if (i < k) {
      return -1;
    }

    int firstIndex = -1;

    for (int j = 0; j < i; j++) {

      int found = 1;

      for (int x = 0; x < k; x++) {
        if (needle[x] != haystack[j + x]){
          found = 0;
          break;
        }
      }

      if (found == 1) {
        return j;
      }
    }

    return -1;

}

int main () {

    strStr("sadbutsad", "sad");

    strStr("Leetcode", "Leeto");

    return 0;


}