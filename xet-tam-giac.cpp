#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "Nhap do dai 3 canh tam giac: ";
    cin >> a >> b >> c;

    float t[] = {a, b, c};
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (t[i] > t[j]) {
                t[i] += t[j];
                t[j] = t[i] - t[j];
                t[i] -= t[j];
            }
        }
    }

    a = t[0]; b = t[1]; c = t[2];
    if (a + b <= c) {
        cout << "Day khong phai la do dai 3 canh tam giac";
    }
    else if (a*a + b*b == c*c) {
        cout << "Day la tam giac vuong";
    }
    else if (((a*a + b*b - c*c)/2/a/b) > 0) {
        cout << "Day la tam giac nhon";
    }
    else {
        cout << "Day la tam giac tu";
    }
    
    return 0;
}