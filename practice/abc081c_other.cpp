//include
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
  ios_base::sync_with_stdio(0);cin.tie(0);

  int N, K;
  cin >> N >> K;

  vector<int> a(N,0);
  vector<int> packet(N+1,0);

  for (int i = 0; i < N; ++i) {
    cin >> a[i];
    ++packet[a[i]];
  }

  sort(packet.begin(), packet.end(), std::greater<int>());

  int  ans=0;
  for (int i = 0; i < N; ++i) {
    if(i > K-1)
      ans+=packet[i];
  }
  cout << ans << endl;
  return 0;
}
