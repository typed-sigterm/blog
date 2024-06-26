#include <iostream>
using namespace std;

const int N = 2e5 + 10;
int a[N], b[N];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    int index = 0;
    for (int i = 1; i <= n; ++i) {
      b[++index] = a[i];
      if (a[i] != 1) b[++index] = 1;
    }
    cout << index << '\n';
    for (int i = 1; i <= index; ++i) cout << b[i] << ' ';
    cout << '\n';
  }
  return 0;
}
