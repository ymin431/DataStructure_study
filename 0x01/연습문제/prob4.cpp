// 시간 복잡도 : O(lgN)

int func4(int N) {
  int val = 1;
  while (2 * val <= N) val *= 2;
  return val;
}