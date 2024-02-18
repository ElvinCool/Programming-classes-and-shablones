#include <iostream>
#include "minus/minus.h"
#include "mymath/mymath.h"
using namespace std;
using namespace minus;
using namespace mymath;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "- I can counting! Look 1 + 1 = ";
    cout << sum(10, 17) << endl;
    cout << "- I can counting! Look 1 - 1 = " << minusik(10, 5) << endl;
    cout << "- You're stupid!" << endl;

    return 0;
}