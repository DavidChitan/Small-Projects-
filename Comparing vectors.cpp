/* Based on the two lists of elements the program checks if the elements of one list can be found in the second list */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("vectori.in");
    ofstream g("vectori.out");
    int a[100], b[100], c[100], m, n, p = 0, i, j, ok1 = 1, ok2 = 1;
    f >> n;
    for (i = 1; i <= n; i++) f >> a[i];
    f >> m;
    for (i = 1; i <= m; i++) f >> b[i];
    for (i = 1; i <= n; i++)
    {
        ok1 = 0;
        for (j = 1; j <= m; j++)
            if (a[i] == b[j])
                ok1 = 1;
        if (ok1 == 0) {
            p++;
            c[p] = a[i];
            ok2 = 0;
        }
    }
    if (ok2) g << "it is";
    else {

        g << "it is not";
        g << endl;
        g << "missing elements : ";
        for (i = 1; i <= p; i++)
            g << c[i] << " ";
    }
    f.close();
    g.close();
    return 0;
