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
  int W, H, N, count=0;
  cin >> W >> H >> N;
  int x[N]={0}, y[N]={0}, a[N]={0};
  int p[W][H] = {0};

  for (int i = 0; i < N; ++i) {
    cin >> x[i] >> y[i] >> a[i];
  }

  // 色塗り
  for (int i = 0; i < N; ++i) {
    switch(a[i]){
    case 1:
      for (int j = 0; j < x[i]; ++j) {
        for (int k = 0; k < H; ++k) {
          p[j][k] = 1;
        }
      }break;

    case 2:
      for (int j = x[i]; j < W; ++j) {
        for (int k = 0; k < H; ++k) {
          p[j][k] = 1;
        }
      }break;

    case 3:
      for (int j = 0; j < W; ++j) {
        for (int k = 0; k < y[i]; ++k) {
          p[j][k] = 1;
        }
      }break;

    case 4:
      for (int j = 0; j < W; ++j) {
        for (int k = y[i]; k < H; ++k) {
          p[j][k] = 1;
        }
      }break;
    }
  }

  for (int i = 0; i < W; ++i) {
    for (int j = 0; j < H; ++j) {
      if(p[i][j]==0) ++count;
    }
  }

  cout << count << endl;
  return 0;
}
