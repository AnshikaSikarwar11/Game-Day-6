#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
    int i = 0, score_A = 0, score_B = 0;
    int a[11] = {0}, b[11] = {0};
    srand(time(0));
    cout << "Team A is playing ....." << endl;
    for (i = 0; i < 11; i++)
    {
        int n = 1;
        while (n != 0)
        {
            n = rand() % 7;
            a[i] = n + a[i];
        }
        score_A = a[i] + score_A;
    }
    cout << "Team A score is :" << score_A << endl;
    cout << "Team B is playing ...." << endl;
    for (i = 0; i < 11; i++)
    {
        int n = 1;
        while (n != 0)
        {
            n = rand() % 7;
            b[i] = n + b[i];
        }
        score_B = b[i] + score_B;
    }
    cout << "Team B score is :" << score_B << endl;
    if (score_A < score_B)
    {
        cout << "Team B is winner....";
    }
    else if (score_A == score_B)
    {
        cout << "Match is a tie....";
    }
    else
    {
        cout << "Team A is winner....";
    }
    return 0;
}
