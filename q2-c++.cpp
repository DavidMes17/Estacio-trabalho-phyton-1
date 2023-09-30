#include <iostream>

using namespace std;

int main(void) {
    int result = 0;
    int i;

    while (i <= 1000000000) 
        {
            if (i == 1000000)
            {
                cout << result;
            }
            else if (i == 10000000)
            {
                cout << result;
            }
            else if (i == 100000000)
            {
                cout << result;
            }
            else if (i == 1000000000)
            {
                cout << result;
            }
            i++;
            result = result + i;
    }
    
    return 0;
}