// 백준 1475 : 방 번호

#include <bits/stdc++.h>
using namespace std ;

int arr[10];
int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;

  int room ;
  cin >> room ;
  while (room > 0) {
      arr[room % 10]++ ;
      room /= 10 ;
  }
  arr[6] = ceil((arr[6] + arr[9]) / 2.0) ;
  arr[9] = 0 ;

  cout << *max_element(arr, arr + 10) ;
}