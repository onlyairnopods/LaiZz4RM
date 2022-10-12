#include <iostream>
using namespace std;

class Pri
{
public:
    void print()
    {
        printf("Hello，RoboMaster！");
    }
};

int main()
{
    Pri s1;
    int n;
    cin>>n;

    if(n <= 0)
    {
        return 0;
    }else
    {
        for (int i=0;i<n;i++)
        {
            s1.print();
        }
    }    

    return 0;
}