#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;

        queue<int> cards;
        for (int i = 1; i <= n; i++)
        {
            cards.push(i);
        }

        cout << "Discarded cards: ";
        while (cards.size() >= 2)
        {
            cout << cards.front();
            cards.pop();
            if (cards.size() >= 2)
            {
                cout << ", ";
            }
            int discarded_card = cards.front();
            cards.pop();
            cards.push(discarded_card);
        }
        cout << "\nRemaining card: " << cards.front() << endl;
    }

    return 0;
}
