#include <iostream>
using namespace std;
int main()
{
    long test, size;
    cin >> test;
    while (test > 0)
    {
        cin >> size;
        test--;
        long distanceAlice[size], distanceBob[size];
        for (long i = 0; i < size; i++)
        {
            cin >> distanceAlice[i];
        }
        for (long i = 0; i < size; i++)
        {
            cin >> distanceBob[i];
        }
        long totalWierd = 0, sumA = 0, sumB = 0;
        for (long i = 0; i < size; i++)
        {
            sumA += distanceAlice[i];
            sumB += distanceBob[i];
            if (distanceBob[i] == distanceAlice[i] && sumB == sumA)
                totalWierd = totalWierd + distanceAlice[i];
        }
        cout << totalWierd << endl;
    }
    return 0;
}