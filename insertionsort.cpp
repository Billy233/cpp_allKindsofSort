#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "���������� �����ʽ�������С + ��Ҫ���������" << endl;
    int n;
    vector<int> num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        num.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 1; j--) {

            if (num[j] < num[j - 1]) {
                swap(num[j], num[j - 1]);
            } else {
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << num[i] << ' ';
    }

    cout << endl;
    system("pause");
    return 0;
}
