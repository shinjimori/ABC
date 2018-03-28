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
  int N, M;
  cin >> N >> M;

  int a[M]={0}, b[M]={0};
  int packet[N+1]={0};

  for (int i = 0; i < M; ++i) {
    cin >> a[i] >> b[i];
  }

  for (int i = 0; i < M; ++i) {
    ++packet[a[i]];
    ++packet[b[i]];
  }

  for (int i = 1; i <= N; ++i) {
    cout << packet[i] << endl;
  }

  return 0;
}
