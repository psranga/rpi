#include <unistd.h>

char progress_string[] = ".";

int main()
{
  // TODO: lol each '1' below means something different.
  while (1) {
    write(1, progress_string, sizeof(progress_string)-1); // subtract 1 to exclude trailing null.
    sleep(1);
  }
}
