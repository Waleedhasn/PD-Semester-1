  #include <iostream>
using namespace std;

string printLogin();
void userSignup();
void adminSignup();
void adminLogin();
void userLogin();
void admin();
void user();
void addProduct(string options);
void checkStock();
void changePrices();
void printHeader();
void displayProducts();
void userViewProducts(string options);
void purchaseProduct(string options);
void printBill();
void calculateTotal();
void deleteProduct(string options);

string userName[10], userPassword[10];
string adminName[10], adminPassword[10];
string fruitNames[10], vegetableNames[10], dairyNames[10];
float fruitPrices[10], vegetablePrices[10], dairyPrices[10];
int fruitStock[10], vegetableStock[10], dairyStock[10];
int fruitCount = 0, vegetableCount = 0, dairyCount = 0;
int userCount = 0, adminCount = 0;
float userTotal = 0;
int fruitCart[10] = {0}, vegetableCart[10] = {0}, dairyCart[10] = {0};

main() 
{
    string option;
    while (true)
     {
        option = printLogin();
        if (option == "1")
         {
            userSignup();
        } 
        else if (option == "2")
         {
            adminSignup();
        } else if (option == "3") 
        {
            adminLogin();
        } else if (option == "4")
         {
            userLogin();
        } 
        else 
        {
            cout << "Invalid option! Try again." << endl;
            system("pause");
        }
    }
}

string printLogin()
 {
    string option;
    system("cls");
    cout << "                     $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ " << endl;
    cout << "                     $                                                                                              $ " << endl;
    cout << "                     $                         88        88     ,adba,     88888888ba                               $ " << endl;
    cout << "                     $                         88        88     8I  I8     88       8b                              $ " << endl;
    cout << "                     $                         88        88      8bdP'     88      ,8P                              $ " << endl;
    cout << "                     $                         88aaaaaaaa88    ,d8'8b  88  88aaaaaa8P'                              $ " << endl;
    cout << "                     $                         88        88  .dP'   Yb,8I  88    88'                                $ " << endl;
    cout << "                     $                         88        88  8P      888'  88    `8b                                $ " << endl;
    cout << "                     $                         88        88  8b,   ,dP8b   88     `8b                               $ " << endl;
    cout << "                     $                         88        88  `Y8888P   Yb  88      `8b                              $ " << endl;
    cout << "                     $                                                                                              $ " << endl;
    cout << "                     $                       88           ,ad8888ba,      ,ad8888ba,   88  888b      88             $ " << endl;
    cout << "                     $                       88          d8 '    ` 8b    d8 '    ` 8b  88  8888b     88             $ " << endl;
    cout << "                     $                       88         d8'        `8b  d8'            88  88 `8b    88             $ " << endl;
    cout << "                     $                       88         88          88  88      88888  88  88   `8b  88             $ " << endl;
    cout << "                     $                       88          Y8a.    .a8P    Y8a.    .a88  88  88     `8888             $ " << endl;
    cout << "                     $                       88888888888  ` Y8888Y '      `'Y88888P'   88  88      `888             $ " << endl;
    cout << "                     $                                                                                              $ " << endl;
    cout << "                     $                                                                                              $ " << endl;
    cout << "                     $                         1. USER SIGN UP                                                      $ " << endl;
    cout << "                     $                         2. ADMIN SIGN UP                                                     $ " << endl;
    cout << "                     $                         3. ADMIN LOGIN                                                       $ " << endl;
    cout << "                     $                         4. USER LOGIN                                                        $ " << endl;
    cout << "                     $                                                                                              $ " << endl;
    cout << "                     $                                                                                              $ " << endl;
    cout << "                     $                                                                                              $ " << endl;
    cout << "                     $                                                                                              $ " << endl;
    cout << "                     $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ " << endl;
    cout << "Enter your option: "; 
    cin >> option;
    return option;
}

void userSignup() 
{
    printHeader();
    if (userCount < 10) 
    {
        string newUserName;
        cout << "Enter a Username: ";
        cin >> newUserName;

        for (int i = 0; i < userCount; i++) 
        {
            if (userName[i] == newUserName)
             {
                cout << "Username already exists! Try a different one." << endl;
                system("pause");
                return;
            }
        }
        cout << "Enter a Password: ";
        cin >> userPassword[userCount];
        userName[userCount] = newUserName;
        userCount++;
        cout << "User registered successfully!" << endl;
    } else {
        cout << "User limit reached!" << endl;
    }
    system("pause");
}

