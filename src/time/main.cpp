#include <time.h>
#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
    cout << "hello c++" << endl;
    time_t now = time(NULL);
    if (now != -1) {
        printf("The current time is %s(%ju seconds since the Epoch)\n",
               asctime(gmtime(&now)), (uintmax_t)now);
        // 获取时间
        cout << asctime(gmtime(&now)) << endl;
    }

    return 1;
}