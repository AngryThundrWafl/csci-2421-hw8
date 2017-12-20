//
// Created by Brian on 4/6/2016.
//
//This header file will include the class definition for Address Book
//it will hold information for each subject the user will like to input change or organize

#ifndef FINALPROJ_PINA_ADDRESSBOOK_H
#define FINALPROJ_PINA_ADDRESSBOOK_H
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>

struct Afilliates{
    std::string FName;                  //will hold their own first name
    std::string LNAme;                  //will hold their own last name
    std::string Email;                  // will hols thei own email
    unsigned int Phone;                  // wil hold their own phone
    // need to figure out a way to have affiliates share the other info as their subject aka parents
};

class addressBook{
private:
   unsigned int  __id, __homePhone, __officePhone, __mobPhone, __zip;
    std::string __Fname, __Lname, __Mname, __Cname, __email, __address, __city, __state, __country;
    std::vector<Afilliates>__affiliates ;
    /* __id holds the unique id per subject        __homePhone holds the home phone of each subject
     * __officePhone holds the office phone number    __mobPhone holds the mobile phone number
     * __zip holds the zip code
     * __Fname holds the first name    __Lname holds the last name    __Mname holds the middle name
     * __Cname holds the company name   __email holds the emial of each subject
     * __address holds the street address   __city holds the city name    __state holds the state name
     * __country holds the country name
     */
public:
    addressBook();                      //default constructor for adressbook class will make __affiloiates into a vector of type afiiliates
    //copy constecutor need to find out what parameters it needs to cpy constructor
    addressBook(unsigned int);
    ~addressBook();                     //destructor for the adressbook class
    //setters
    void setId(unsigned int);           //sets the Id variable
    void setHome(unsigned int);         //sets the __homePhone
    void setOffice(unsigned int);       //sets the __officePhone
    void setMob(unsigned int);          //sets the __mobPhone
    void setZip(unsigned int);          //sets the __zip
    void setFName(std::string);         //sets First name
    void setLNAme(std::string);         //sets the lastname
    void setMName(std::string);         //sets the middle name
    void setCName(std::string);         //sets the company name
    void setEmail(std::string);         //sets the email
    void setAd(std::string);            //sets the address
    void setCity(std::string);          //sets the city
    void setState(std::string);         //sets state
    void setCountry(std::string);       //sets the country
    void setAffilliate(std::string,std::string,std::string,unsigned int);                  //will set each member for affilaite in a vector
    //getters
    unsigned int getId();               //gets Id
    unsigned int getHome();             //get home phone number
    unsigned int getOffice();           //gets Office Number
    unsigned int getMob();              //gets Mobile number
    unsigned int getZip();              //gets Zip code
    std::string getFName();             //gets first name
    std::string getLName();             //gets last name
    std::string getMName();             //gets Middle name
    std::string getCName();             //gets company name
    std::string getEmail();             //gets email
    std::string getAd();                //gets Address
    std::string getCity();              //gets City
    std::string getState();             //gets state
    std::string getCountry();           //gets country
    void getAffilliate(std::vector<Afilliates> &);                  //will get eaach member for affiliates
    //will need to use dot operator  access each memeber

    //functions
    void showSubject();                 //this function will show the entire info of each subject
    void addFunc();                 //adds and entry to the tree
    void deleteAfill();             //deletes a afilliate from a entry base condition will be if afilliats has any members
    void updateEntry();             //will add an entry to adreessbook


    //were gonnna need a operator overloader for the stream insert operator that will pass the members in th tree

    

};

//external functions
int  mainMenu();                //this function will show the main menu for the program that will have each choice for the program

////////////////
//each menu function from the main menu that will alter the tree and the adress book
void sortBook();                //menu choice for sort
void updateBook();              //menu choice for update
void printBook();               //menu choice for print
void searchBook();              //menu choice for search
//######################################################################################//
//these items are sub menus withing each function called from the menu
int sortMenu();
int printMenu();
int updateMenu();
int searchMenu();
// i believe im gonna neeed another searchMenu2 function so that the user can perform a second search or stat over in their search
// or a recursive function that will passs a new search
void readData(ostream &, queue<addressBook> &);           //this function will read data from a stream file and we will pass a queue of adressbook

//functions that will be used to print out the user defined data selection
//these will get called within the overloaded stream operator
void denomChange(int []);               //this funciton will recieve a array created in the print function that will hold denominations
//denom change will present a choice where the user would choose in between 1 for yes or 2 for no for each field they want to print
int userChoice();                      //this function will get the input and return values for denom change and will fill the array with either 1 or 2
//if a wrong choice is used the user will asked again to provide input



#endif //FINALPROJ_PINA_ADDRESSBOOK_H
