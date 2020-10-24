#include <iostream>
#include <string>
#include <vector>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Задание 1." << std::endl << "1) ";
    //Задание 1.1
    std::vector<int> v1 = { 1, 2, 3, 4 };
    for (int i = 0; i != v1.size(); i++)
    {
        v1[i] *= 2;
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;

    //Задание 1.2
    v1 = { 1, 2, 3, 4 };
    std::cout << "2) Введите a\n";
    int a;
    std::cin >> a;
    for (int i = 0; i != v1.size(); i++)
    {
        v1[i] -= a;
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;

    //Задание 1.3
    std::vector<double> V = { 1, 2, 3, 4 };
    std::cout << "3) " << std::endl;
    double x;
    x = V[0];
    for (int i = 0; i != V.size(); i++)
    {
        V[i] = V[i] / x;
        std::cout << V[i] << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Задание 2." << std::endl;
    //Задание 2.1
    v1 = { 1, 2, 3, 4 };
    int s = 0;
    for (int i = 0; i != v1.size(); i++)
    {
        s += v1[i];
        if (i == 3) std::cout << "1) " << s << std::endl;
    }

    //Задание 2.2
    v1 = { 1, 2, 3, 4 };
    s = 0;
    for (int i = 0; i != v1.size(); i++)
    {
        s += v1[i] * v1[i];
        if (i == 3) std::cout << "2) " << s << std::endl;
    }

    //Задание 2.3
    v1 = { 1, 2, 3, 4, -1, -2, -3, -4 };
    s = 0;
    for (int i = 0; i != 6; i++)
    {
        s += v1[i];
        if (i == 5) std::cout << "3) " << s << std::endl;
    }

    //Задание 2.4
    v1 = { 1, 2, 3, 4, -1, -2, -3, -4 };
    std::cout << "4) Введите k1 и к2\n";
    int k1, k2;
    s = 0;
    std::cin >> k1 >> k2;
    for (int i = k1; i != k2 + 1; i++)
    {
        s += v1[i];
        if (i == k2) std::cout << s << std::endl;
    }

    //Задание 2.5
    v1 = { 7, 2, 3, 4 };
    s = 0;
    for (int i = 0; i != v1.size(); i++)
    {
        s += v1[i];
        if (i == v1.size() - 1) std::cout << "5) " << s / v1.size()  << std::endl;
    }

    //Задание 2.6
    v1 = { 7, 2, 3, 4 };
    std::cout << "6) " << "Введите s1 и s2\n";
    int s1, s2;
    s = 0;
    std::cin >> s1 >> s2;
    for (int i = s1; i != s2 + 1; i++)
    {
        s += v1[i];
        if (i == s2) std::cout << s / v1.size() << std::endl << std::endl;
    }

    //Задание 3
    std::vector<int> v2 { 0, 0, 0 };
    std::cout << "Задание 3.\n";
    v1 = { 7, 2, 3, 4, 7, 2, 3, 4, 7, 2, 3, 4, 7, 2, 3, 4, 7, 2, 3, 4 };
    for (int i = 0; i != 3; i++)
    {
        v2[i] = v1[i];
        v1[i] = v1[i + 17];
        v1[i + 17] = v2[i];
        if (i == 2)
            for (int i2 = 0; i2 != 20; i2++)
                std::cout << v1[i2] << " ";
    }
    std::cout << std::endl << std::endl;

    //Задание 4.1
    v1 = { 1, 2, 3, 4, 5, -1, 6, -1 };
    int i = -1, m = 0, k = v1.size() - 1;
    v2.resize(k);
    do
    {
        i++;
        if (v1[i] < 0)
        {
            m++;
            for (int i2 = 0; i2 != i; i2++) v2[i2] = v1[i2];
            for (int i2 = i; i2 != k; i2++) v2[i2] = v1[i2 + 1];
        }
    } while ((v1[i] >= 0) & (i != k));
    std::cout << "Задание 4." << std::endl << "1) ";
    if (m == 1)
    {
        for (int i2 = 0; i2 != k; i2++) v1[i2] = v2[i2];
        v1.resize(k);
        for (int i = 0; i != k; i++)
            std::cout << v1[i] << " ";
    }
    else
    {
       for (int i = 0; i != k + 1; i++)
            std::cout << v1[i] << " ";
    }
    std::cout << std::endl;

    //Задание 4.2
    v1 = { 1, 3, 4, 5, -1, 6, -1 };
    i = v1.size(), m = 0, k = v1.size() - 1;
    v2.resize(k);
    do
    {
        i--;
        if (v1[i] % 2 == 0)
        {
            m++;
            for (int i2 = 0; i2 != i; i2++) v2[i2] = v1[i2];
            for (int i2 = i; i2 != k; i2++) v2[i2] = v1[i2 + 1];
        }
    } while ((v1[i] % 2 != 0) & (i != 0));
    std::cout << "2) ";
    if (m == 1)
    {
        for (int i2 = 0; i2 != k; i2++) v1[i2] = v2[i2];
        v1.resize(k);
        for (int i = 0; i != k; i++)
            std::cout << v1[i] << " ";
    }
    else
    {
        for (int i = 0; i != k + 1; i++)
            std::cout << v1[i] << " ";
    }
    std::cout << std::endl << std::endl;

    //Задание 5.
    std::cout << "Задание 5." << std::endl;
    std::string str = "Moscow";
    if (str.size() % 2 == 0) std::cout << "Четно\n" << std::endl;
    else std::cout << "Нечетно\n" << std::endl;

    //Задание 6.
    std::cout << "Задание 6." << std::endl;
    std::string name1 = "Ivanov", name2 = "Petrov";
    if (name1.size() > name2.size()) std::cout << "True\n" << std::endl;
    else std::cout << "False\n" << std::endl;

    //Задание 7.
    std::string longest, shortest, a1 = "a", b1 = "ab", c1 = "abc";
    if (a1.size() > b1.size())
        if (a1.size() > c1.size())
        {
            longest = a1;
            if (b1.size() > c1.size()) shortest = c1;
            else shortest = b1;
        }
        else longest = c1, shortest = b1;
    else
        if (b1.size() > c1.size())
        {
            longest = b1;
            if (a1.size() > c1.size()) shortest = c1;
            else shortest = a1;
        }
        else longest = c1, shortest = a1;
    std::cout << "Задание 7.\n" << "longest: " << longest << " " << "shortest: " << shortest << std::endl << std::endl;

    //Задание 8.
    std::cout << "Задание 8\nВведите m и n\n";
    int m1, n;
    std::string word = "abcaab";
    std::cin >> m1 >> n;
    for (; m1 != n + 1; m1++)
        std::cout << word[m1];
    std::cout << std::endl << std::endl;

    //Задание 9.
    std::cout << "Задание 9.\n" << "Введите слово\n";
    std::string wordd;
    std::cin >> wordd;
    k = wordd.size();
    for (int i2 = 0; i2 != k; i2++)
        std::cout << "*";
    std::cout << wordd;
    for (int i2 = 0; i2 != k; i2++)
        std::cout << "*";
    std::cout << std::endl << std::endl;

    //Задание 10.
    double sum = 0, h; 
    std::cout << "Задание 10.\n" << "Введите предложение\n";
    std::cin.ignore(32767, '\n');
    std::getline(std::cin, word);
    for (int i2 = 0; i2 != word.size(); i2++)
        if (word[i2] == 'a') sum++;
    h = sum / word.size() * 100.;
    std::cout << "Доля: " << h << "%\n\n";

    //Задание 11.
    std::cout << "Задание 11\nВведите слово\n";
    std::string string = "Can you can a can as a canner can can a can?";
    std::string string2;
    std::cin >> word;
    for (int i2 = 0; i2 < string.size() - 3; i2++)
        if (word.size() >= 3)
        {
            if (
                ((string[i2] == 'c') & (string[i2 + 1] == 'a') & (string[i2 + 2] == 'n'))
                )
            {
                string.resize(string.size() - 3 + word.size());
                string2 = string;
                for (int i3 = i2 + word.size(); i3 != string.size(); i3++)
                    string[i3] = string2[i3 + 3 - word.size()];
                for (int i3 = i2, i4 = 0; i4 != word.size(); i3++, i4++)
                    string[i3] = word[i4];
            }
        }
        else
        {
            if (
                ((string[i2] == 'c') & (string[i2 + 1] == 'a') & (string[i2 + 2] == 'n'))
                )
            {
                string2 = string;
                for (int i3 = i2 + word.size(); i3 != string.size() + word.size() - 3; i3++)
                    string[i3] = string2[i3 + 3 - word.size()];
                string.resize(string.size() - 3 + word.size());
                for (int i3 = i2, i4 = 0; i4 != word.size(); i3++, i4++)
                    string[i3] = word[i4];
            }
        }
    std::cout << string;
            





}