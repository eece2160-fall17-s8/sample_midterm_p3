#include <iostream>

double Average(double *arr, int n) {
  double sum = 0.0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum / n;
}

int main() {
  double array[5];
  for (int i = 0; i < 5; i++) {
    std::cin >> array[i];
  }

  std::cout << Average(array, 5) << "\n";

  return 0;
}
