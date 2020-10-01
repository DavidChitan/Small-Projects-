/* The program returns the arithmetic average and harmonic average based on the array proiveded by the user */
#include <iostream>

using namespace std;

int main()
{
    int i, n;
    float v[100], a, h, r = 0, s = 0;
    cout << "n= ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "v[" << i << "]=";
        cin >> v[i];
    }
    for (i = 1; i <= n; i++) {
        r = r + 1 / v[i];
        s = s + v[i];
    }
    h = n / r;
    a = s / n;
    cout << "Arithmetic average = " << a << endl;
    cout << "Harmonic average =" << h;
    return 0;
}
