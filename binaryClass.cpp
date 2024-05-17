#include <iostream>
#include <string>
using namespace std;

//program to take a binary string from user and return its ones compliment

class binary
{
private:
    string s;
    void chck_bin();
    bool stopp = false;

public:
    void binaryinp()
    {
        cout << "Enter a binary String: ";
        cin >> s;
    }
    void ones_comp();
};

void binary ::ones_comp()
{
    chck_bin();
    if (!stopp)
    {

        int i = 0;
        while (i < s.length())
        {
            if (s[i] == '1')
            {
                s[i] = '0';
            }
            else
            {
                s[i] = '1';
            }
            i++;
        }
    cout <<"Ones compliment is: "<<s;
    }
    else{
        cout<<"Exit from program";
    }
}
void binary ::chck_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' || s[i] == '1')
        {
            stopp = false;
        }
        else
        {
            cout << "Invalid Binary"<<endl;
            stopp = true;
            break;
        }
    }
}

int main()
{
    binary bin;
    bin.binaryinp();
    bin.ones_comp();

    return 0;
}

