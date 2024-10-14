#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, choices, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    while (choices != num)
    {
        cout << "Enter a number between 1 and 100 : ";
        cin >> choices;
        tries++;
        if (choices > num)
            cout << "Too high" << endl;
        else if (choices < num)
            cout << "Too low" << endl;
        else
            cout << "Yes, You guess it Correct after " << tries << " tries.";
    }
}