#include <iostream>
using namespace std;

void calculateaggregrate1(string name, float matmarks, float intmarks, float ecatmarks1);
void comparemarks(string name1, string name2, float ecatmarks1, float ecatmarks2);
void printmenu();

int main()
{
    system("cls");
    printmenu();
    string name1, name2;
    float matmarks, intmarks, ecatmarks1, ecatmarks2;
float matmarks2,intmarks2;
cout << "Enter name:";
    cin >> name1;
    cout << "Enter Matric Marks(out of 1100):";
    cin >> matmarks;
    cout << "Enter Inter Marks(out of 570):";
    cin >> intmarks;
    cout << "Enter Ecat Marks(out of 400):";
    cin >> ecatmarks1;
    calculateaggregrate1(name1, matmarks, intmarks, ecatmarks1);
 cout << "Enter name:";
    cin >> name2;
    cout << "Enter Matric Marks(out of 1100):";
    cin >> matmarks;
    cout << "Enter Inter Marks(out of 570):";
    cin >> intmarks;
    cout << "Enter Ecat Marks(out of 400):";
    cin >> ecatmarks2;
calculateaggregrate1(name2, matmarks2, intmarks2, ecatmarks2);
    comparemarks(name1, name2, ecatmarks1, ecatmarks2);
}

void printmenu()
{
    cout <<" #  # #### ### #   # #### ####    ## ### ### # #        #   ##   # # ###   ##   ##  ###  #   ####"<<endl;
    cout <<" #  # #  #  #  #   # #    #  #   #    #   #  # #       # #  # #  ###  #   #    #     #  # #  #  #"<<endl;
    cout <<" #  # #  #  #  #   # ###  ###    #    #   #   #        # #  #  # ###  #    #    #    #  # #  #  #"<<endl;
    cout <<" #  # #  #  #  #   # #    #  #    #   #   #   #        ###  #  # # #  #     #    #   #  # #  #  #"<<endl;
    cout <<" #  # #  #  #  #   # #    #  #     #  #   #   #        # #  # #  # #  #      #    #  #  # #  #  #"<<endl;
    cout <<" #### #  # ###   #   #### #  #   ##  ###  #   #        # #  ##   # # ###   ##   ##  ###  #   #  #"<<endl;
    cout <<"                                                                                                 "<<endl;
    cout <<"                                                                                                 "<<endl;      
    cout <<"# #  #  ####  #    ##   #### # # #### #### ###          ## # #  ## ### #### # #                  "<<endl;
    cout <<"### # # #  # # #  #     #    ### #    #  #  #          #   # # #    #  #    ###                  "<<endl;
    cout <<"### # # #  # # #  #     ###  ### ###  #  #  #           #   #   #   #  ###  ###                  "<<endl;
    cout <<"# # ### #  # ###  #  ## #    # # #    #  #  #            #  #    #  #  #    # #                  "<<endl;
    cout <<"# # # # #  # # #  #   # #    # # #    #  #  #             # #     # #  #    # #                  "<<endl;
    cout <<"# # # # #  # # #   ###  #### # # #### #  #  #           ##  #   ##  #  #### # #                  "<<endl;
}

void calculateaggregrate1(string name1, float matmarks, float intmarks, float ecatmarks1)
{
    
    float marksA = (matmarks / 1100) * 0.10;
    float marksB = (intmarks / 570) * 0.40;
    float marksC = (ecatmarks1 / 400) * 0.50;
    float aggregt = (marksA + marksB + marksC) * 100;
    cout << "Aggregrate is equal to:" << aggregt << endl;
}



void comparemarks(string name1, string name2, float ecatmarks1, float ecatmarks2)
{
    if (ecatmarks1 < ecatmarks2)
    {
        cout << "Roll Number 1 is assigned to " <<name2;
    }
    if (ecatmarks1 > ecatmarks2)
    {
        cout << "Roll Number 1 is assigned to "<<name1;
    }
}
