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
  int N, X=0;
  cin >> N;

  int d[N]={0};
  int check[110]={0};
  

  for(int i=0; i<N; ++i){
    cin >> d[i];
  }
  for(int i=0; i<N; ++i){
    check[d[i]]++;
  }
  for(int i=0; i<110; ++i){
    if(check[i]!=0) ++X;
  }
  cout << X << endl;
  return 0;
}
