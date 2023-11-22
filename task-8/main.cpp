#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Item 
{

    string name[5]{"apple", "sword", "shield", "armor", "wood"};
};

// Function to add an item to the inventory
void addItem(vector<Item>& inventory) {
    Item newItem;
    string input;
    int i = 0;

    cout << "Enter item name: ";
    newItem.name[i] = input;
    cin >> input;

    inventory.push_back(newItem);
    cout << "Item added to inventory." << endl;
}

// Function to display the inventory
void displayInventory(const vector<Item>& inventory) 
{
    int SlotNum = 0;

    if (inventory.empty()) {
        cout << "Inventory is empty." << endl;
    }
    else {
        cout << "Inventory:" << endl;
        cout << "-----------------" << endl;
        for (const auto& item : inventory) 
        {
           

            cout << "slot" << SlotNum << ":" << item.name << endl;
        }
        cout << "-----------------" << endl;
    }
}

int main() {
    vector<Item> inventory;

    char choice;
    do {
        cout << "Choose an option:" << endl;
        cout << "1. Add item to inventory" << endl;
        cout << "2. Display inventory" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case '1':
            addItem(inventory);
            break;
        case '2':
            displayInventory(inventory);
            break;
        case '3':
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != '3');

    return 0;
}

    //In this challenge, you should build an inventory system using a dynamically
    //allocated array of structs.

    //There should also be an array of all possible inventory items, so that
    //the user can set inventory slots to one of these values. Each index into this
    //array could be classes as an "item id"

    
    //The player should be able to:
    //- Specify the size of the inventory (1 - 16 slots)
    //- Type commands to interact with the inventory, like so:
    //  - "view <number>"         -> Prints out details of the inventory slot index specified by number.
    //  - "show_all"              -> Shows all slots in the inventory.
    //  - "set <index> <item_id>" -> Sets the inventory specified by #index to the item #item_id
    //  - "items"                 -> Shows all the items you can possibly set a slot to, along with their ids.
    //  - "exit"                  -> Exits the tool

    //Invalid choices (such as setting or viewing and invalid index) should also be handled. 

    //An example of the commands:
    //  - "view 0"  -> Shows details of the first inventory slot
    //  - "set 0 2" -> Sets the first inventory slot to item id #2

    //-------------

    //An example list of items:
    // - 0: Empty
    // - 1: Shield
    // - 2: Potion
    // - 3: Gloves
    
    //An example session with these items might look like:

    // Please enter an inventory size: 8
    // > Initialized inventory with 8 slots.
    //
    // > view 0
    //
    // Inventory Slot 0 information:
    // Name: Empty
    //
    // > set 0 2
    // > view 0
    //
    // Inventory Slot 0 information:
    // Name: Potion
    //
    // > items
    // - 0: Empty
    // - 1: Shield
    // - 2: Potion
    // - 3: Gloves
    //
    // > show_all
    //
    // Inventory: 
    // - Slot 0: Potion
    // - Slot 1: Empty
    // - Slot 2: Empty
    // - Slot 3: Empty
    // - Slot 4: Empty
    // - Slot 5: Empty
    // - Slot 6: Empty
    // - Slot 7: Empty
    //
    // > exit