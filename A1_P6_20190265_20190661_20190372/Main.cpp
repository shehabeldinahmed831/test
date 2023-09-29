#include <iostream>
#include <string>
#include <vector>

using namespace std;

class StudentName
{
private:
    string Name;
public:
    StudentName(string name)
    {
        int count = 0, index = 0;
        for (int i = 0; i < name.length(); ++i)
        {
            if (name[i] == ' ')
            {
                count++;
                index = i;
            }
        }
        if (count == 0)
        {
            Name = name + " " + name + " " + name;
        }
        else if (count == 1) {
            Name = name + name.substr(index);
        }
        else if (count >= 2) {
            Name = name;
        }
    }
    void print()
    {
        vector <string> vecofNames;
        string store = "";
        for (int i = 0; i < Name.length(); ++i)
        {
            if (Name[i] != ' ')
            {
                store += Name[i];
            }
            if (Name[i] == ' ')
            {
                vecofNames.push_back(store);
                store = "";
            }
            else if (i == Name.length() - 1)
            {
                store += Name[i];
                vecofNames.push_back(store);
            }

        }
        int Num = 1;
        for (int i = 0; i < vecofNames.size(); ++i)
        {
            cout << "(" << Num << ") " << vecofNames[i] << endl;
            Num++;
        }
    }
    bool Replace(int i, int j)
    {
        vector <string> vecofNames;
        string store = "";
        for (int i = 0; i < Name.length(); ++i)
        {
            if (Name[i] == ' ')
            {
                vecofNames.push_back(store);
                store = "";
            }
            else if (i == Name.length() - 1)
            {
                store += Name[i];
                vecofNames.push_back(store);
            }
            else {
                store += Name[i];
            }

        }
        if (j > vecofNames.size() || i > vecofNames.size())
        {
            return false;
        }
        else
        {
            string temp = vecofNames[j - 1];
            vecofNames[j - 1] = vecofNames[i - 1];
            vecofNames[i - 1] = temp;
            string form;
            for (int i = 0; i < vecofNames.size(); i++)
            {
                form += vecofNames[i] + " ";
            }
            Name = form;
            cout << Name << endl;
            return true;
        }
    }
};

int main()
{
    
    string name1, name2, name3;
    cout << "Enter Student name"<<endl;
    cin >> name1;
    StudentName Student1(name1);
    if (Student1.Replace(2, 3)) {
        Student1.print();
    }
    cout << "Enter Student name" << endl;
    cin >> name2;
    StudentName Student2(name2);
    if (Student2.Replace(1, 3)) {
        Student2.print();
    }
    cout << "Enter Student name" << endl;
    cin >> name3;
    StudentName Student3(name3);
    if (Student1.Replace(2, 1)) {

        Student1.print();
    }
    


}