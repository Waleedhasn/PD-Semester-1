#include <iostream>
#include <conio.h>
using namespace std;

void selectOption(int option, string &name1, float &price1, int &quantity1, float &tax1, string &name2, float &price2, int &quantity2, float &tax2, string &name3, float &price3, int &quantity3, float &tax3);
void printProductData(string name, float price, int quantity, float tax, float total);
float calculateCostPerProduct(float price, int quantity, float tax);
void printHeader();
void login();
int menu();
string uName = "Ayan";
string aName = "Waleed";
int uPassword = 12345;
int aPassword = 98765;
int option;


int main(){
    
    string name1 = " ", name2 = " ", name3 = " ";
    float price1 = 10.0, price2 = 20.0, price3 = 30.0;
    int quantity1 = 0, quantity2 = 0, quantity3 = 0;
    float tax1 = 1.0, tax2 = 2.0, tax3 = 3.0;
    float total1 = 0.0, total2 = 0.0, total3 = 0.0;
 
    
      
        login();


if(uName!="Ayan" || aName!="Waleed")
{
cout<<"User Not Found ! please sign-up first."<<endl;
}
if (uPassword!=12345 || aPassword!=98765)
{
cout << "Incorrect password !" <<endl;}
else
{
        printHeader();
        option = menu();
        selectOption(option, name1, price1, quantity1, tax1, name2, price2, quantity2, tax2, name3, price3, quantity3, tax3);
        cout << "Press any Key to Continue: ";
        getch();
        system("cls");
    
    }
    return 0;
}
void login()
{
int option;

system("cls");
cout<<"                     $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                         88        88     ,adba,     88888888ba                               $ " <<endl;
cout<<"                     $                         88        88     8I  I8     88       8b                              $ " <<endl;
cout<<"                     $                         88        88      8bdP'     88      ,8P                              $ " <<endl;
cout<<"                     $                         88aaaaaaaa88    ,d8'8b  88  88aaaaaa8P'                              $ " <<endl;
cout<<"                     $                         88        88  .dP'   Yb,8I  88    88'                                $ " <<endl;
cout<<"                     $                         88        88  8P      888'  88    `8b                                $ " <<endl;
cout<<"                     $                         88        88  8b,   ,dP8b   88     `8b                               $ " <<endl;
cout<<"                     $                         88        88  `Y8888P   Yb  88      `8b                              $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                       88           ,ad8888ba,      ,ad8888ba,   88  888b      88             $ " <<endl;   
cout<<"                     $                       88          d8 '    ` 8b    d8 '    ` 8b  88  8888b     88             $ " <<endl;   
cout<<"                     $                       88         d8'        `8b  d8'            88  88 `8b    88             $ " <<endl;    
cout<<"                     $                       88         88          88  88      88888  88  88   `8b  88             $ " <<endl;   
cout<<"                     $                       88          Y8a.    .a8P    Y8a.    .a88  88  88     `8888             $ " <<endl;   
cout<<"                     $                       88888888888  ` Y8888Y '      `'Y88888P'   88  88      `888             $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                     1. USER LOGIN                                                            $ " <<endl;
cout<<"                     $                     2. ADMIN LOGIN                                                           $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $                                                                                              $ " <<endl;
cout<<"                     $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ " <<endl;
cout<<" Your option:";
cin >> option;
if(option==1)
{
system("cls");
cout<<"              _____                                                                                   _____   " <<endl;
cout<<"             ( ___ )                                                                                 ( ___ )  " <<endl;
cout<<"              |   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|   |   " <<endl;
cout<<"              |   |      88        88   ad88888ba   88888888888  88888888ba                           |   |   " <<endl;
cout<<"              |   |      88        88  d8'     '8b  88           88      '8b                          |   |   " <<endl;
cout<<"              |   |      88        88  Y8,          88           88      ,8P                          |   |  " <<endl;
cout<<"              |   |      88        88  `Y8aaaaa,    88aaaaa      88aaaaaa8P'                          |   |   " <<endl;
cout<<"              |   |      88        88    `'''''8b,  88'''''      88''''88'                            |   |   " <<endl;
cout<<"              |   |      88        88          `8b  88           88    `8b                            |   |  " <<endl;
cout<<"              |   |      Y8a.    .a8P  Y8a     a8P  88           88     `8b                           |   |  " <<endl;
cout<<"              |   |       `'Y8888Y''    'Y88888P'   88888888888  88      `8b                          |   |  " <<endl;
cout<<"              |   |                                                                                   |   |  " <<endl;
cout<<"              |   |      88           ,ad8888ba,      ,ad8888ba,   88  888b      88                   |   |  " <<endl;
cout<<"              |   |      88          d8''    `'8b    d8''    `'8b  88  8888b     88                   |   |  " <<endl;
cout<<"              |   |      88         d8'        `8b  d8'            88  88 `8b    88                   |   |  " <<endl;
cout<<"              |   |      88         88          88  88             88  88  `8b   88                   |   |  " <<endl;
cout<<"              |   |      88         88          88  88      88888  88  88   `8b  88                   |   |  " <<endl;
cout<<"              |   |      88         Y8,        ,8P  Y8,        88  88  88    `8b 88                   |   |  " <<endl;
cout<<"              |   |      88          Y8a.    .a8P    Y8a.    .a88  88  88     `8888                   |   |  " <<endl;
cout<<"              |   |      88888888888  `'Y8888Y''      `'Y88888P'   88  88      `888                   |   |  " <<endl;
cout<<"              |___|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|___|  " <<endl;
cout<<"             (_____)                                                                                 (_____) " <<endl;
cout<<"                                                                              "<<endl;
cout<<"                                                                              "<<endl;
cout <<"                User Name:";
cin >> uName;
cout <<"                Password:";
cin >> uPassword;
}
if(option==2)
{
system("cls");
cout<<"          _____                                                                                   _____  " <<endl;
cout<<"         ( ___ )                                                                                 ( ___ ) " <<endl;
cout<<"          |   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|   |  " <<endl;
cout<<"          |   |             db         88888888ba,    88b           d88  88  888b      88         |   |  " <<endl;
cout<<"          |   |            d88b        88      `'8b   888b         d888  88  8888b     88         |   |  " <<endl;
cout<<"          |   |           d8'`8b       88        `8b  88`8b       d8'88  88  88 `8b    88         |   |  " <<endl;
cout<<"          |   |          d8'  `8b      88         88  88 `8b     d8' 88  88  88  `8b   88         |   |  " <<endl;
cout<<"          |   |         d8YaaaaY8b     88         88  88  `8b   d8'  88  88  88   `8b  88         |   |  " <<endl;
cout<<"          |   |        d8''''''''8b    88         8P  88   `8b d8'   88  88  88    `8b 88         |   |  " <<endl;
cout<<"          |   |       d8'        `8b   88      .a8P   88    `888'    88  88  88     `8888         |   |  " <<endl;
cout<<"          |   |      d8'          `8b  88888888Y''    88     `8'     88  88  88      `888         |   |  " <<endl;
cout<<"          |   |                                                                                   |   |  " <<endl;
cout<<"          |   |      88           ,ad8888ba,      ,ad8888ba,   88  888b      88                   |   |  " <<endl;
cout<<"          |   |      88          d8''    `'8b    d8''    `'8b  88  8888b     88                   |   |  " <<endl;
cout<<"          |   |      88         d8'        `8b  d8'            88  88 `8b    88                   |   |  " <<endl;
cout<<"          |   |      88         88          88  88             88  88  `8b   88                   |   |  " <<endl;
cout<<"          |   |      88         88          88  88      88888  88  88   `8b  88                   |   |  " <<endl;
cout<<"          |   |      88         Y8,        ,8P  Y8,        88  88  88    `8b 88                   |   |  " <<endl;
cout<<"          |   |      88          Y8a.    .a8P    Y8a.    .a88  88  88     `8888                   |   |  " <<endl;
cout<<"          |   |      88888888888  `'Y8888Y''      `'Y88888P'   88  88      `888                   |   |  " <<endl;
cout<<"          |___|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|___|  " <<endl;
cout<<"         (_____)                                                                                 (_____) " <<endl;
cout<<"                                                                              "<<endl;
cout<<"                                                                              "<<endl;
cout <<"                Admin Name:";
cin >> aName;
cout <<"                Password:";
cin >> aPassword;
}


if(uName!="Ayan" || aName!="Waleed")
{
cout<<"User Not Found ! please sign-up first."<<endl;


}
}

