#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int wybor_1,wybor_2,liczba_1,liczba_pomocnicza_1,wynik_2=0,j=0,wynik_3=0;
    string liczba_2,liczba_3;
    vector <int> wynik_1;
    cout << "Podaj jak chcesz przeliczac: " << endl;
    cout << "1) Z dziesietnego na inne\n2) Z innych na dziesietne\n3) Z Dwojkowego na Szesnastkowy\n4) Z Szesnastkowego na Dwojkowy\n5) Z Rzymski na Dziesietny\n";
    cin >> wybor_1;
    switch (wybor_1)
    {
        case 1:
        {
            cout << "Podaj liczbe: ";
            cin >> liczba_1;
            for(int i=2;i<17;i++)
            {
                if(i==10) goto berlin;
                liczba_pomocnicza_1=liczba_1;
                while(liczba_pomocnicza_1>0)
                {
                    wynik_1.push_back(liczba_pomocnicza_1%i);
                    liczba_pomocnicza_1=liczba_pomocnicza_1/i;
                }
                cout << i << " ";
                for(int j=wynik_1.size()-1;j>-1;j--)
                {
                    if(wynik_1[j]<10) cout << wynik_1[j];
                    else
                    {
                        switch (wynik_1[j])
                        {
                            case 10:
                            {
                                cout << "A";
                                break;
                            }
                            case 11:
                            {
                                cout << "B";
                                break;
                            }
                            case 12:
                            {
                                cout << "C";
                                break;
                            }
                            case 13:
                            {
                                cout << "D";
                                break;
                            }
                            case 14:
                            {
                                cout << "E";
                                break;
                            }
                            case 15:
                            {
                                cout << "F";
                                break;
                            }
                        }
                    }
                }
                wynik_1.clear();
                cout << endl;
                berlin:;
            }
            break;
        }
        case 2:
        {
            cout << "Z jakego: ";
            cin >> wybor_2;
            switch (wybor_2)
            {
                case 2:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        wynik_2+=(liczba_2[j]-48)*pow(2,i);
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 3:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        wynik_2+=(liczba_2[j]-48)*pow(3,i);
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 4:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        wynik_2+=(liczba_2[j]-48)*pow(4,i);
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 5:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        wynik_2+=(liczba_2[j]-48)*pow(5,i);
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 6:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        wynik_2+=(liczba_2[j]-48)*pow(6,i);
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 7:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        wynik_2+=(liczba_2[j]-48)*pow(7,i);
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 8:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        wynik_2+=(liczba_2[j]-48)*pow(8,i);
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 9:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        wynik_2+=(liczba_2[j]-48)*pow(9,i);
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 11:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        if((liczba_2[j]-48)<10) wynik_2+=(liczba_2[j]-48)*pow(11,i);
                        else
                        {
                            wynik_2+=(10)*pow(11,i);
                        }
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 12:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        if((liczba_2[j]-48)<10) wynik_2+=(liczba_2[j]-48)*pow(12,i);
                        else
                        {
                            switch (liczba_2[j])
                            {
                                case 65://A
                                {
                                    wynik_2+=(10)*pow(12,i);
                                    break;
                                }
                                case 66://B
                                {
                                    wynik_2+=(11)*pow(12,i);
                                    break;
                                }
                            }
                        }
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 13:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        if((liczba_2[j]-48)<10) wynik_2+=(liczba_2[j]-48)*pow(13,i);
                        else
                        {
                            switch (liczba_2[j])
                            {
                                case 65://A
                                {
                                    wynik_2+=(10)*pow(13,i);
                                    break;
                                }
                                case 66://B
                                {
                                    wynik_2+=(11)*pow(13,i);
                                    break;
                                }
                                case 67://C
                                {
                                    wynik_2+=(12)*pow(13,i);
                                    break;
                                }
                            }
                        }
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 14:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        if((liczba_2[j]-48)<10) wynik_2+=(liczba_2[j]-48)*pow(14,i);
                        else
                        {
                            switch (liczba_2[j])
                            {
                                case 65://A
                                {
                                    wynik_2+=(10)*pow(14,i);
                                    break;
                                }
                                case 66://B
                                {
                                    wynik_2+=(11)*pow(14,i);
                                    break;
                                }
                                case 67://C
                                {
                                    wynik_2+=(12)*pow(14,i);
                                    break;
                                }
                                case 68://D
                                {
                                    wynik_2+=(13)*pow(14,i);
                                    break;
                                }
                            }
                        }
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 15:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        if((liczba_2[j]-48)<10) wynik_2+=(liczba_2[j]-48)*pow(15,i);
                        else
                        {
                            switch (liczba_2[j])
                            {
                                case 65://A
                                {
                                    wynik_2+=(10)*pow(15,i);
                                    break;
                                }
                                case 66://B
                                {
                                    wynik_2+=(11)*pow(15,i);
                                    break;
                                }
                                case 67://C
                                {
                                    wynik_2+=(12)*pow(15,i);
                                    break;
                                }
                                case 68://D
                                {
                                    wynik_2+=(13)*pow(15,i);
                                    break;
                                }
                                case 69://E
                                {
                                    wynik_2+=(14)*pow(15,i);
                                    break;
                                }
                            }
                        }
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
                case 16:
                {
                    cout << "Podaj liczbe: ";
                    cin >> liczba_2;
                    for(int i=liczba_2.size()-1;i>-1;i--)
                    {
                        if((liczba_2[j]-48)<10) wynik_2+=(liczba_2[j]-48)*pow(16,i);
                        else
                        {
                            switch (liczba_2[j])
                            {
                                case 65://A
                                {
                                    wynik_2+=(10)*pow(16,i);
                                    break;
                                }
                                case 66://B
                                {
                                    wynik_2+=(11)*pow(16,i);
                                    break;
                                }
                                case 67://C
                                {
                                    wynik_2+=(12)*pow(16,i);
                                    break;
                                }
                                case 68://D
                                {
                                    wynik_2+=(13)*pow(16,i);
                                    break;
                                }
                                case 69://E
                                {
                                    wynik_2+=(14)*pow(16,i);
                                    break;
                                }
                                case 70://F
                                {
                                    wynik_2+=(15)*pow(16,i);
                                    break;
                                }
                            }
                        }
                        j++;
                    }
                    cout << "Wynik: " << wynik_2;
                    break;
                }
            }
            break;
        }
        case 3:
        {
            //Z dwojkowego na dziesiatkowy
            cout << "Podaj liczbe: ";
            string liczba_3;
            int liczba_3_dwojkowa=0;
            cin >> liczba_3;
            for(int i=liczba_3.size()-1;i>-1;i--)
            {
                liczba_3_dwojkowa+=((liczba_3[j]-48)*pow(2,i));
                j++;
            }
            //Z dziesietnego na szesnastkowy
            vector <int> tab_A;
            while(liczba_3_dwojkowa>0)
            {
                tab_A.push_back(liczba_3_dwojkowa%16);
                liczba_3_dwojkowa=liczba_3_dwojkowa/16;
            }

            for(int i=tab_A.size()-1;i>-1;i--)
            {
                if(tab_A[i]<10) cout << tab_A[i];
                else
                {
                    switch (tab_A[i])
                    {
                        case 10:
                        {
                            cout << "A";
                            break;
                        }
                        case 11:
                        {
                            cout << "B";
                            break;
                        }
                        case 12:
                        {
                            cout << "C";
                            break;
                        }
                        case 13:
                        {
                            cout << "D";
                            break;
                        }
                        case 14:
                        {
                            cout << "E";
                            break;
                        }
                        case 15:
                        {
                            cout << "F";
                            break;
                        }
                    }
                } 
            }
            break;
        }
        case 4:
        {
            cout << "Podaj liczbe: ";
            string liczba_4_szesnastkowa;
            cin >> liczba_4_szesnastkowa;
            //Z szesnastkowego na dziesiatkowy
            for (int i = liczba_4_szesnastkowa.size() - 1; i > -1; i--)
            {
                if ((liczba_4_szesnastkowa[j] - 48) < 10)
                    wynik_2 += (liczba_4_szesnastkowa[j] - 48) * pow(16, i);
                else
                {
                    switch (liczba_4_szesnastkowa[j])
                    {
                        case 65: //A
                        {
                            wynik_2 += (10) * pow(16, i);
                            break;
                        }
                        case 66: //B
                        {
                            wynik_2 += (11) * pow(16, i);
                            break;
                        }
                        case 67: //C
                        {
                            wynik_2 += (12) * pow(16, i);
                            break;
                        }
                        case 68: //D
                        {
                            wynik_2 += (13) * pow(16, i);
                            break;
                        }
                        case 69: //E
                        {
                            wynik_2 += (14) * pow(16, i);
                            break;
                        }
                        case 70: //F
                        {
                            wynik_2 += (15) * pow(16, i);
                            break;
                        }
                    }
                }
                j++;
            }
            //Z dziesietnego na Binarny
            vector <int> tab_A;
            while(wynik_2>0)
            {
                tab_A.push_back(wynik_2%2);
                wynik_2=wynik_2/2;
            }
            for(int i=tab_A.size()-1;i>-1;i--)
            {
                cout << tab_A[i];
            }
            break;
        }
        case 5:
        {
            //Z rzymskiego na dziesietny
            string liczba;
            cout << "Podaj liczbe rzymska :";
            cin >> liczba;
            int liczba_wyjsciowa = 0;
            for (int i=0; i<=liczba.size()-1;i++)
            {
                switch (liczba[i])
                {
                    case 73://I
                    {
                        if(liczba[i+1]==73||liczba[i+1]==NULL)
                        {
                            liczba_wyjsciowa++;
                        }
                        else
                        {
                            liczba_wyjsciowa--;
                        }
                        break;
                    }
                    case 86://V
                    {
                        if(liczba[i+1]==NULL||liczba[i+1]==73||liczba[i+1]==86)
                        {
                            liczba_wyjsciowa+=5;
                        }
                        else
                        {
                            liczba_wyjsciowa-=5;
                        }
                        break;
                    }
                    case 88://X
                    {
                        if(liczba[i+1]==NULL||liczba[i+1]==73||liczba[i+1]==86||liczba[i+1]==88)
                        {
                            liczba_wyjsciowa+=10;
                        }
                        else
                        {
                            liczba_wyjsciowa-=10;
                        }
                        break;
                    }
                    case 76://L
                    {
                        if(liczba[i+1]==NULL||liczba[i+1]==73||liczba[i+1]==86||liczba[i+1]==88||liczba[i+1]==76)
                        {
                            liczba_wyjsciowa+=50;
                        }
                        else
                        {
                            liczba_wyjsciowa-=50;
                        }
                        break;
                    }
                    case 67://C
                    {
                        if(liczba[i+1]==NULL||liczba[i+1]==73||liczba[i+1]==86||liczba[i+1]==88||liczba[i+1]==76||liczba[i+1]==67)
                        {
                            liczba_wyjsciowa+=100;
                        }
                        else
                        {
                            liczba_wyjsciowa-=100;
                        }
                        break;
                    }
                    case 68://D
                    {
                        if(liczba[i+1]==NULL||liczba[i+1]==73||liczba[i+1]==86||liczba[i+1]==88||liczba[i+1]==76||liczba[i+1]==67||liczba[i+1]==68)
                        {
                            liczba_wyjsciowa+=500;
                        }
                        else
                        {
                            liczba_wyjsciowa-=500;
                        }
                        break;
                    }
                    case 77://M
                    {
                        if(liczba[i+1]==NULL||liczba[i+1]==73||liczba[i+1]==86||liczba[i+1]==88||liczba[i+1]==76||liczba[i+1]==67||liczba[i+1]==68||liczba[i+1]==77)
                        {
                            liczba_wyjsciowa+=1000;
                        }
                        else
                        {
                            liczba_wyjsciowa-=1000;
                        }
                        break;
                    }
                }
            }
                cout << "Liczba" << liczba << " w systemie rzymskim to " << liczba_wyjsciowa;
        }
        break;
    }
    return 0;
}
