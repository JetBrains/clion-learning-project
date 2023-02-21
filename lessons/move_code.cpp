#include <iostream>
#include <thread>

int main()
{
    std::atomic<bool> started = false;
    auto printDebugMessage = [&started]{
        started = true;
        std::cout << "Hello from a thread!\n";
    };

    std::thread myThread(printDebugMessage);
    myThread.join();
}
