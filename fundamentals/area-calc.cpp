#include <iostream>
using namespace std;

int main() {

    const double PI = 3.1415;
    double radius;
    cout <<"Type the area number: ";
    cin >> radius;

    double results = PI * radius * radius;

    cout << results;


    return 0;
}

// PI = 3.1415
// PI * radius * radius



template<typename T> T Abs(T x) { return(x < 0 ? -x : x); }
template<typename T> T Sqr(T x) { return(x * x); }
string plural(string s) { return(Sz(s) && s[Sz(s) - 1] == 'x' ? s + "en" : s + "s"); }

const int INF = (int)1e9;
const LD EPS = 1e-12;
const LD PI = acos(-1.0);

#define GETCHAR getchar_unlocked

bool Read(int& x)
{
  char c, r = 0, n = 0;
  x = 0;
  for (;;)
  {
    c = GETCHAR();
    if ((c < 0) && (!r))
      return(0);
    if ((c == '-') && (!r))
      n = 1;
    else
      if ((c >= '0') && (c <= '9'))
        x = x * 10 + c - '0', r = 1;
      else
        if (r)
          break;
  }
  if (n)
    x = -x;
  return(1);
}

void ProcessCase()
{
  // input
  int K;
  Read(K), K /= 2;
  // construct graph
  int N = 2;
  vector<PR> E = { { 1, 2 } };
  while (K)
  {
    int r = N, d = 1;
    while (d <= K)
      E.pb({ r, ++N }), K -= d++;
  }
  // output
  printf("%d %d\n", N, Sz(E));
  for (auto e : E)
    printf("%d %d\n", e.x, e.y);
}

int main()