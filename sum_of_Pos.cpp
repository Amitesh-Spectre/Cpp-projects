#include <iostream>
int main()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        int num;
        std::cout << "Enter A Natural Number: ";
        std::cin >> num;
        if (num < 0)
        {
            continue;
        }
        sum = sum + num;
    }
    std::cout << "Total sum: " << sum << std::endl;
    return 0;
}
