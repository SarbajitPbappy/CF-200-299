#include <cstdio>
#include <iostream>
using namespace std;

int main()
{

    long long int roadLength(0), jumpLength(0);
    scanf("%ld %ld\n", &roadLength, &jumpLength);
    string road("");
    getline(cin, road);

    long long int counter(0);
    string output("YES");

    for (int k = 0; k < road.length(); k++)
    {
        if (road[k] == '.')
        {
            counter = 0;
        }
        else
        {
            ++counter;
            if (counter >= jumpLength)
            {
                output = "NO";
                break;
            }
        }
    }

    cout << output << endl;

    return 0;
}
