#include <iostream>
using namespace std;

int main()
{
    long int P, V, Q, M = 0;
    long int dist = 0;
    long int res = 0;
    cin >> P >> V;
    cin >> Q >> M;
//    cout << "P = " << P << " " << "V = " << V << endl;
    long int count_P, count_Q = 0;
    if (P < 0  && Q < 0)
        dist = P + Q;
    else if (P > Q)
        dist = P - Q;
    else if (Q > P)
        dist = Q - P;
    if (dist < 0)
        dist = -dist;
//    cout << "Distance res = " << dist << endl;
    if (dist > (V + M))
    {
        res = 2 + 2 * V + 2 * M;
    }
    else if (dist < (V + M))
    {
        if (V > (dist + M))
            res = V * 2 + 1;
        else if (M > (dist + V))
            res = M * 2 + 1;
        else
            res = dist + 1 + V + M;
    }
    else if (dist == (V + M))
    {
        res = dist + 1 + V + M;
    }
    
    cout << res;
    return 0;
}