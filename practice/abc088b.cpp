// Palindromic Number
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;


int main()
{
  int N, ai;
  cin >> N;
  vector<int> a;
  for (int i = 1; i <= N; i++) {
    cin >> ai;
    a.push_back(ai);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  int asum = 0, bsum = 0;
  for (int i = 0; i < N; i+=2) {
    asum += a[i];
    if(i+1 < N)
      bsum += a[i+1];
  }
  cout << asum - bsum << endl;

  return 0;
}
