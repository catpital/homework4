// ** ����������� ����� � ��������� ** 
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
        cout << "������� ������ �������� ���������� + - * /  ! ^ " << endl;
        cin >> operation;
        cout << "������� 1-� ����� "; // ������ ������ �����
        cin >> a;
        if (operation != '!')
        {
            cout << "������� 2-� ����� "; // ������ ������ �����
            cin >> b;
        }
        if (operation == '/')
        {
            if (b == 0)
            {
                do
                {
                    cout << "������ �� 0 ������ ������" << endl;
                    cout << "������� 2-� ����� "; // ������ ������ ����� �������� ��� ������   
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
            cout << a << "+" << b << "=" << _ADD(a, b) << endl; // summation �����
        }
        break;

        case  '-':
        { 
            //c = a - b;
        cout << a << "-" << b << "=" << _MINUS (a,b) << endl; // subtraction ���������
        }
        break;
        case  '*':
        {
           // c = a * b;
            cout << a << "*" << b << "=" << _MULTI(a,b) << endl; // multiplication ���������
        }
        break;
        case '/':
        {
                      
            //c = a / b
            cout << a << "/" << b << "=" << _DIVIS(a,b) << endl; // division �������
        }
        break;
        case '^':
        {
          //c = a^b
            if (b>0)
            { 
                cout << a << "^" << b << "=" << _ORDE(a, b) << endl; // order �������
            }
            else {
                e = 1.0 / _ORDE(a, b);
                cout << a << "^" << b << "=" << e << endl; // order �������
                 }
         }
        break;
        case  '!':
        {
            c = fact(a);
            cout << a << " ! (��������� �����) = " << c << endl; //  factorial   ���������
        }
        break;
        default:
            cout << "������ ������������ ��������" << endl;
            break;
        }
        cout << endl;
        cout << "������� ����� ������� ��� ����������� ��� q ��� ������ ";
        cin >> exi;
        if (exi == 'q')
        {
            return 0;
        }


    }


    return 0;
}