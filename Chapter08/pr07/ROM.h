#pragma once
#include "BaseMemory.h"

class ROM : private BaseMemory {
public :

	ROM(int ROM_size, char arr[], int index) : BaseMemory(ROM_size) {
		for (int copy_idx = 0; copy_idx <= index; copy_idx++) {
		
			this->setMem(arr[copy_idx], copy_idx); 
		
		}
	}

	char read(int index) { return this->getMem(index); }

};