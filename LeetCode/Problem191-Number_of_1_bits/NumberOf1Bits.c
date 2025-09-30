#include <stdio.h>
#include <stdint.h>

int hammingWeight(uint32_t n) {
    
  int size = sizeof(n);

  int counter = 0;
  for (int i=0; i<32; i++) {
    // printf("This is the %d-th bit : %d\n",i,(n>>i)&1);
    if ((n>>i)&1 == 1){
      counter += 1;
    }
  }
  
  return counter;

}

int main() {

    uint32_t t = 00000000000000000000000000001011;
    int x = hammingWeight(t);

    uint32_t t2 = 11111111111111111111111111111101;
    int y = hammingWeight(y);

    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}