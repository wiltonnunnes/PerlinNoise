#include <iostream>
using namespace std;

float lerp(float v0, float v1, float t) {
  return (v1 - t) * v0 + t * v1;
}

double find_noise(int n) {
  int x = (n << 13) ^ n;
  return (double) (1.0 - ((x * (x * x * 15731 + 789221) + 1376312589) & 0x7fffffff) / 1073741824.0);
}

int main() {
  cout << find_noise(0) << endl;
  cout << find_noise(1) << endl;
  cout << find_noise(1) << endl;
  cout << find_noise(2) << endl;
  return 0;
}