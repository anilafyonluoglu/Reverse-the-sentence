#include <iostream>
#include <stack>
#include <sstream>

using namespace std;
int main() {
    string sentence;

    getline(cin, sentence);

    stack<string> wordStack;

    stringstream ss(sentence);

    string word;
    while (ss >> word) {
        wordStack.push(word);
    }

    while (!wordStack.empty()) {
        cout << wordStack.top() << " ";
        wordStack.pop();
    }
    return 0;
}
