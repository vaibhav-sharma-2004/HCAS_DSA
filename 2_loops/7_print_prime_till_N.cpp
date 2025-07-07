#include <iostream>
using namespace std;

/*
print all the prime numbers in the range 1 to N
*/

int main()
{
    int n;
    cin >> n;

    // loop
    int j = 2;

    // iterating at each number in the range 2 to N
    while (j <= n)
    {
        // check the current number is prime or not
        int i = 2;
        int flag = 1; // the input number is prime

        while (i <= j - 1)
        {

            if (j % i == 0){
                flag = 0;
            }
            i=i+1;
        }

        if (flag == 1){
            cout <<j<<" ";
        }

        j=j+1;
    }
    return 0;
}