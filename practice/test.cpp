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
  int N=26;
  string s;
  cin >> s;

  int packet[26]={0};

  for(int i = 0; s[i] != '\0'; ++i){
    ++packet[s[i] - 'a'];
  }

  for (int i = 0; i < N; i++) {
    if(packet[i] == 0){
      cout << (char)(i+'a') << endl;
      return 0;
    }
  }

  cout << "None" << endl;

  return 0;
}
