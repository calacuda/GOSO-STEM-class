#include <algoC.h>

void example_1() {
  for (int i = 0; i < 10; i = i + 1) {
    move(ALGOC, 'A', 1, 10, CW, true);
  }
}

void applicaiton(ALGOC_APP) {
  example_1();
}
