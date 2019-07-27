#include <cstdio>
#include <cstring>

int main(int argc, char *argv[]) {
  try {
    if (argc != 2) {
      throw "Invalid arguments!";  // Caught
    }
    if (strcmp(argv[1], "x") == 0) {
      printf("All good.\n");
    } else {
      throw 1;  // Not caught
    }
  } catch (const char *e) {
    printf("Error: %s\n", e);
  }
}
