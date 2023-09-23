#include <iostream>
using namespace std;
int main() {
    int k, m, n, t;
    cin >> k >> m >> n;
    if (n <= k) t = 2 * m;
    else if (n * 2 % k == 0) t = m * (n * 2 / k);
    else t = m * (1 + (n * 2 / k));
    cout << t << endl;
    return 0;
}
