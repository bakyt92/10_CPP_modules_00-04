#include <iostream>
#include <string>
using namespace std;


int main ()
{
    string line_1;
    string line_2;
    int place = 0;
    cin >> line_1 >> line_2 >> place;
    int res_g1_1 = atoi(&line_1[0]);
    int res_g1_2 = atoi(&line_1[2]);
    int res_g2_1 = atoi(&line_2[0]);
    int res_g2_2 = atoi(&line_2[2]);
    int res = 0;
    // cout << "Input data" << " G1_1: " << res_g1_1 << " G1_2: " << res_g1_2  << " G2_1: " << res_g2_1 << " G2_2: " << res_g2_2 << endl;
    if (place == 1)
    {
        if ((res_g1_1 + res_g2_1) > (res_g1_2 + res_g2_2))
        {
            res = 0;
        }
        else if ((res_g1_1 + res_g2_1) == (res_g1_2 + res_g2_2))
        {
            if (res_g2_1 > res_g2_2)
                res = 0;
            else 
                res = 1;
        }
        else if ((res_g1_1 + res_g2_1) < (res_g1_2 + res_g2_2))
        {
            res = res_g1_2 + res_g2_2 - res_g1_1 - res_g2_1;
        }
            
    }
    else if (place == 2)
    {
        if ((res_g1_1 + res_g2_1) == (res_g1_2 + res_g2_2))
        {
            if (res_g1_1 > res_g1_2)
                res = 0;
            else 
                res = 1;
        }
        else if ((res_g1_1 + res_g2_1) > (res_g1_2 + res_g2_2))
        {
            res = 0;
        }
        else if ((res_g1_1 + res_g2_1) < (res_g1_2 + res_g2_2))
        {
            res = res_g1_2 + res_g2_2 - res_g1_1 - res_g2_1 + 1;
        }
    }
    cout << res;
    return 0;
}