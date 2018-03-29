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
  int N, K;
  cin >> N >> K;
  vector<int> a(N,0);
  vector<int> packet(N+1,0);
  vector<int> p;

  for (int i = 0; i < N; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < N; ++i) {
    ++packet[a[i]];
  }

  sort(packet.begin(), packet.end());

  for (auto it = packet.begin(); it != packet.end(); ++it) {
    if(*it != 0) p.push_back(*it);
  }

  int size = p.size(), count=0;
  for (int i = 0; i < N; ++i) {
    if(size > K){
      count+=p[i];
      --size;
    }else{
      cout << count << endl;
      return 0;
    }
  }
  return 0;
}
