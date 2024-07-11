// 백준 2752 : 세수정렬

#include <bits/stdc++.h>
using namespace std ;

int main(void) {
  ios::sync_with_stdio(0) ;
  cin.tie(0) ;
  
  int arr[4] ;
  for (int i = 0; i < 3; i++) cin >> arr[i] ;

  sort(arr, arr + 3) ;
  for (int i = 0; i < 3; i++) cout << arr[i] << " " ;
}