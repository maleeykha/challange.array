#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> tas = {"Pedang Kayu", "Perisai Besi"};

    tas.insert(tas.begin(), "Potion Darah");
    tas.insert(tas.begin() + 2, "Busur Panah");
    tas.pop_back();

    cout << "Isi tas akhir:" << endl;
    for (string item : tas) {
        cout << item << endl;
    }

    return 0;
}