void selectOption(int option, string &name1, float &price1, int &quantity1, float &tax1,
                  string &name2, float &price2, int &quantity2, float &tax2,
                  string &name3, float &price3, int &quantity3, float &tax3)
{
    float total1, total2, total3;
    if (option == 1) {
system("cls");
cout <<"##################################################################"<<endl;
cout <<"##    **************            ##     ****************         ##"<<endl;
cout <<"##    * FRUIT NAME *            ##     * PRICE    (Rs)*         ##"<<endl;
cout <<"##    **************            ##     ****************         ##"<<endl;
cout <<"###################################################################################################################################"<<endl;
cout <<"##                              ##                              ###                              ##                              ##"<<endl;
cout <<"##         APPLE                ##          300 /KG             ###       GRAPES                 ##        400 /KG               ##"<<endl;
cout <<"##                              ##                              ###                              ##                              ##"<<endl;
cout <<"###################################################################################################################################"<<endl;
cout <<"##                              ##                              ###                              ##                              ##"<<endl;
cout <<"##        MANGO                 ##          300 /KG             ###       ORANGE                 ##         250 /KG              ##"<<endl;
cout <<"##                              ##                              ###                              ##                              ##"<<endl;
cout <<"###################################################################################################################################"<<endl;
cout <<"##                              ##                              ###                              ##                              ##"<<endl;
cout <<"##        BANANA                ##          100 /KG             ###       DRAGON FRUIT           ##        3000 /Pc              ## "<<endl;
cout <<"##                              ##                              ###                              ##                              ##"<<endl;
cout <<"###################################################################################################################################"<<endl;
cout <<"##                              ##                              ###                              ##                              ##"<<endl;
cout <<"##        MELON                 ##         200 /KG              ###        POMEGRANATE           ##        1000 /KG              ##"<<endl;
cout <<"##                              ##                              ###                              ##                              ##"<<endl;
cout <<"################################################################################################################################### "<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##       APRICOT                ##         250 /KG              ##"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##################################################################"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##       KIWI                   ##        250 /KG               ##"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"################################################################## "<<endl;


        cout << "Enter the name of FRUIT: ";
        cin  >>  name1;
        cout << "Enter the price of FRUIT: ";
        cin  >>  price1;
        cout << "Enter the quantity of FRUIT: ";
        cin  >>  quantity1;
        cout << "Enter the tax rate on FRUIT (%): ";
        cin  >>  tax1;
menu();
    }
    if (option == 2) {
system("cls");
cout <<"##################################################################"<<endl;
cout <<"##    ******************        ##     ****************         ##"<<endl;
cout <<"##    * VEGETABLE NAME *        ##     * PRICE    (Rs)*         ##"<<endl;
cout <<"##    ******************        ##     ****************         ##"<<endl;
cout <<"##################################################################################################################################"<<endl;
cout <<"##                              ##                              ##                              ##                              ##"<<endl;
cout <<"##         POTATO               ##          80 /KG              ##       PUMPKIN                ##        200 /KG               ##"<<endl;
cout <<"##                              ##                              ##                              ##                              ##"<<endl;
cout <<"##################################################################################################################################"<<endl;
cout <<"##                              ##                              ##                              ##                              ##"<<endl;
cout <<"##        TOMATO                ##          100 /KG             ##       CUCUMBER               ##        100 /KG               ##"<<endl;
cout <<"##                              ##                              ##                              ##                              ##"<<endl;
cout <<"##################################################################################################################################"<<endl;
cout <<"##                              ##                              ##                              ##                              ##"<<endl;
cout <<"##        GARLIC                ##          600 /KG             ##       CARROT                 ##         100 /KG              ## "<<endl;
cout <<"##                              ##                              ##                              ##                              ##"<<endl;
cout <<"##################################################################################################################################"<<endl;
cout <<"##                              ##                              ##                              ##                              ##"<<endl;
cout <<"##        ONION                 ##         100 /KG              ##        CORIANDER             ##        50 /KG                ##"<<endl;
cout <<"##                              ##                              ##                              ##                              ##"<<endl;
cout <<"##################################################################################################################################"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##       LADY FINGER            ##         150 /KG              ##"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##################################################################"<<endl;


        cout << "Enter the name of VEGETABLE : ";
        cin >> name2;
        cout << "Enter the price of VEGETABLE: ";
        cin >> price2;
        cout << "Enter the quantity of VEGETABLE: ";
        cin >> quantity2;
        cout << "Enter the tax rate on VEGETABLE (%): ";
        cin >> tax2;
menu();
    }
    if (option == 3) {
system("cls");
cout <<"##################################################################"<<endl;
cout <<"##    ******************        ##     ****************         ##"<<endl;
cout <<"##    * DAIRY PRODUCTS *        ##     * PRICE    (Rs)*         ##"<<endl;
cout <<"##    ******************        ##     ****************         ##"<<endl;
cout <<"##################################################################"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##         MILK                 ##          80 /KG              ##"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##################################################################"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##        BUTTER                ##          100 /KG             ##"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##################################################################"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##       YOUGHART               ##          600 /KG             ##"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##################################################################"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##       CHEESE                 ##         100 /KG              ##"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"################################################################## "<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##       DESI GHEE              ##         150 /KG              ##"<<endl;
cout <<"##                              ##                              ##"<<endl;
cout <<"##################################################################"<<endl;
        cout << "Enter the name of DAIRY PRODUCT: ";
        cin >> name3;
        cout << "Enter the price of DAIRY PRODUCT: ";
        cin >> price3;
        cout << "Enter the quantity of DAIRY PRODUCT: ";
        cin >> quantity3;
        cout << "Enter the tax rate on DAIRY PRODUCT (%): ";
        cin >> tax3;
menu();
    }
    if (option == 4) {
        total1 = price1 * quantity1;
        total1 = total1 + total1 * ((tax1 / 100));
        total2 = price2 * quantity2;
        total2 = total2 + total2 * ((tax2 / 100));
        total3 = price3 * quantity3;
        total3 = total3 + total3 * ((tax3 / 100));

        float totalPayable = total1 + total2 + total3;

        cout << "Total Payable Amount (including tax): " << totalPayable << endl;
    }
    if (option == 5) {
        cout << "All Products Data" << endl;
        cout << "Name" << "\t" << "Price " << "\t" << "Quantity"  << "\t" << "Total"; 
        cout << endl;
        cout << name1 << "\t" << price1 << "\t" << quantity1    << "\t" << total1;
        cout << endl;
        cout << name2 << "\t" << price2 << "\t" << quantity2  << "\t" << total2;
        cout << endl;
        cout << name3 << "\t" << price3 << "\t" << quantity3  << "\t" << total3;
        cout << endl;
    }
    if (option == 6) {
        exit(0);
    }
}

