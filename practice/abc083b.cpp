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
  int N, A, B;
  cin >> N >> A >> B;

  int sum = 0;
  int sumsum = 0;

  for (int i = 1; i <= N; i++) {
    sum = 0;
    int n = i;
    while(true){
      if(n/10 == 0){
        sum+=n%10;
        break;
      }else{
        sum+=n%10;
        n/=10;
      }
    }
    if(sum >= A && sum <= B)
      sumsum+=i;
  }
  cout << sumsum << endl;
  return 0;
}
