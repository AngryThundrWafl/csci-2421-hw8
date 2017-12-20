
#include "avltree.h"
#include"AddressBook.h"

using namespace std;
int main(){
    //will create objects for the tree
    AVLClass AVLTreeA, AVLTreeB;
    AVLNodePtr Result;
    int choice = 99;                 //will hold the uses choice
    mainMenu();             //will show the main menu for the program will return the users choice
    //right now main menu functions will call other functions that will modify the tree and sdreessbook
    //main menu will return a int value that will be passed to a finction called callFunction();
    //filled with if statments and will call the right function I will have to pass A node and a Adress class object into it

    return 0;
}