int menu()
{
    int option;
    cout << "Select one of the following options number..." << endl;
    cout << "1. Fruits:" << endl;
    cout << "2. Vegetables:" << endl;
    cout << "3. Dairy products:" << endl;
    cout << "4. Calculate Total:" << endl;
    cout << "5. Print BILL" << endl;
    cout << "6. Exit" << endl;
    cout << "Your Option.. ";
    cin >> option;
    return option;
}

void printHeader()
{
    system("cls");
cout<<"                     $                         88        88     ,adba,     88888888ba                               $ " <<endl;
cout<<"                     $                         88        88     8I  I8     88       8b                              $ " <<endl;
cout<<"                     $                         88        88      8bdP'     88      ,8P                              $ " <<endl;
cout<<"                     $                         88aaaaaaaa88    ,d8'8b  88  88aaaaaa8P'                              $ " <<endl;
cout<<"                     $                         88        88  .dP'   Yb,8I  88    88'                                $ " <<endl;
cout<<"                     $                         88        88  8P      888'  88    `8b                                $ " <<endl;
cout<<"                     $                         88        88  8b,   ,dP8b   88     `8b                               $ " <<endl;
cout<<"                     $                         88        88  `Y8888P   Yb  88      `8b                              $ " <<endl;
    cout << endl;
}

float calculateCostPerProduct(float price, int quantity, float tax)
{
    float total;
    total = price * quantity;
    total = total + total * ((tax / 100));
    return total;
}

