
#include "pch.h"
#include <iostream>
#include"Base.h"
#include"triangle.h"
#include"tetragon.h"
#include"pentagon.h"
#include"list_realisation.h"

using std::cout;
using std::endl;

void menu(list_realisation &list, int &input);

int main() {
	list_realisation my_list;
	//my_list.addElTriangle();
	my_list.addElTriangle();
	my_list.addElTriangle();
	my_list.printList();
	return 0;
}

void menu(list_realisation & list, int & input)
{
	cout << "\t\t Menu" << endl;
	cout << "\t Press 1 to create a triangle" << endl;
	cout << "\t Press 2 to create a tetragon" << endl;
	cout << "\t Press 3 to create a pentagon" << endl;
	cout << "\t Press 4 print your list" << endl;
	cout << "\t Press 5 to delete element from list" << endl;
	cout << "\t Press 6 to delete your list" << endl;
	cout << "\t Press 0 to exit from Menu";
	std::cin >> input;

	switch (input) {
	case 1:
		list.addElTriangle();
		break;
	case 2:
		list.addElTetragon();
		break;
	case 3:
		list.addElPentagon();
		break;
	case 4:
		list.printList();
		break;
	case 5:
		int number;
		list.printList();
		cout << "\n\t Enter the number of figure which you want to delete: ";
		std::cin >> number;
		list_node current = *list.Get_head();
		for (int i = 0; i < number; i++) {
			
		}
	}
}
