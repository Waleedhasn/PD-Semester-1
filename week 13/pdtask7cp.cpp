#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
void pizza_points(int min_orders, int min_price);

int main()
{
    int min_orders, min_price;

    cout << "Enter the minimum number of orders: ";
    cin >> min_orders;
    cout << "Enter the minimum order price: ";
    cin >> min_price;

    pizza_points(min_orders, min_price);

    return 0;
}


void pizza_points(int min_orders, int min_price)
{
    ifstream file("Customers.txt");

    if (!file.is_open())
    {
        cout << "Error opening file." << endl;
        return;
    }

    char line[512];

    while (file.getline(line, 512))
    {
        char name[100];
        int num_orders = 0;
        int order_prices[100];
        int order_count = 0;

        int i = 0;

        while (line[i] != ' ' && line[i] != '\0')
        {
            name[i] = line[i];
            i++;
        }
        name[i] = '\0';

        while (line[i] == ' ')
        {
            i++;
        }
        num_orders = atoi(&line[i]);

        while (line[i] != ' ' && line[i] != '\0')
        {
            i++;
        }

        while (line[i] == ' ' || line[i] == '[')
        {
            i++;
        }

        while (line[i] != ']' && line[i] != '\0')
        {
            if (isdigit(line[i]))
            {
                order_prices[order_count++] = atoi(&line[i]);
                while (isdigit(line[i]))
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }

        if (num_orders >= min_orders)
        {
            int eligible_orders = 0;
            for (int j = 0; j < order_count; j++)
            {
                if (order_prices[j] >= min_price)
                {
                    eligible_orders++;
                }
            }
            if (eligible_orders >= min_orders)
            {
                cout << name << endl;
            }
        }
    }

    file.close();
}

