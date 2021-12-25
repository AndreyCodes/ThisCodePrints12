#include <iostream>
int main()
{
    int y[4] = { 1,2,3,4 };
    (*(&y + 1))[-3] += 10;
    
    std::cout << 1[y];
}
