#include <iostream>
#include <thread>
int main(){
    const auto second=std::chrono::duration<int>(1);
    auto SecondTimer=[&](){
        std::thread([&](){
            std::this_thread::sleep_for(second);
            setcaption("̰����<---> ʣ��ʳ����:%d����Ϸʱ��:8%0.2f��",
                snake.Foodnum(),runTime-startTime);
        }).join();
    };
    SecondTimer();
    std::this_thread::sleep_for(std::chrono::duration<int>(30));
    return 0;
}