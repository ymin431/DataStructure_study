// 백준 2490 : 윷놀이

#include <bits/stdc++.h>
using namespace std ;

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  int arr[5], cnt ;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) cin >> arr[j] ;

    cnt = count(arr, arr + 4, 1) ; // 등 수
    if (cnt == 3) cout << "A" << "\n" ; // 도
    else if (cnt == 2) cout << "B" << "\n" ; // 개
    else if (cnt == 1) cout << "C" << "\n" ; // 걸
    else if (cnt == 0) cout << "D" << "\n" ; // 윷
    else cout << "E" << "\n";
  }
}