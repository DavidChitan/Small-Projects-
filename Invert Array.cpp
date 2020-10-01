/* The program inverts the positivons of the valueas provided by the user in the array */
#include <iostream>

using namespace std;

int main()
{
    int v[100], i, n, aux, g[100];
    cout << "n= ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "v[" << i << "]=";
        cin >> v[i];
    }
    for (i = 1; i <= n / 2; i++) {
        aux = v[i];
        v[i] = v[n - i + 1];
        v[n - i + 1] = aux;
    }
    for (i = 1; i <= n; i++)
        cout << v[i] << ' ';
    cout << "\n";
    for (i = 1; i <= n; i++)
        g[i] = v[n - i + 1];
    for (i = 1; i <= n; i++)
        cout << g[i] << ' ';
    return 0;
}
