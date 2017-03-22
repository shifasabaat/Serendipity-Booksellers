#define _CRT_SECURE_NO_WARNINGS
#ifndef CASHIERMODULE_H
#define CASHIERMODULE_H
#include "InventoryModule.h" //this is relational of GETTING INVENTORY FUNCTIONS AND THE BOOK ARRAY INTO CASHIER!!!
#include "Module.h"
#include <iostream>
#include <string>

using namespace std;
class CashierModule:public Module
{
private:
protected:
	InventoryModule *inventory;
public:
	CashierModule(InventoryModule *inv);
	void driver();
	bool displayBookPricing(int index);
	void transaction();
	void updateInventory();
};

#endif
