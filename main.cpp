#include <iostream>
using namespace std;

bool substr(const char *x, const char *y) {
  int count = 0;
  int j;
  for (int i = 0; (*(x + i) != '\0'); ++i) {
    for (j = 0; (*(y + j) != '\0'); ++j) {
      if (*(x + i) == *(y + j)) {
        count++;
      }
    }
    if (count == j)
      return true;
  }
  return false;
}

int main() {

  char a[] = "Hello world and people";
  char b[] = "world";
  char c[] = "banana";
  char d[] = "eop";
  cout.setf(ios_base::boolalpha);
  cout << substr(a, b) << " " << substr(a, c) << " " << substr(a, d);
}