void adminSignup() 
{
    printHeader();
    if (adminCount < 10) 
    {
        string newAdminName;
        cout << "Enter an Admin Name: ";
        cin >> newAdminName;

        for (int i = 0; i < adminCount; i++) 
        {
            if (adminName[i] == newAdminName)
             {
                cout << "Admin username already exists! Try a different one." << endl;
                system("pause");
                return;
            }
        }
        cout << "Enter a Password: ";
        cin >> adminPassword[adminCount];
        adminName[adminCount] = newAdminName;
        adminCount++;
        cout << "Admin registered successfully!" << endl;
    } else {
        cout << "Admin limit reached!" << endl;
    }
    system("pause");
}

void adminLogin() 
{
    string aName, aPassword;
    system("cls");
        cout << "          _____                                                                                   _____  " << endl;
        cout << "         ( ___ )                                                                                 ( ___ ) " << endl;
        cout << "          |   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|   |  " << endl;
        cout << "          |   |             db         88888888ba,    88b           d88  88  888b      88         |   |  " << endl;
        cout << "          |   |            d88b        88      `'8b   888b         d888  88  8888b     88         |   |  " << endl;
        cout << "          |   |           d8'`8b       88        `8b  88`8b       d8'88  88  88 `8b    88         |   |  " << endl;
        cout << "          |   |          d8'  `8b      88         88  88 `8b     d8' 88  88  88  `8b   88         |   |  " << endl;
        cout << "          |   |         d8YaaaaY8b     88         88  88  `8b   d8'  88  88  88   `8b  88         |   |  " << endl;
        cout << "          |   |        d8''''''''8b    88         8P  88   `8b d8'   88  88  88    `8b 88         |   |  " << endl;
        cout << "          |   |       d8'        `8b   88      .a8P   88    `888'    88  88  88     `8888         |   |  " << endl;
        cout << "          |   |      d8'          `8b  88888888Y''    88     `8'     88  88  88      `888         |   |  " << endl;
        cout << "          |   |                                                                                   |   |  " << endl;
        cout << "          |   |      88           ,ad8888ba,      ,ad8888ba,   88  888b      88                   |   |  " << endl;
        cout << "          |   |      88          d8''    `'8b    d8''    `'8b  88  8888b     88                   |   |  " << endl;
        cout << "          |   |      88         d8'        `8b  d8'            88  88 `8b    88                   |   |  " << endl;
        cout << "          |   |      88         88          88  88             88  88  `8b   88                   |   |  " << endl;
        cout << "          |   |      88         88          88  88      88888  88  88   `8b  88                   |   |  " << endl;
        cout << "          |   |      88         Y8,        ,8P  Y8,        88  88  88    `8b 88                   |   |  " << endl;
        cout << "          |   |      88          Y8a.    .a8P    Y8a.    .a88  88  88     `8888                   |   |  " << endl;
        cout << "          |   |      88888888888  `'Y8888Y''      `'Y88888P'   88  88      `888                   |   |  " << endl;
        cout << "          |___|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|___|  " << endl;
        cout << "         (_____)                                                                                 (_____) " << endl;
        cout << "                                                                              " << endl;
        cout << "                                                                              " << endl;

    cout << "Admin Name: ";
    cin >> aName;
    cout << "Password: ";
    cin >> aPassword;

    bool loggedIn = false;
    for (int i = 0; i < adminCount; i++)
     {
        if (adminName[i] == aName && adminPassword[i] == aPassword)
         {
            loggedIn = true;
            break;
        }
    }

    if (loggedIn) 
    {
        admin();
    } 
    else
     {
        cout << "Invalid credentials!" << endl;
    }
    system("pause");
}

