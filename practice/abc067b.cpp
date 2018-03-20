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
  int N, K, x, sum;
  cin >> N >> K;
  vector<int> l;

  for (int i = 0; i < N; i++) {
    cin >> x;
    l.push_back(x);
  }
  sort(l.begin(), l.end(), greater<int>());

  for (int i = 0; i < K; i++) {
    sum+=l[i];
  }

  cout << sum << endl;
  return 0;
}
