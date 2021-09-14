﻿#include <iostream>
#include <set>

using namespace std;

int main()
{
    cout << "Please, enter coefficients\n";
    double a = 0;
    double b = 0;
    double c = 0;
    cin >> a >> b >> c;
    if (a == 0)
    {
        cout << "Wrong data\n";
        return 0;
    }
    double discriminant;
    discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
    {
        cout << "I've got no roots\n";
        return 0;
    }
    set <double>  answer;
    answer.insert((-b - sqrt(discriminant)) / (2 * a));
    answer.insert((-b + sqrt(discriminant)) / (2 * a));
    for (auto it = answer.begin(); it != answer.end(); ++it)
    {
        cout << *it << " ";
    }
    return 0;
}