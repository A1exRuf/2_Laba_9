#include "Extender.h"

Extender::Extender(int n)
{
    this->n = n;
    extenderArray = new ExtenderStruct[n];
}

void Extender::inputArray()
{
    string colorInput;

   

    for (int i = 0; i < n; i++)
    {
        cout << "Enter socket amount: ";
        cin >> extenderArray[i].socketAmount;

        cout << "Enter wire length: ";
        cin >> extenderArray[i].wireLength;

        cout << "Enter color ( white, black, silver ): ";
        cin >> colorInput;
        if (colorInput == "white") {
            extenderArray[i].color = ExtenderColor::white;
        }
        else if (colorInput == "black") {
            extenderArray[i].color = ExtenderColor::black;
        }
        else if (colorInput == "silver") {
            extenderArray[i].color = ExtenderColor::silver;
        }
        cout << endl;
    }
}

void Extender::outputArray()
{
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
        cout << "Socket amount: " << extenderArray[i].socketAmount << endl;
        cout << "Wire length: " << extenderArray[i].wireLength << endl;
        cout << "Color: " << extenderArray[i].color << endl;
    }
}

void Extender::sortArray()
{
    sort(extenderArray, extenderArray + n, [](const ExtenderStruct& a, const ExtenderStruct& b)
        {
            return a.wireLength < b.wireLength;
        });
}

void Extender::searchArray()
{
    double desiredLength;
    while (true)
    {
        bool found = false;
        cout << "Enter wire length: ";
        cin >> desiredLength;

        if (desiredLength != 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (extenderArray[i].wireLength == desiredLength)
                {
                    cout << "Appropriate extender:" << endl;
                    cout << "Index: " << i << endl;
                    cout << "Socket amount: " << extenderArray[i].socketAmount << endl;
                    cout << "Wire length: " << extenderArray[i].wireLength << endl;
                    cout << "Color: " << extenderArray[i].color << endl;

                    found = true;
                }
            }

            if (!found)
            {
                cout << "No appropriate extender" << endl;
            }
        }
        else
        {
            break;
        }
    }
};

Extender::~Extender()
{
    delete[] extenderArray;
}
