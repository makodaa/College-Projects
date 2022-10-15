#include <iostream>
#include <string.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[]) {
    // Variable Declaration (Use camelCase)
    string name;
    double balance, price, change, total = 0;
    int selection, secondarySelection, tertiarySelection, age;
    bool firstOperation = true;
    bool isSenior = false;
    float discount = 0.07;
    float AAAqty = 0;
    float AABqty = 0;
    float AACqty = 0;
    float ABAqty = 0; 
    float ABBqty = 0; 
    float ABCqty = 0;
    float ACAqty = 0;
    float ACBqty = 0;
    float ACCqty = 0;
    float BAAqty = 0;
    float BABqty = 0;
    float BACqty = 0;
    float BBAqty = 0;
    float BBBqty = 0;
    float BBCqty = 0;
    float BCAqty = 0;
    float BCBqty = 0;
    float BCCqty = 0;
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "====================================================\n\n";
    cout << "    TECHNOLOGICAL INSTITUTE OF THE PHILIPPINES     \n";
    cout << "                  Quezon City                      \n";
    cout << "         ITE001 - Computer Programming 1           \n";
    cout << "           1st Semester S.Y. 2022-2023             \n";
    cout << "                  Final Project                    \n";
    cout << "     Computerized Transaction Processing System    \n";
    cout << "                       for                         \n";
    cout << "               Uncle Andy's Pharmacy               \n";
    cout << "  Members:  Abelar, Randi Phyliz Gail -BSCS        \n";
    cout << "            Callope, Armiel Andrei - BSCS          \n";
    cout << "            Cerenio, Mac Kenzie - BSCS             \n";
    cout << "            Flores, Richard William - BSCS         \n";
    cout << "            Herrera, Antonio Rafael - BSCS         \n";
    cout << "Instructor: Ms. Jasmin A. Caliwag                  \n";
    cout << "====================================================\n\n\n\n";
    // Customer information input
    cout<<  "Customer Information Input\n";
    cout << "Please enter your name: ";

    getline(cin,name);

    cout << "Please enter your age: ";
    cin >> age;

    do {
        system("cls");

        if (age >= 60 && age <= 80) {
            cout << "Approved for senior citizen discount! Enjoy your 7% discount!";
            isSenior = true;
        }

        cout << "\n\nWelcome to Uncle Andy's Pharmacy\n";
        cout << "Customer Name: " << name << "\n";
        cout << "Please select your desired service\n";
        cout << "[1] Medicine\t\t\t[2] Vitamins & Supplements\n";
        cout << "[3] First Aid Equipment \t[4] Exit\n\n";
        cout << "===============================================\n";
        cout << "Enter Number (1-4): "; cin >> selection;
        
        switch (selection) {
            case 1: // Medicine Selection
                do {
                    system("cls");

                    cout << "\nMedicine\n";
                    cout << "Select Category:\n";
                    cout << "[1] Analgesics\t\t[2] Antibiotics\n";
                    cout << "[3] Antihistamines \t [4] Back\n";
                    cout << "===============================================\n";
                    cout << "Enter Number (1-4): ";cin >> secondarySelection;

                    system ("cls");

                    switch (secondarySelection) {
                        case 1: // Analgesic Selection
                            do {
                                system("cls");
                                cout << "\nAnalgesics\n";
                                cout << "Select analgesic:\n";
                                cout << "[1] Acetylsalicylic Acid (Aspirin)\t\tPhp. 3.50\n";
                                cout << "[2] Ibuprofen\t\t\t\tPhp. 8.70\n";
                                cout << "[3] Naproxen Sodium\t\t\tPhp. 20.25\n";
                                cout << "[4] Back\n";
                                cout << "===============================================\n";
                                cout << "Enter Number (1-4): ";cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        cout << "How many tablets: ";
                                        cin >> AAAqty;
                                        firstOperation = false;

                                        break;
                                    case 2:
                                        cout << "How many tablets: ";
                                        cin >> AABqty;             
                                        firstOperation = false; 

                                        break;
                                    case 3:
                                        cout << "How many tablets: ";
                                        cin >> AACqty;
                                        firstOperation = false;

                                        break;
                                    default:
                                        break;
                                    }
                            } while (tertiarySelection <= 3);
                            
                            break;
                        case 2: // Antibiotic Selection
                            do {
                                system("cls");

                                cout << "\nAntibiotics\n";
                                cout << "Select Antibiotics:\n";
                                cout << "[1] Amoxicillin\t\t\tPhp. 18.75\n";
                                cout << "[2] Ampicillin\t\t\tPhp. 23.50\n";
                                cout << "[3] Azithromycin\t\t\tPhp. 88.75\n";
                                cout << "[4] Back\n";
                                cout << "===============================================\n";
                                cout << "Enter Number (1-4): ";cin >> tertiarySelection;

                                switch (tertiarySelection)
                                {
                                    case 1:
                                        cout << "How many tablets: ";
                                        cin >> ABAqty;
                                        firstOperation = false; 

                                        break;
                                    case 2:
                                        cout << "How many tablets: ";
                                        cin >> ABBqty;
                                        firstOperation = false; 

                                        break;
                                    case 3:
                                        cout << "How many tablets: ";
                                        cin >> ABCqty;
                                        firstOperation = false; 

                                        break;
                                    default:
                                        break;
                                }

                            }
                            while (tertiarySelection<=3);

                            break;
                        case 3: // Antihistamines Selection
                            do {
                                system("cls");

                                cout << "\nAntihistamines\n";
                                cout << "Select Antihistamine\n";
                                cout << "[1] Cetirizine\t\t\t Php. 15.00\n";
                                cout << "[2] Diphenhydramine\t\t Php. 8.75\n";
                                cout << "[3] Loratadine\t\t\t Php. 20.50\n";
                                cout << "[4] Back\n";
                                cout << "===============================================\n";
                                cout << "Enter Number (1-4): ";cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        cout << "How many tablets: ";
                                        cin >> ACAqty;
                                        firstOperation = false; 

                                        break;
                                    case 2:
                                        cout << "How many tablets: ";
                                        cin >> ACBqty;
                                        firstOperation = false; 

                                        break;
                                    case 3:
                                        cout << "How many tablets: ";
                                        cin >> ACCqty;
                                        firstOperation = false; 

                                        break;
                                    default:
                                        break;
                                }
                                

                            } while (tertiarySelection <= 3);
                            break;
                        default:
                            system("cls");
                            break;
                        }
                } while (secondarySelection<=3);
                
                    break;

            case 2: // Vitamins & Supplements Selection
                                do {
                    system("cls");

                    cout << "\nMedicine\n";
                    cout << "Select Category:\n";
                    cout << "[1] Vitamins\t\t\t [2] Food & Dietary Supplements\n";
                    cout << "[3] Mineral Supplements \t [4] Back\n";
                    cout << "===============================================\n";
                    cout << "Enter Number (1-4): ";cin >> secondarySelection;

                    system ("cls");

                    switch (secondarySelection) {
                        case 1: // Vitamins Section
                            do {
                                system("cls");
                                cout << "\nVitamins\n";
                                cout << "Select Vitamins:\n";
                                cout << "[1] Ascorbic Acid(Vitamin C)\t\tPhp. 3.50\n";
                                cout << "[2] Vitamin B - Complex\t\t\tPhp. 8.70\n";
                                cout << "[3] Cholecalciferol (Vitamin D3)\tPhp. 20.25\n";
                                cout << "[4] Back\n";
                                cout << "===============================================\n";
                                cout << "Enter Number (1-4): ";cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        cout << "How many tablets: ";
                                        cin >> BAAqty;
                                        firstOperation = false;

                                        break;
                                    case 2:
                                        cout << "How many tablets: ";
                                        cin >> BBAqty;             
                                        firstOperation = false; 

                                        break;
                                    case 3:
                                        cout << "How many tablets: ";
                                        cin >> BACqty;
                                        firstOperation = false;

                                        break;
                                    default:
                                        break;
                                    }
                            } while (tertiarySelection <= 3);
                            
                            break;
                        case 2: // Food & Dietary Supplements Section
                            do {
                                system("cls");

                                cout << "\nFood & Dietary Supplements\n";
                                cout << "Select Food & Dietary Supplements:\n";
                                cout << "[1] Multivitamin + Mineral + Folic + Zinc\tPhp. 18.75\n";
                                cout << "[2] Triple Magnesium Complex\t\t\tPhp. 23.50\n";
                                cout << "[3] Collagen\t\t\t\t\tPhp. 88.75\n";
                                cout << "[4] Back\n";
                                cout << "===============================================\n";
                                cout << "Enter Number (1-4): ";cin >> tertiarySelection;

                                switch (tertiarySelection)
                                {
                                    case 1:
                                        cout << "How many tablets: ";
                                        cin >> BABqty;
                                        firstOperation = false; 

                                        break;
                                    case 2:
                                        cout << "How many tablets: ";
                                        cin >> BBBqty;
                                        firstOperation = false; 

                                        break;
                                    case 3:
                                        cout << "How many tablets: ";
                                        cin >> BBCqty;
                                        firstOperation = false; 

                                        break;
                                    default:
                                        break;
                                }

                            }
                            while (tertiarySelection<=3);

                            break;
                        case 3: // Antihistamines Selection
                            do {
                                system("cls");

                                cout << "\nMineral Supplements\n";
                                cout << "Select Mineral Supplements\n";
                                cout << "[1] Calcium\t\t\tPhp. 15.00\n";
                                cout << "[2] Magnesium\t\t\tPhp. 8.75\n";
                                cout << "[3] Zinc\t\t\tPhp. 20.50\n";
                                cout << "[4] Back\n";
                                cout << "===============================================\n";
                                cout << "Enter Number (1-4): ";cin >> tertiarySelection;

                                switch (tertiarySelection) {
                                    case 1:
                                        cout << "How many tablets: ";
                                        cin >> BCAqty;
                                        firstOperation = false; 

                                        break;
                                    case 2:
                                        cout << "How many tablets: ";
                                        cin >> BCBqty;
                                        firstOperation = false; 

                                        break;
                                    case 3:
                                        cout << "How many tablets: ";
                                        cin >> BCCqty;
                                        firstOperation = false; 

                                        break;
                                    default:
                                        break;
                                }
                                

                            } while (tertiarySelection <= 3);
                            break;
                        default:
                            system("cls");
                            break;
                        }
                } while (secondarySelection<=3);

                
                default:
                    break;
        }
    } while (selection <= 3);

    //exit condition
    if (!firstOperation) {
        total = (3.50 * AAAqty) + (8.70 * AABqty) + (20.25 * AACqty) + (18.75 * ABAqty) + (23.50 * ABBqty) + (88.73 * ABCqty) + (15.00 * ACAqty) + (8.75 * ACBqty) + (20.50 * ACCqty) + (2.00 * BAAqty) + (6.00 * BBAqty) + (5.00 * BACqty) + (10.00 * BBAqty) + (12.00 * BBBqty) + (18.50 * BBCqty) + (6.00 * BCAqty) + (60.00 * BCBqty) + (7.00 * BCCqty);
        cout << "TECHNOLOGICAL INSTITUTE OF THE PHILIPPINES\n";
        cout << "Review of Purchase:\n\n";
        cout << "Customer Name: " <<name<<"\n";
        cout << dt <<"\n";
        cout << "=====================================================================\n";
        cout << "Item\t\t\t\t\tQuantity\tTotal\n";
        cout << "=====================================================================\n";

        // Medicine Analgesics
        if (AAAqty) {
            cout << "Acetylsalicylic Acid (Aspirin)\t\t" << AAAqty << " \t\t" << AAAqty * 3.50 << "\n";
        }
        if (AABqty) {
            cout << "Ibuprofen\t\t\t\t" << AABqty << "\t\t" << AABqty * 8.70 << "\n";
        }
        if (AACqty) {
            cout << "Naproxen Sodium\t\t\t\t" << AACqty << "\t\t" << AACqty * 20.25 << "\n";
        }

        // Medicine Antibiotics
        if (ABAqty) {
            cout << "Amoxicillin\t\t\t\t" << ABAqty << "\t\t" << ABAqty * 18.75 << "\n";
        }
        if (ABBqty) {
            cout << "Ampicillin\t\t\t\t" << ABBqty << "\t\t" << ABBqty * 23.50 << "\n";
        }
        if (ABCqty) {
            cout << "Azithromycin\t\t\t\t" << ABCqty << "\t\t" << ABCqty * 88.75 << "\n";
        }
        
        // Medicine Antihistamines
        if (ACAqty) {
            cout << "Cetirizine\t\t\t\t" << ACAqty<< "\t\t" << ACAqty * 15.00 << "\n";
        }
        if (ACBqty) {
            cout << "Diphenhydramine\t\t\t\t" << ACBqty<< "\t\t" << ACBqty * 8.75 << "\n";
        }
        if (ACCqty) {
            cout << "Loratadine\t\t\t\t" << ACCqty<< "\t\t" << ACCqty * 20.50 << "\n";
        }

        // Vitamins & Supplements Vitamins

        if (BAAqty) {
            cout << "Ascorbic Acid (Vitamin C)\t\t" << BAAqty<< "\t\t" << BAAqty * 2.00 << "\n";
        }
        if (BABqty) {
            cout << "Vitamin B - Complex\t\t\t" << BABqty<< "\t\t" << BABqty * 6.00 << "\n";
        }
        if (BACqty) {
            cout << "Cholecalciferol (Vitamin D3)\t\t" << BACqty<< "\t\t" << BACqty * 5.00 << "\n";
        }

        // Vitamins & Supplements Food & Dietary Supplements

        if (BBAqty) {
            cout << "Multivitamin + Mineral + Folic + Zinc\t" << BBAqty<< "\t\t" << BBAqty * 10.00 << "\n";
        }
        if (BBBqty) {
            cout << "Triple Magnesium Complex\t\t" << BBBqty<< "\t\t" << BBBqty * 12.00 << "\n";
        }
        if (BBCqty) {
            cout << "Collagen\t\t\t\t" << BBCqty<< "\t\t" << BBCqty * 18.50 << "\n";
        }

        // Vitamins & Supplements Mineral Supplements

        if (BCAqty) {
            cout << "Calcium\t\t\t\t\t" << BCAqty<< "\t\t" << BCAqty * 6.00 << "\n";
        }
        if (BCBqty) {
            cout << "Magnesium\t\t\t\t" << BCBqty<< "\t\t" << BCBqty * 60.00 << "\n";
        }
        if (BCCqty) {
            cout << "Zinc\t\t\t\t\t" << BCCqty<< "\t\t" << BCCqty * 7.00 << "\n";
        }


        cout << "=====================================================================\n";
        cout << "Total: " << "\t\t\t\t\t" << total;

        if (isSenior) {
            total = total - (total * discount);

            cout << " -07% = " << total;
        }

        cout << "\n=====================================================================\n";
        cout << "Enter Balance: ";
        cin >> balance;

        while (balance <= 0 || balance < total) {
            cout << "Invalid balance! Balance must be at least equal to the total price: ";
            cin >> balance;
        }

        change = balance - total;

        cout << "=====================================================================\n";
        cout << "Total Change:\t\t\t\t\t\tPhp. "<< change << "\n";
        cout << "Thank you for your purchase at Uncle Andy's Pharmacy!";
    }
    else
    cout << "Thank you for your purchase at Uncle Andy's Pharmacy!";
}
}�ku�ku�ku�ku�ku�ku�kd�kd�kd�kd�kd�kd�ku�ku�ku�ku�ku�ku�kd�kd�kd�ku�ku�ku�kd�kd�kd�ku�ku�ku:qa