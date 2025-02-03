#include <iostream>
#include <fstream>
using namespace std;

class bill {
    unsigned short int item_code, quantity;
    char item_name[30];
    float unit_price, total;

public:
    void set_data() {
        cout << "Enter the item code: ";
        cin >> item_code;
        cout << "Enter the item name: ";
        cin.ignore();
        cin.getline(item_name, 30);
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter the unit price: ";
        cin >> unit_price;
        total = quantity * unit_price;
    }

    void get_data() {
        cout << left << setw(10) << item_code << setw(20) << item_name 
             << setw(10) << quantity << setw(15) << unit_price 
             << setw(10) << total << endl;
    }

    unsigned short int getItemCode() { return item_code; }
};

int main() {
    bill b;
    fstream file;
    int choice, n;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Create (overwrite) records in 'market'\n";
        cout << "2. Append records in 'market'\n";
        cout << "3. Display records from 'market'\n";
        cout << "4. Delete a specific item from 'market'\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                file.open("market", ios::binary | ios::trunc | ios::out);
                cout << "How many items do you want to enter? ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "\nEnter details of item " << i + 1 << ":\n";
                    b.set_data();
                    file.write((char*)&b, sizeof(b));
                }
                file.close();
                break;
            }

            case 2: {
                file.open("market", ios::binary | ios::app | ios::out);
                cout << "How many items do you want to append? ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "\nEnter details of item " << i + 1 << ":\n";
                    b.set_data();
                    file.write((char*)&b, sizeof(b));
                }
                file.close();
                break;
            }

            case 3: {
                file.open("market", ios::binary | ios::in);
                if (!file) {
                    cout << "File does not exist!\n";
                    break;
                }
                cout << "\nItem Code  Item Name           Quantity   Unit Price     Total\n";
                cout << "-------------------------------------------------------------\n";
                while (file.read((char*)&b, sizeof(b))) {
                    b.get_data();
                }
                file.close();
                break;
            }

            case 4: {
                unsigned short int delete_code;
                cout << "\nEnter the item code to delete: ";
                cin >> delete_code;

                ifstream file("market", ios::binary);
                ofstream temp("temp", ios::binary);
                bool found = false;

                while (file.read((char*)&b, sizeof(b))) {
                    if (b.getItemCode() == delete_code) {
                        found = true;
                    } else {
                        temp.write((char*)&b, sizeof(b));
                    }
                }

                file.close();
                temp.close();

                if (found) {
                    remove("market");
                    rename("temp", "market");
                    cout << "\nItem deleted successfully!\n";
                } else {
                    remove("temp");
                    cout << "\nItem not found!\n";
                }
                break;
            }

            case 5:
                exit(0);

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}