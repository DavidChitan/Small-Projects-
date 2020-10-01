/* The program counts the how many times a number appears in the user provided array */
/* and creates a new array that replaces the number in question with the value of appeareances */
#include <iostream>

using namespace std;

int main()
{
    int w[50], v[50], i, n, j;
    cout << "n= ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "v[" << i << "]=";
        cin >> v[i];
    }
    for (i = 1; i <= n; i++)
        w[i] = 0;

    for (i = 1; i <= n; i++)
    {
        w[i]++;
        for (j = i + 1; j <= n; j++)
            if (v[i] == v[j]) {
                w[i]++;
                w[j]++;
            }
    }
    for (i = 1; i <= n; i++)
        cout << w[i] << ' ';
    return 0;
}
