#include <iostream>
#include "LinkedList.h"

int formalities(int type)
	{
	int value=0;
	if (type==0)
	{	
	std::cout <<"What would you like to add?: \n";
	std::cin>>value;
	}
	if (type==1)
	{
	std::cout <<"Done!\n";
	}	
	return value;
	}


int main() {
    int menu = 0;
    int value;
    LinkedList list;

    while(menu!=6)
    {
	if (menu == 0)
	{
	std::cout <<"What would you like to do with your list?: \n";
	std::cout <<"[1]: Add to front\n";
	std::cout <<"[2]: Add to back\n";	
	std::cout <<"[3]: Remove from front\n";
	std::cout <<"[4]: Remove from back\n";
	std::cout <<"[5]: Print values\n";
	std::cout <<"[6]: Quit\n";
	std::cin  >> menu;
	}
	if (menu == 1)
	{
	value = formalities(0);
	list.insertFront(value);
	menu = 0;
	}
	if (menu == 2)
	{	
	value = formalities(0);
	list.insertBack(value);
	menu = 0;
	}
	if (menu == 3)
	{
	value = formalities(1);
	list.removeFront();
	menu = 0;
	}
	if (menu == 4)
	{
	value = formalities(1);
	list.removeBack();
	menu = 0;
	}
	if (menu == 5)
	{
	list.display();
	menu = 0;
	}
     }
    //list.insertFront(5);
    //list.insertFront(3);
    //list.insertBack(7);
    //list.insertBack(9);

    // Display the elements of the linked list
    //std::cout << "Linked List: ";
    //list.display();

    // Remove elements from the linked list (front and back)
    //list.removeFront();
    //list.removeBack();

    // Display the elements of the linked list after removal
    //std::cout << "Linked List after removal: ";
    //list.display();

    return 0;
}

