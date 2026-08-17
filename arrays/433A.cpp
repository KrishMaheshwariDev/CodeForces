#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  // std::vector<int> test(100, 200);
  std::vector<int> apples;
  int num_100 = 0, num_200 = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int num;
    std::cin >> num;
    apples.push_back(num);
    if (num == 100) {
      num_100++;
    } else {
      num_200++;
    }
    sum += num;
  }
  if (sum % 200 != 0) {
    std::cout << "NO";
    return 0;
  }
  int half = sum / 2;
  int x = std::min(num_200, half / 200);
  int gap = half - 200 * x;
  if (gap <= 100 * num_100 && gap % 100 == 0) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }

  return 0;
}