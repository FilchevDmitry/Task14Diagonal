#include <iostream>
using namespace std;
void diagonal(int matrixx[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j)
                matrixx[i][j] = 0;
        }
    }
}
void print(int matrixx[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrixx[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    cout << "Diagonal"<<endl;
    int matrixx[4][4];
    cout << "Enter the data" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrixx[i][j];
        }
    }
    print(matrixx);
    cout << endl;
    diagonal(matrixx);
    print(matrixx);
}