void userLogin() 
{
    string uName, uPassword;
        system("cls");
        cout << "              _____                                                                                   _____   " << endl;
        cout << "             ( ___ )                                                                                 ( ___ )  " << endl;
        cout << "              |   |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|   |   " << endl;
        cout << "              |   |      88        88   ad88888ba   88888888888  88888888ba                           |   |   " << endl;
        cout << "              |   |      88        88  d8'     '8b  88           88      '8b                          |   |   " << endl;
        cout << "              |   |      88        88  Y8,          88           88      ,8P                          |   |  " << endl;
        cout << "              |   |      88        88  `Y8aaaaa,    88aaaaa      88aaaaaa8P'                          |   |   " << endl;
        cout << "              |   |      88        88    `'''''8b,  88'''''      88''''88'                            |   |   " << endl;
        cout << "              |   |      88        88          `8b  88           88    `8b                            |   |  " << endl;
        cout << "              |   |      Y8a.    .a8P  Y8a     a8P  88           88     `8b                           |   |  " << endl;
        cout << "              |   |       `'Y8888Y''    'Y88888P'   88888888888  88      `8b                          |   |  " << endl;
        cout << "              |   |                                                                                   |   |  " << endl;
        cout << "              |   |      88           ,ad8888ba,      ,ad8888ba,   88  888b      88                   |   |  " << endl;
        cout << "              |   |      88          d8''    `'8b    d8''    `'8b  88  8888b     88                   |   |  " << endl;
        cout << "              |   |      88         d8'        `8b  d8'            88  88 `8b    88                   |   |  " << endl;
        cout << "              |   |      88         88          88  88             88  88  `8b   88                   |   |  " << endl;
        cout << "              |   |      88         88          88  88      88888  88  88   `8b  88                   |   |  " << endl;
        cout << "              |   |      88         Y8,        ,8P  Y8,        88  88  88    `8b 88                   |   |  " << endl;
        cout << "              |   |      88          Y8a.    .a8P    Y8a.    .a88  88  88     `8888                   |   |  " << endl;
        cout << "              |   |      88888888888  `'Y8888Y''      `'Y88888P'   88  88      `888                   |   |  " << endl;
        cout << "              |___|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|___|  " << endl;
        cout << "             (_____)                                                                                 (_____) " << endl;
        cout << "                                                                              " << endl;
    cout << "User Name: ";
    cin >> uName;
    cout << "Password: ";
    cin >> uPassword;

    bool loggedIn = false;
    for (int i = 0; i < userCount; i++) 
    {
        if (userName[i] == uName && userPassword[i] == uPassword)
         {
            loggedIn = true;
            break;
        }
    }

    if (loggedIn) 
    {
        user();
    } else
     {
        cout << "Invalid credentials!" << endl;
    }
    system("pause");
}




void printHeader() 
{
    system("cls");
    cout << "                     $                         88        88     ,adba,     88888888ba                               $ " << endl;
    cout << "                     $                         88        88     8I  I8     88       8b                              $ " << endl;
    cout << "                     $                         88        88      8bdP'     88      ,8P                              $ " << endl;
    cout << "                     $                         88aaaaaaaa88    ,d8'8b  88  88aaaaaa8P'                              $ " << endl;
    cout << "                     $                         88        88  .dP'   Yb,8I  88    88'                                $ " << endl;
    cout << "                     $                         88        88  8P      888'  88    `8b                                $ " << endl;
    cout << "                     $                         88        88  8b,   ,dP8b   88     `8b                               $ " << endl;
    cout << "                     $                         88        88  `Y8888P   Yb  88      `8b                              $ " << endl;
    cout << "                     $                                                                                              $ " << endl;

}

void admin() 
{ 
    printHeader();
    string option;
   
    while (true) 
    {
        cout << "Select one of the following options: " << endl;
        cout << "1. Add Products" << endl;
        cout << "2. Check Stock" << endl;
        cout << "3. Change Prices" << endl;
        cout << "4. Delete Product" << endl; // New option added
        cout << "5. Exit" << endl;
        cout << "Your Option: ";
        cin >> option;

        if (option == "1") 
        {
            addProduct("fruits");
            addProduct("vegetables");
            addProduct("dairy");
        } else if (option == "2")
         {
            checkStock();
        } else if (option == "3")
         {
            changePrices();
        } else if (option == "4") 
        {
            string options;
            cout << "Select options to delete product from (fruits/vegetables/dairy): ";
            cin >> options;
            deleteProduct(options);
        } else if (option == "5") 
        {
            break;
        } else 
        {
            cout << "Invalid option!" << endl;
        }
    }
}

void checkStock() 
{
    printHeader();
    cout << "Fruit Stock: " << endl;
    for (int i = 0; i < fruitCount; i++) 
    {
        cout << fruitNames[i] << " - " << fruitStock[i] << " available" << endl;
    }
    cout << "Vegetable Stock: " << endl;
    for (int i = 0; i < vegetableCount; i++)
     {
        cout << vegetableNames[i] << " - " << vegetableStock[i] << " available" << endl;
    }
    cout << "Dairy Stock: " << endl;
    for (int i = 0; i < dairyCount; i++)
     {
        cout << dairyNames[i] << " - " << dairyStock[i] << " available" << endl;
    }
}

