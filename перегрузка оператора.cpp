#include <iostream>
#include <string.h>

using namespace std;

class StringsWork
{
private:
    char str[256];
public:
    StringsWork()
    {
        for(int i = 0; i < 256; i++)  str[i] = '\0';
    }

    void operator +(char*);
    void getStr();
};

void StringsWork::operator +(char *s)
{
    strcat(str, s);
}

void StringsWork::getStr()
{
    cout << str << endl << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");

    char *str1 = new char [strlen("оператора;\n")+1];
    char *str2 = new char [strlen("Перегрузка;\n")+1];
    char *str3 = new char [strlen("'+'\n")+1];

    strcpy(str1,"оператора ");
    strcpy(str2,"Перегрузка ");
    strcpy(str3,"'+'");

    cout << "1) " << str1 << endl;
    cout << "2) " << str2 << endl;
    cout << "3) " << str3 << endl << endl;

    cout << endl;
    cout << endl;


    StringsWork story;
    story + str2;
    story + str1;
    story + str3;

    story.getStr();



    delete [] str3;
    delete [] str2;
    delete [] str1;

    return 0;
}