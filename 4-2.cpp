#include <iostream>
using namespace std;
void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}
void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    double numArray[10];
    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numArray[i];
    }

    bubbleSort(numArray, 10);

    cout << "排序后的数组为：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << numArray[i] << " ";
    }
    cout << endl;

    return 0;
}