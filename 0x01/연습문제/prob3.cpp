// 시간 복잡도 : O(√N)

int func3(int N) {
  for (int i = 1; i * i <= 5; i++) {
    if (i * i == N) return 1;
  }
  return 0;
}