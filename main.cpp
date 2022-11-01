// ** калькулятор новый с функциями ** 
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <locale.h>
#include "func.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    // setlocale(chip1251, "");
    int a;
    int b;
    // int i;
   int  c = 0;
    float d;
    float e;
    e = 0;
    d = 0;
    char exi, operation;
    exi = '6';
    while (exi != 'q')
    {
        cout << "Введите символ действия вычисления + - * /  ! ^ " << endl;
        cin >> operation;
        cout << "Введите 1-е число "; // ввести первое число
        cin >> a;
        if (operation != '!')
        {
            cout << "ВВедите 2-е число "; // ввести второе число
            cin >> b;
        }
        if (operation == '/')
        {
            if (b == 0)
            {
                do
                {
                    cout << "Ошибка на 0 делить нельзя" << endl;
                    cout << "Введите 2-е число "; // ввести второе число повторно при ошибке   
                    cin >> b;
                } 
                while (b == 0);

            }
        }
        switch (operation)
        {
        case '+':
        { 
           // c=a+b
            cout << a << "+" << b << "=" << _ADD(a, b) << endl; // summation сумма
        }
        break;

        case  '-':
        { 
            //c = a - b;
        cout << a << "-" << b << "=" << _MINUS (a,b) << endl; // subtraction вычитание
        }
        break;
        case  '*':
        {
           // c = a * b;
            cout << a << "*" << b << "=" << _MULTI(a,b) << endl; // multiplication умножение
        }
        break;
        case '/':
        {
                      
            //c = a / b
            cout << a << "/" << b << "=" << _DIVIS(a,b) << endl; // division деление
        }
        break;
        case '^':
        {
          //c = a^b
            if (b>0)
            { 
                cout << a << "^" << b << "=" << _ORDE(a, b) << endl; // order степень
            }
            else {
                e = 1.0 / _ORDE(a, b);
                cout << a << "^" << b << "=" << e << endl; // order степень
                 }
         }
        break;
        case  '!':
        {
            c = fact(a);
            cout << a << " ! (факториал числа) = " << c << endl; //  factorial   факториал
        }
        break;
        default:
            cout << "Выбран неправильный оператор" << endl;
            break;
        }
        cout << endl;
        cout << "Нажмите любую клавишу для продолжения или q для выхода ";
        cin >> exi;
        if (exi == 'q')
        {
            return 0;
        }


    }


    return 0;
}