#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> lagu = {"Ini Abadi", "Monokrom"};
    lagu.insert(lagu.begin() + 1, "Everything u are");
    lagu.push_back("Aitakatta");
    lagu.erase(lagu.begin());

    cout << "Daftar lagu:" << endl;
    for (const string& s : lagu) {
        cout << s << endl;
    }
    return 0;
}