void changePrices()
 {
    printHeader();
    string option;
    cout << "Select options to change price: " << endl;
    cout << "1. Fruits" << endl;
    cout << "2. Vegetables" << endl;
    cout << "3. Dairy products" << endl;
    cout << "Your Option: ";
    cin >> option;

    if (option == "1") 
    {
        for (int i = 0; i < fruitCount; i++) 
        {
            cout << "Enter new price for " << fruitNames[i] << ": ";
            cin >> fruitPrices[i];
        }
    } else if (option == "2")
     {
        for (int i = 0; i < vegetableCount; i++) 
        {
            cout << "Enter new price for " << vegetableNames[i] << ": ";
            cin >> vegetablePrices[i];
        }
    }
     else if (option == "3")
    {
        for (int i = 0; i < dairyCount; i++) 
        {
            cout << "Enter new price for " << dairyNames[i] << ": ";
            cin >> dairyPrices[i];
        }
    } 
    else
     {
        cout << "Invalid option!" << endl;
    }
}

void user() 
{
    printHeader();
    string option;
    cout << "Select one of the following options: " << endl;
    cout << "1. Fruits" << endl;
    cout << "2. Vegetables" << endl;
    cout << "3. Dairy products" << endl;
    cout << "4. Calculate Total" << endl;
    cout << "5. Print BILL" << endl;
    cout << "6. Exit" << endl;
    cout << "Your Option: ";
    cin >> option;

    if (option == "1")
     {
        userViewProducts("fruits");
        purchaseProduct("fruits");
        user(); 
    } 
    else if (option == "2")
     {
        userViewProducts("vegetables");
        purchaseProduct("vegetables");
        user();  
    } else if (option == "3") 
    {
        userViewProducts("dairyproducts");
        purchaseProduct("dairyproducts");
        user();  
    }
     else if (option == "4") 
    {
        calculateTotal();  
        user(); 
    }
     else if (option == "5")
        {
        printBill();  
        user(); 
    } 
    else if (option == "6")
     {
        cout << "Exiting user..." << endl;
    }
     else {
        cout << "Invalid option!" << endl;
    }
}

void addProduct(string options) 
{
    string name;
    float price;
    int stock;
    if (options == "fruits") 
    {
        cout << "Enter fruit name: ";
        cin >> name;
        cout << "Enter price for " << name << ": ";
        cin >> price;
        cout << "Enter stock for " << name << ": ";
        cin >> stock;

        fruitNames[fruitCount] = name;
        fruitPrices[fruitCount] = price;
        fruitStock[fruitCount] = stock;
        fruitCount++;
    } 
    else if (options == "vegetables")
     {
        cout << "Enter vegetable name: ";
        cin >> name;
        cout << "Enter price for " << name << ": ";
        cin >> price;
        cout << "Enter stock for " << name << ": ";
        cin >> stock;

        vegetableNames[vegetableCount] = name;
        vegetablePrices[vegetableCount] = price;
        vegetableStock[vegetableCount] = stock;
        vegetableCount++;
    }
     else if (options == "dairy") 
     {
        cout << "Enter dairy product name: ";
        cin >> name;
        cout << "Enter price for " << name << ": ";
        cin >> price;
        cout << "Enter stock for " << name << ": ";
        cin >> stock;

        dairyNames[dairyCount] = name;
        dairyPrices[dairyCount] = price;
        dairyStock[dairyCount] = stock;
        dairyCount++;
    }
}

void userViewProducts(string options)
 {
    cout << "Available " << options << ":" << endl;
    if (options == "fruits") {
        for (int i = 0; i < fruitCount; i++) 
        {
            cout << fruitNames[i] << " - " << fruitPrices[i] << " (Stock: " << fruitStock[i] << ")" << endl;
        }
    }
     else if (options == "vegetables")
     {
        for (int i = 0; i < vegetableCount; i++)
         {
            cout << vegetableNames[i] << " - " << vegetablePrices[i] << " (Stock: " << vegetableStock[i] << ")" << endl;
        }
    } 
    else if (options == "dairyproducts")
     {
        for (int i = 0; i < dairyCount; i++)
         {
            cout << dairyNames[i] << " - " << dairyPrices[i] << " (Stock: " << dairyStock[i] << ")" << endl;
        }
    }
}

