#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "冒泡排序案例 输入格式：数组大小 + 需要排序的数组" << endl;

    int n;
    vector<int> num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        num.push_back(x);
    }

    for (int i = 0; i < n - 1; i++) {

        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                swap(num[j], num[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << num[i] << ' ';
    }

    cout << endl;
    system("pause");
    return 0;
}
