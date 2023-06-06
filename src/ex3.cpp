/*
 *ユーザーが入力した数値によって以下の値を出力
 *1.Apple
 *2.Orange
 *3.Banana
 *4.Meat
 *5.Caw
 *6.Rabbit
 *7.It’s me!
 *ユーザーが入力した文字列によって上記の番号を出力
*/

#include<iostream>
#include<string>

int find_num(std::string str, std::string name_array[], int array_size)
{
    for(int i = 0; i < array_size; ++i)
    {
        if(name_array[i] == str)
        {
            return i + 1;
        }
    }
    return 0;
}

int main()
{
    std::string name_array[] = {"Apple", "Orange", "Banana", "Meat", "Caw", "Rabbit", "It's me!"};
    int array_size = sizeof(name_array) / sizeof(name_array[0]); // 配列の長さを取得
    std::string name;
    std::cout << "文字列を入力してください->";
    std::getline(std::cin, name); // コンソールから入力
    std::cout << name << " は " << std::to_string(find_num(name, name_array, array_size)) << " 番です" << std::endl;
    system("PAUSE");
}