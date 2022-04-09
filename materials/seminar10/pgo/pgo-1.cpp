#include <iostream>
#include <algorithm>
#include <stdlib.h>

const size_t MB = 1024*1024;
size_t MOD = 0;

unsigned char uniqueNumber () {
  static unsigned char number = 0;
  return ++number % MOD;
}

int main(int argc, char** argv) {
  if (argc < 3) {
    return 1;
  }

  size_t BLOCK_SIZE = atoi(argv[1]) * MB;
  MOD = atoi(argv[2]);

  unsigned char* garbage = (unsigned char *) malloc(BLOCK_SIZE);

  std::generate_n(garbage, BLOCK_SIZE, uniqueNumber);
  std::sort(garbage, garbage + BLOCK_SIZE);

  free(garbage);

  return 0;
}
