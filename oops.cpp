#include <iostream>
using namespace std;

int main() {
    int sensorCount = 25;
    float avgTemp = 32.5;
    char status = 'A';

    float result = sensorCount + avgTemp + status;

    cout << result;
}