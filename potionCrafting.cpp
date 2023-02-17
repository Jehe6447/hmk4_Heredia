#include <iostream>
using namespace std;


int main(){
    // declare all variables
    int potionPriority;
    int hPotion = 0;
    int mPotion = 0;
    
    int H;
    int D;
    int C;
    int T;
    
    // prompt user to input 
    cout << "Select a potion crafting priority:\n" << "1. Minor Mana \n" << "2. Minor Healing" << endl;
    cin >> potionPriority;
    // input validation 
    while (potionPriority != 1 && potionPriority != 2){
        cout << "Invalid input.\n" << "Select a potion crafting priority:\n" << "1. Minor Mana \n" << "2. Minor Healing" << endl;
        cin >> potionPriority;
    }
    // prompt user to input ingredients 
    cout << "How many Honeycombs do you have?" << endl;
    cin >> H;
    // validate ingredients 
    while (H < 0){
        cout << "Invalid input. How many Honeycombs do you have?" << endl;
        cin >> H;
    }
    // prompt user to input ingredients
    cout << "How many Dandelions do you have?" << endl;
    cin >> D;
     // validate ingredients
    while (D < 0){
        cout << "Invalid input. How many Dandelions do you have?" << endl;
        cin >> D;
    }
    // prompt user to input ingredients
    cout << "How many Coal do you have?" <<endl;
    cin >> C;
     // validate ingredients
    while (C < 0){
        cout << "Invalid input. How many Coal do you have?" << endl;
        cin >> C;
    }
    // prompt user to input ingredients
    cout << "How many Toadstools do you have?" << endl;
    cin >> T;
     // validate ingredients
    while (T < 0){
        cout << "Invalid input. How many Toadstools do you have?" << endl;
        cin >> T;
    }
    // compute potion crafting for option 2
    if (potionPriority == 2){
        while(H >= 5 && C >= 2 && T >= 3){
            H -= 5;
            C -= 2;
            T -= 3;
            hPotion += 1;
        }
        while(H >= 5 && D >= 3 && C >= 1){
            H -= 5;
            D -= 3;
            C -= 1;
            mPotion += 1;
        }
        cout << "You can make " << hPotion << " Healing potion(s) and " << mPotion << " Mana potion(s)." << endl;
    }
    // compute potion crafting for option 1 
    else if (potionPriority == 1){
        while(H >= 5 && D >= 3 && C >= 1){
            H -= 5;
            D -= 3;
            C -= 1;
            mPotion += 1;
        }
        while(H >= 5 && C >= 2 && T >= 3){
            H -= 5;
            C -= 2;
            T -= 3;
            hPotion += 1;
        }
        cout << "You can make " << mPotion << " Mana potion(s) and " << hPotion << " Healing potion(s)." << endl;
    }
    
    return 0;
}
