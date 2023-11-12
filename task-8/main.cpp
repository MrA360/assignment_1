#include <iostream>
#include <fstream>
#include <string>



using namespace std;


struct Inventory
{
    int Slots;

}InventorySlots;

struct Item_ID
{

    string Items[10]{"Empty"};


}SlotID;

struct Menu
{

    string choice[5] { "view <number>" "show_all" "set <index> <item_id>" "items" "exit" };

}MenuChoice[5]{ "view <number>" "show_all" "set <index> <item_id>" "items" "exit" };


void main()
{
    bool exit = false;


    int sizeloop = 0;

    cout << "from 1-16 how many inventory slots do you want: ";
    
    cin >> InventorySlots.Slots;

    while (exit != true)
    {

       cout << "Please select an option:\n view <number> - Prints out details of the inventory slot index specified by number. \n Show_all - Shows all slots in the inventory. \n set <index> <item_id> - Sets the inventory specified by #index to the item #item_id \n items - Shows all the items you can possibly set a slot to, along with their ids \n exit - Exits the tool";

       if (MenuChoice[0])
       {

       }

       else if (MenuChoice[1])
       {

       }



        while (InventorySlots.Slots > sizeloop)
        {
            sizeloop++;

            cout << "Slot" << sizeloop << ": " << SlotID.Items[0] << endl;

        }


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


    
    
}