#include <bits/stdc++.h>
using namespace std;

void quicksort(vector<int>& v, int left, int right) {
    int i = left, j = right;
    int pivot = v[left];

    while (i <= j) {
        while (v[i] < pivot)
        {
            i++;
        }
        while (v[j] > pivot)
        {
            j--;
        }
        if (i <= j) {
            swap(v[i], v[j]);
            i++;
            j--;
        }
        
    }

    if (left < j) {
        quicksort(v, left, j);
    }
    if (i < right) {
        quicksort(v, i, right);
    }
}

int main() {

    cout << "快速排序案例 输入格式：数组大小 + 需要排序的数组" << endl;
    int n;
    vector<int> num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        num.push_back(x);
    }

    quicksort(num, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << num[i] << ' ';
    }

    cout << endl;
    system("pause");
    return 0;
}
