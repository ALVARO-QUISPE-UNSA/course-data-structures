#include <stdlib.h>
#include <iostream>
using namespace std;
int main () {
  int *arrays;
  int size = 5;
  arrays = (int *)malloc(sizeof(int) * size );
  arrays[0] = 12;
  for (int i = 0; i < size; i++) {
    cout << arrays[i] << '\n';
  }
  cout << "elemento cero: " << arrays[0] << '\n';
  return 0;
}
