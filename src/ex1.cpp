/*
 *値の入力をユーザーに要求し、入力された値が偶数であるか奇数であるか判定しコンソールに出力する
*/

#include<iostream>
#include<string>

std::string even_or_odd(int num)
{
    if(num % 2 == 0)
    {
        return "偶数";
    }
    else
    {
        return "奇数";
    }
}

int main()
{
    int num;
    std::cout << "数値を入力してください->";
    std::cin >> num; //コンソールから入力
    std::cout << "入力された数値は " << even_or_odd(num) << " です" << std::endl;
    system("PAUSE");
}