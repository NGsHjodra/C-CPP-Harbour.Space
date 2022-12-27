#include <iostream>
#include <unordered_set>

using namespace std;

const int N = 1000000;

// a0, X, Y, M are given
long long a0, X, Y, M;

// Function to compute the length of the cycle and the number of first
// elements of the sequence that are not included in the cycle
void compute(long long &cycle, long long &prefix)
{
    // Set to store the elements of the sequence
    unordered_set<long long> set;

    // Initialize the cycle and prefix lengths
    cycle = 0;
    prefix = 0;

    // Initialize the current element of the sequence
    long long a = a0;

    // Loop until we find the cycle
    while (set.count(a) == 0)
    {
        // Insert the current element in the set
        set.insert(a);

        // Compute the next element of the sequence
        a = (X * a + Y) % M;

        // Increase the prefix length
        prefix++;
    }

    // Now we have found the start of the cycle, so compute the length of the cycle
    a = (X * a + Y) % M;
    cycle++;
    while (a != *set.begin())
    {
        a = (X * a + Y) % M;
        cycle++;
    }
}

int main()
{
    cin >> a0 >> X >> Y >> M;

    long long cycle, prefix;
    compute(cycle, prefix);

    cout << cycle << " " << prefix - cycle << endl;

    return 0;
}
