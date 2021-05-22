#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double s = 1, i = 3, j = 2;
    while (i < 39){
        s = s + (i/j);
        j = j * 2;
        i = i + 2;
    }
    cout.precision(2);
    cout << fixed << s <<endl;
    return 0;
}
