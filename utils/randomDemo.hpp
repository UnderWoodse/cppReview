#include <random>
#include <iostream>
 
int randomDemo()
{
    std::random_device rd;  //如果可用的话，从一个随机数发生器上获得一个真正的随机数
    std::mt19937 gen(rd()); //gen是一个使用rd()作种子初始化的标准梅森旋转算法的随机数发生器
    std::uniform_int_distribution<> distrib(1, 6);
 
    for (int n=0; n<10; ++n)
        //使用`distrib`将`gen`生成的unsigned int转换到[1, 6]之间的int中
        std::cout << distrib(gen) << ' ';
    std::cout << '\n';
    return 0;
}