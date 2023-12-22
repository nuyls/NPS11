#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    cout << "Press Enter 3 times to reveal your future.";

    for (int i = 0; i < 3; ++i) {
        cin.get();
    }

    srand(time(0));

    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    int random = rand() % 9;
    string Grade = grades[random];

    cout << "You will get " << Grade <<" in this 261102." << endl;

    return 0;
}