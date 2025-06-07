#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int N, X;
        cin >> N >> X;

        vector<int> freshness(N);
        vector<int> cost(N);

        for (int i = 0; i < N; ++i) {
            cin >> freshness[i];
        }
        for (int i = 0; i < N; ++i) {
            cin >> cost[i];
        }

        int totalCost = 0;
        for (int i = 0; i < N; ++i) {
            if (freshness[i] >= X) {
                totalCost += cost[i];
            }
        }

        cout << totalCost << endl;
    }

    return 0;
}
