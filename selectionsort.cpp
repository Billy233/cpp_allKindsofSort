#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "ѡ�������� �����ʽ�������С + ��Ҫ���������" << endl;
    int n;
    vector<int> num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        num.push_back(x);
    }

    int temp;
    for (int i = 0; i < n - 1; i++) {

        temp = i;
        for (int j = i + 1; j < n; j++) {
            if (num[j] < num[temp]) {
                temp = j;
            }
        }
        if (temp != i) {
            swap(num[i], num[temp]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << num[i] << ' ';
    }

    cout << endl;
    system("pause");
    return 0;
}
