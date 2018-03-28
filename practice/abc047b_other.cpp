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

struct Rectangle{
  int x0 = 0;
  int y0 = 0;
  int x1 = 0;
  int y1 = 0;
  int area = 0;
};

struct Point{
  int x = 0;
  int y = 0;
  int a = 0;
};

void Area(Rectangle* rect){
  rect->area = (rect->x1 - rect->x0)>0 && (rect->y1 - rect->y0) > 0
    ? (rect->x1 - rect->x0)*(rect->y1 - rect->y0) : 0;
  cout << rect->area << endl;
}

void Paint(Rectangle* rect, Point* p){
  switch(p->a){
  case 1:
    if(rect->x0 >= p->x)
      break;
    else{
      rect->x0 = p->x;
      break;
    }
  case 2:
    if(rect->x1 <= p->x)
      break;
    else{
      rect->x1 = p->x;
      break;
    }
  case 3:
    if(rect->y0 >= p->y)
      break;
    else{
      rect->y0 = p->y;
      break;
    }
  case 4:
    if(rect->y1 <= p->y)
      break;
    else{
      rect->y1 = p->y;
      break;
    }
  }
}

int main()
{
  Rectangle rect;
  int N;
  cin >> rect.x1 >> rect.y1 >> N;

  Point p[N];

  for (int i = 0; i < N; ++i) {
    cin >> p[i].x >> p[i].y >> p[i].a;
  }

  for (int i = 0; i < N; ++i) {
    Paint(&rect, &p[i]);
  }
  Area(&rect);
  return 0;
}
