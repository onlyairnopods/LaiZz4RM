#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n <= 0)
    {
        return 0;
    }else
    {
        for (int i=0;i<n;i++)
        {
            printf("Hello，RoboMaster！");
        }
    }

    return 0;
}