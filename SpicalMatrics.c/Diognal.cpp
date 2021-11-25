#include <conio.h>
#include <iostream>
using namespace std;
class Diognal
{
private:
    int *A;
    int n;

public:
    Diognal()
    {
        n = 2;
        A = new int[2];
    }
    Diognal(int n)
    {
        this->n = n;
        A = new int[n];
    }
    ~Diognal()
    {
        delete[] A;
    }
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
};
void Diognal ::Set(int i, int j, int x)
{
    if (i == j)
        A[i - 1] = x;
}
int Diognal ::Get(int i, int j)
{
    if (i == j)
        return A[i - 1];
    return 0;
}
void Diognal ::Display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << A[i] << " ";
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    Diognal d(4);
    d.Set(1, 1, 5);
    d.Set(2, 2, 8);
    d.Set(3, 3, 9);
    d.Set(4, 4, 12);

    d.Display();
    return 0;
}
