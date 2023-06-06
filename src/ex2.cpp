/*
 *ユーザーに0～999までの値の入力要求し、入力された値が1ケタ、2ケタ、3ケタであることを判定しコンソールに出力する
*/

#include<iostream>
#include<string>

std::string num_length(std::string num)
{
    return std::to_string(num.length()) + "ケタ";
}

int main()
{
    std::string str;
    std::cout << "数値(0~999)を入力してください->";
    std::cin >> str; //コンソールから入力
    std::cout << "入力された数値は " << num_length(str) << " です" << std::endl;
    system("PAUSE");
}