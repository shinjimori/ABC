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
  int N,x, ans;
  cin >> N;
  vector<int> a;

  for (int i = 0; i < N; i++) {
    cin >> x;
    a.push_back(x);
  }

  sort(a.begin(), a.end());

  for (int i = 0; i < N-1; i++) {
    ans+=abs(a[i]-a[i+1]);
  }

  cout << ans << endl;

  return 0;
}