void purchaseProduct(string options)
 {
    string name;
    int quantity;
    if (options == "fruits") 
    {
        cout << "Enter the name of the fruit to purchase: ";
        cin >> name;
        cout << "Enter quantity: ";
        cin >> quantity;

        for (int i = 0; i < fruitCount; i++)
         {
            if (fruitNames[i] == name) 
            {
                if (fruitStock[i] >= quantity) 
                {
                    fruitStock[i] = fruitStock[i]-quantity;
                    fruitCart[i] = fruitCart[i]+quantity;
                    userTotal += fruitPrices[i] * quantity;
                    break;
                } 
                else
                 {
                    cout << "Not enough stock!" << endl;
                }
                system("pause"); 
            }
        }
    } 
    else if (options == "vegetables") 
    {
        cout << "Enter the name of the vegetable to purchase: ";
        cin >> name;
        cout << "Enter quantity: ";
        cin >> quantity;

        for (int i = 0; i < vegetableCount; i++)
         {
            if (vegetableNames[i] == name)
             {
                if (vegetableStock[i] >= quantity) 
                {
                    vegetableStock[i] -= quantity;
                    vegetableCart[i] += quantity;
                    userTotal += vegetablePrices[i] * quantity;
                    break;
                }
                 else
                 {
                    cout << "Not enough stock!" << endl;
                }
              system("pause");  
            }
        }
    } 
    else if (options == "dairyproducts")
     {
        cout << "Enter the name of the dairy product to purchase: ";
        cin >> name;
        cout << "Enter quantity: ";
        cin >> quantity;

        for (int i = 0; i < dairyCount; i++)
         {
            if (dairyNames[i] == name) 
            {
                if (dairyStock[i] >= quantity)
                 {
                    dairyStock[i] -= quantity;
                    dairyCart[i] += quantity;
                    userTotal += dairyPrices[i] * quantity;
                    break;
                } 
                else 
                {
                    cout << "Not enough stock!" << endl;
                }
                system("pause"); 
            }
        }
    }
}

void calculateTotal()
 {
    userTotal = 0;
    
   
    for (int i = 0; i < fruitCount; i++) 
    {
        userTotal += fruitCart[i] * fruitPrices[i];
    }

   
    for (int i = 0; i < vegetableCount; i++)
     {
        userTotal += vegetableCart[i] * vegetablePrices[i];
    }


    for (int i = 0; i < dairyCount; i++) 
    {
        userTotal += dairyCart[i] * dairyPrices[i];
    }

    cout << "Your total bill is: $" << userTotal << endl;
    system("pause");
}


void printBill() {
    cout << "Your shopping bill: " << endl;
    for (int i = 0; i < fruitCount; i++) 
    {
        if (fruitCart[i] > 0) 
        {
            cout << fruitNames[i] << " - " << fruitCart[i] << " x " << fruitPrices[i] << endl;
        }
    }
    for (int i = 0; i < vegetableCount; i++)
     {
        if (vegetableCart[i] > 0)
         {
            cout << vegetableNames[i] << " - " << vegetableCart[i] << " x " << vegetablePrices[i] << endl;
        }
    }
    for (int i = 0; i < dairyCount; i++) 
    {
        if (dairyCart[i] > 0)
         {
            cout << dairyNames[i] << " - " << dairyCart[i] << " x " << dairyPrices[i] << endl;
        }
    }
    cout << "Total: $" << userTotal << endl;
    system("pause");
}
void deleteProduct(string options) 
{
    string name;
    printHeader();
    cout << "Enter the name of the product to delete: ";
    cin >> name;

    if (options == "fruits") 
    {
        for (int i = 0; i < fruitCount; i++) 
        {
            if (fruitNames[i] == name) {
                for (int j = i; j < fruitCount - 1; j++)
                 {
                    fruitNames[j] = fruitNames[j + 1];
                    fruitPrices[j] = fruitPrices[j + 1];
                    fruitStock[j] = fruitStock[j + 1];
                }
                fruitCount--;
                cout << "Product " << name << " deleted from fruits options." << endl;
                return;
            }
        }
        cout << "Product not found in fruits options." << endl;
    } else if (options == "vegetables") 
    {
        for (int i = 0; i < vegetableCount; i++)
         {
            if (vegetableNames[i] == name)
             {
                for (int j = i; j < vegetableCount - 1; j++) 
                {
                    vegetableNames[j] = vegetableNames[j + 1];
                    vegetablePrices[j] = vegetablePrices[j + 1];
                    vegetableStock[j] = vegetableStock[j + 1];
                }
                vegetableCount--;
                cout << "Product " << name << " deleted from vegetables options." << endl;
                return;
            }
        }
        cout << "Product not found in vegetables options." << endl;
    } 
    else if (options == "dairy")
     {
        for (int i = 0; i < dairyCount; i++) 
        {
            if (dairyNames[i] == name) {
                for (int j = i; j < dairyCount - 1; j++)
                 {
                    dairyNames[j] = dairyNames[j + 1];
                    dairyPrices[j] = dairyPrices[j + 1];
                    dairyStock[j] = dairyStock[j + 1];
                }
                dairyCount--;
                cout << "Product " << name << " deleted from dairy options." << endl;
                return;
            }
        }
        cout << "Product not found in dairy options." << endl;
    } 
    else 
    {
        cout << "Invalid options!" << endl;
        system("pause"); 
    }
}
