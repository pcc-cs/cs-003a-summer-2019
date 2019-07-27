#include <cstdio>
#include <cstring>

void handleArgs1(int argc, char *argv[]) {
  /**
   * Handle the arguments.
   * - argc: Arg count, should be 2.
   * - argv: Array of arguments, second should be "x."
   */
  if (argc != 2) {
    throw "Invalid arguments!";
  }

  printf("All good.\n");
}

void handleArgs2(int argc, char *argv[]) noexcept {
  /**
   * Handle the arguments.
   * - argc: Arg count, should be 2.
   * - argv: Array of arguments, second should be "x."
   */
  if (argc != 2) {
    throw "Invalid arguments!";
  }

  printf("All good.\n");
}

int main(int argc, char *argv[]) {
  try {
    printf("Callling handleArgs1()...\n");
    handleArgs1(argc, argv);
  } catch (const char *e) {
    printf("%s\n", e);
  }

  try {
    printf("Callling handleArgs2()...\n");
    handleArgs2(argc, argv);
  } catch (int e) {
    printf("Error code %d\n", e);
  }
}
