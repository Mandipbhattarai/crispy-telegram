#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<pair<int, int> > graph[100]; // Graph represented as an adjacency list

int total_debt[100]; // Total debt for each friend

vector<pair<int, int> > transactions; // List of transactions

void settle_debts(int N, int K)
{
    // Calculate the total debt for each friend
    for (int i = 0; i < N; i++)
    {
        total_debt[i] = 0;
        for (auto edge : graph[i])
        {
            total_debt[i] -= edge.second;
            total_debt[edge.first] += edge.second;
        }
    }

    // Create lists of borrowers and payers
    vector<int> borrowers, payers;
    for (int i = 0; i < N; i++)
    {
        if (total_debt[i] < 0)
        {
            borrowers.push_back(i);
        }
        else if (total_debt[i] > 0)
        {
            payers.push_back(i);
        }
    }

    // Sort borrowers in descending order and payers in ascending order based on the absolute value of their total debt
    sort(borrowers.begin(), borrowers.end(), [](int a, int b)
         { return abs(total_debt[a]) > abs(total_debt[b]); });
    sort(payers.begin(), payers.end(), [](int a, int b)
         { return abs(total_debt[a]) < abs(total_debt[b]); });

    // Perform transactions
    for (int i = 0; i < min(borrowers.size(), payers.size()); i++)
    {
        int borrower = borrowers[i];
        int payer = payers[i];
        int amount = min(abs(total_debt[borrower]), abs(total_debt[payer]));
        transactions.push_back({payer, borrower});
        total_debt[borrower] += amount;
        total_debt[payer] -= amount;
        if (total_debt[borrower] == 0)
        {
            borrowers.erase(borrowers.begin(), borrowers.begin() + i + 1);
            i = -1; // Reset the loop to process remaining borrowers and payers
        }
        if (total_debt[payer] == 0)
        {
            payers.erase(payers.begin(), payers.begin() + i + 1);
            i = -1; // Reset the loop to process remaining borrowers and payers
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;

        // Read the transactions and build the graph
        for (int i = 0; i < K; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back({v, w});
        }

        // Settle the debts and print the transactions
        transactions.clear();
        settle_debts(N, K);
        cout << transactions.size() << "\n";
        for (auto t : transactions)
        {
            cout << t.first << " " << t.second << "\n";
        }

        // Clear the graph for the next test case
        for (int i = 0; i < N; i++)
        {
            graph[i].clear();
        }
    }
    return 0;
}
