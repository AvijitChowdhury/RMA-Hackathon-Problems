/*
Team Name: Coding Warriors

team Leader:Kashfi uddin
team member2: Avijit Chowdhury
team member3: Shakiruzzaman
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int num = 0, i = 0;
  int arr[99999];
  cout << 100000 << "\n";
  // for(int i=0 ;i <= 99999;i++){
  //     arr[i]=i;
  // }
  for (int i = 0; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      for (int k = 0; k <= 9; k++) {
        for (int l = 0; l <= 9; l++) {
          for (int m = 0; m <= 9; m++) {
            arr[m] = m;
          }
        }
      }
    }
  }
  // while(num < 100000){
  //     arr[i]+=num;
  //     num++;i++;
  // }
  for (int i = 0; i <= 99999; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}