#include <iostream>
using namespace std;

/** \brief
 *
 * Employee Program V-1 (V-2 is in Functions project)
 *
 */


void employeeProgram()
{
    string name[500];
    int age[500];
    int salary[500];
    int choice;

    for(int i = 0; i < 500;)
    {
        cout << "Enter your choice:" << endl;
        cout << "1) Add new employee" << endl;
        cout << "2) Print all employees" << endl;
        cout << "3) Delete by age" << endl;
        cout << "4) Update salary by name" << endl;
        cout << "5) Exit" << endl;
        cin >> choice;

        switch(choice)
        {
        case 1:
            {
                cout << "Enter name: ";
                string Name;
                cin >> Name;
                name[i] = Name;

                cout << "Enter age: ";
                int Age;
                cin >> Age;
                age[i] = Age;

                cout << "Enter salary: ";
                int Salary;
                cin >> Salary;
                salary[i] = Salary;

                ++i;
            }

            break;
        case 2:
            {
                for (int j = 0; j < i; ++j)
                {
                    cout << "name: " << name[j] << " age: "<< age[j] << " salary: " << salary[j] << endl;
                }

            }
            break;
        case 3:
            {
                int Age1, Age2;
                cout << "Enter age range: ";
                cin >> Age1 >> Age2;

                for (int j = 0; j < i; ++j)
                {
                    if (age[j] >= Age1 && age[j] <= Age2)
                    {
                        name[j] = "";
                        age[j] = 0;
                        salary[j] = 0;
                    }
                }
            }


            break;
        case 4:
            {
                cout << "Enter name: ";
                string Name;
                cin >> Name;
                int Salary;
                cout << "\nEnter salary: ";
                cin >> Salary;
                bool done = true;

                for (int j = 0; j < i; ++j)
                {
                    if (name[j] == Name)
                    {
                        salary[j] = Salary;
                        done = false;
                    }
                }

                if (done)
                    cout << "not found." << endl;
                else
                cout << "Done";
            }

            break;
        }

        if (choice == 5)
            break;
    }
}
