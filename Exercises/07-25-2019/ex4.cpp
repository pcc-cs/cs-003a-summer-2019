#include <cstdio>
#include <cstring>
#include <cassert>

void handleArgs(int argc, char *argv[]) {
  /**
   * Handle the arguments.
   * - argc: Arg count, should be 2.
   * - argv: Array of arguments, second should be "x."
   */
  assert(argc == 2);
  assert(argv[1] == "x");

  printf("All good.\n");
}

int main(int argc, char *argv[]) {
  try {
    handleArgs(argc, argv);
  } catch (int e) {
    printf("Error code %d\n", e);
  }
}
