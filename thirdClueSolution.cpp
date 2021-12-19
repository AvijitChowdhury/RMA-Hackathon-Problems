/*
Problem
link:https://www.hackerrank.com/contests/third-clue/challenges/mysterious-water-bottle
Mysterious Water Bottle
After solving the previous mystery, you are excitedly walking and thinking what
was waiting for you in the next task or clue. Suddenly, you saw n water bottles
lined up in a row, numbered from left to right from one. Initially, the i-th
bottles contains ai liters of water.

Then, you found a piece of paper beside these bottles and a problem was given to
solve to find the next clue. The problem is given below, Try to pour water from
one bottle to another. In one act of pouring, you can choose two different
bottles x and y (the x-th bottle shouldn't be empty since it is not possible to
pour water from an empty bottle) and you can pour any amount of water from
bottle x to y (possibly all of the water of x bottle). You may assume that
bottles are big enough to hold any amount of water as these bottles are
mysterious.

Calculate the maximum possible difference between the maximum and the minimum
amount of water in the bottles, if you can pour water at most k times from one
bottle to another.

Some examples: If you have four bottles, each containing 5 liters of water and k
= 1, you may pour 5 liters water from the second barrel into the fourth bottles,
so the amount of water in the bottles are [5,0,5,10] and the difference between
the maximum and the minimum is 10, as 2nd bottle contains 0 liters water and
fourth bottles contains 10 liters water, so the difference is (10-0) = 10.

If all water bottles are empty, you can't make any operation, so the difference
between the maximum and the minimum amount is still 0.

Input Format

The first line of each test case contains two integers n and k (1≤k

The second line contains n integers a1,a2,…,an (0≤ai≤10000), where ai is the
initial amount of water the i-th barrel has.

Constraints

1≤k

0≤ai≤10000

Output Format

Print the difference between maximun and minimum amount of water bottles if you
can pour waster at most k times.

Sample Input 0

4 1
5 5 5 5
Sample Output 0

10
Sample Input 1

3 2
0 0 0
Sample Output 1

0
Sample Input 2

2 1
70 37
Sample Output 2

107
*/

/*
Team Name: Coding Warriors

team Leader:Kashfi uddin
team member2: Avijit Chowdhury
team member3: Shakiruzzaman
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k, sum = 0;
  cin >> n >> k;
  int count = 0;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  for (int i = 1; i <= k; i++) {
    a[n - 1] += a[n - 1 - i];
  }
  cout << a[n - 1];
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;
}