#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0; // Initial value of x

    // Iterate over each statement
    for (int i = 0; i < n; ++i)
    {
        string statement;
        cin >> statement;

        // Check the operation and update x accordingly
        if (statement[0] == '+' || statement[1] == '+')
        {
            ++x;
        }
        else if (statement[0] == '-' || statement[1] == '-')
        {
            --x;
        }
    }

    cout << x << endl; // Output the final value of x

    return 0;
}
