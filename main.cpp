#include <iostream>
#include <chrono>

//count algorithm's running time


using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();
    int i, j, k, count = 0;
    for(i =0; i < 10; i++)
        for(j = 0; j < 100; j++)
            for(k = 0; k < 1000; k++)
                count++;
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    cout << "or " << (float)duration.count() / 1000000 << " seconds" << endl;

    return 0;
}
