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
  int N, input;
  vector<int> A;
  bool exist_odds;
  int counter = 0;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> input;
    A.push_back(input);
  }

  while(true){
    exist_odds = false;
    for (auto it = A.begin(); it != A.end(); ++it) {
      if(*it%2 == 0) {*it/=2;}
      else {exist_odds = true;}
    }
    if(exist_odds) break;
    else counter ++;
  }

  cout << counter << endl;
  return 0;
}
