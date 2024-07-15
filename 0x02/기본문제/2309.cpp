// 백준 2309 : 일곱 난쟁이

#include <bits/stdc++.h>
using namespace std ;

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  int arr[10], total = 0, i, j ;
  for (int i = 0; i < 9; i++) {
    cin >> arr[i] ;
    total += arr[i] ;
  }
  sort(arr, arr + 9) ;

  for (i = 0; i < 8; i++) {
    for (j = i + 1; j < 9; j++) {
      if (total - arr[i] - arr[j] == 100)
        break ;
    }
    if (total - arr[i] - arr[j] == 100)
        break ;
  }

  for (int k = 0; k < 9; k++) {
    if (k != i && k != j)
      cout << arr[k] << "\n" ;
  }

}