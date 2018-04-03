#include <iostream>

using namespace std;

int main()
{
    int ary[] = {10, -20, 30, -40, 50, 60, 70};
    int x = sizeof(ary)/sizeof(ary[0]); // works, ary[] is a array.


    for(int i=x-1; i>=0; i--){
        if(ary[i] > 0){
            cout << ary[i];
        }
        cout << " ";
    }

    return 0;
}
