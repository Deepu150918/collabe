#include <stdio.h>
void mesaage(void) {
  printf("Hello Ruka you are beautifull!!\n");
}

void table(int value) {
  for (int idx = 1; idx < 11; ++idx) {
    printf("%d x %d = %d\n", value, idx, value * idx);
  }
}

int main() {
  printf("Hello Mamma\n");
  // adding comment here
  return 0;
}