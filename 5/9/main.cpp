#include <iostream>
using namespace std;
void main()
{
    int i, j, k; 						
    for (i = 1; i <= 5; i++)					//控制行数
    {
        for (j = 1; j <= 5-i; j++)				//控制空格数
            cout << " ";
        for (k = 1; k <= 2 *i - 1; k++)			//控制打印*号的数量
            cout << "*";
        cout << endl;
    }
}

