#include <cstdio>
#include <cstring>
#include <stdexcept>

void handleArgs(int argc, char *argv[]) {
  /**
   * Handle the arguments.
   * - argc: Arg count, should be 2.
   * - argv: Array of arguments, second should be "x."
   */
  if (argc != 2) {
    throw std::length_error("Args should be 2");
  }
  if (strcmp(argv[1], "x") != 0) {
    throw "Second arg should be \"x\"";
  }

  printf("All good.\n");
}

int main(int argc, char *argv[]) {
  try {
    handleArgs(argc, argv);
  } catch (std::logic_error e) {
    printf("%s\n", e.what());
  } catch (const char *e) {
    printf("%s\n", e);
  }
}
