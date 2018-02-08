/**
 * Search.h
 *
 * Template based Search Functions
 *
 * @author  Your name
 * @email   your email
 * @version 1.0
 */

#ifndef SEARCH_H_
#define SEARCH_H_

#include "Array.h"
 

// PreCondition: items Array is full
// PostCondition: return position if key found, otherwise -1
template <class T>
int sequentialSearch( const Array<T> & items,  T keys ) {
	for (int i = 0; i < items.length(); i++) {
		if (keys == items[i]) {
			std::cout << "\nSearch " <<items<< "for " << keys << " took " << (i + 1) << " passes" << std::endl;
			return i;
		}//if found
	}
	return -1;									// if not found 
}

// PreCondition: items Aarray is full
// PostCondition: return position if key found, otherwise -1
template <class T>
int binarySearch( const Array<T> & items, T key ) {

	std::cout << "\nBinarySearch: "<< items << " for " << key << std::endl; // binary search: [...] for X

	int left = 0, right = items.length()-1;		//set boundaries 

	while (left <= right) {						//search possible 
		int pivot = (left + right) / 2;			//caluclating pivot

		std::cout << "Left=" << left << " Pivot=" << pivot << " Right=" << right << std::endl;

		if (key == items[pivot]) {
			return pivot;						//found
		}
		else if (key > items[pivot]) {			//search to right
			left = pivot + 1;
		}
		else {									//search to left
			right = pivot - 1;
		}

	}
	return -1;									//not found 

   
}

// PreCondition: Data array is full
// PostCondition: return number of occurences of e in Array
template <class T>
int countOccurrence( ... ) {
	return 1;
}

// PreCondition: Data array is full and sorted
// PostCondition: return number of occurences of e in Array
template <class T>
int countOccurrenceOrdered( ... ) {

}

// PreCondition: Both Arrays are filled with values of type T. 
//               items - values to be searched. keys - values to search for
// PostCondition: return true if all keys are found, otherwise false
//bool containsAll(...items, ...keys) { }

#endif	/* SEARCH_H_ */