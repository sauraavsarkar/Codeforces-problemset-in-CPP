#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of words
    string word;

    for (int i = 0; i < n; ++i) {
        cin >> word;  // Read each word
        int len = word.length();

        if (len > 10) {
            // Word is too long, create abbreviation
            cout << word[0] << (len - 2) << word[len - 1] << endl;
        } else {
            // Word is not too long, print it as is
            cout << word << endl;
        }
    }

    return 0;
}
