#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of problems

    int count = 0;  // To count the number of problems they will implement

    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;  // Read each friend's confidence level

        // If at least two friends are sure about the solution, increment the count
        if (petya + vasya + tonya >= 2) {
            ++count;
        }
    }

    // Print the number of problems they will implement
    cout << count << endl;

    return 0;
}
