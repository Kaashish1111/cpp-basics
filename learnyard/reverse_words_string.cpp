// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    getline(cin, s);  // Input: "hello from chatgpt"
    int n = s.length();

    // Step 1: Count number of words
    int count = 0;
    bool inWord = false;
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ' && !inWord) {
            inWord = true;
            count++;
        } else if (s[i] == ' ') {
            inWord = false;
        }
    }

    string words[count];
    string curr_word = "";   // <-- Fix: empty string, not space
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
            curr_word += s[i];
        } else {
            words[index] = curr_word;
            index++;
            curr_word = "";    // <-- Fix: reset to empty string, not space
        }
    }
    words[index] = curr_word;

    reverse(words, words + count);  // <-- Fix: use pointers for raw array

    // Print words
    for (int i = 0; i < count; i++) {
        cout << words[i];
        if (i != count - 1)
            cout << " ";
    }
    cout << endl;

    return 0;
}
