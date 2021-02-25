#include <iostream>
#include <chrono>

//count algorithm's running time
// N = 10,100,1000

using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();
    int i, j, k, count = 0;
    for(i =0; i < N; i++)
        for(j = 0; j < N; j++)
            for(k = 0; k < N; k++)
                count++;
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    cout << "or " << (float)duration.count() / 1000000 << " seconds" << endl;

    return 0;
}
