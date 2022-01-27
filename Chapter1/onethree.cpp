#include <iostream>
int main()
{
    std::cout<< "Please insert a couple of numbers";
    int currVal = 0, val = 0;
    // currVal is the number we’re counting; we’ll read new values into val int currVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin >> currVal) //Ensures the input is not empty
    {
        int cnt = 1;
        // store the count for the current value we’re processing
        while (std::cin >> val)
        {
            if (val == currVal)
            {
                ++cnt;
            }
            else
            {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    } // outermostifstatementendshere
    return 0;
}