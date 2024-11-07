#include "student.h"




int main() {
	Ship* myObjPointer = nullptr;
	myObjPointer = new Ship;
	cout  << myObjPointer->Ship() << endl;
	delete myObjPointer;


	Ship* myObjPointer = nullptr;
	myObjPointer = new Ship;
	cout << myObjPointer->Ship() << endl;
	delete myObjPointer;
}








//int main() {
//	MyCoolClass* myObjPointer = nullptr;
//	myObjPointer = new MyCoolClass;
//	cout << "Default Fav Num:" << myObjPointer->getMyFavNum() <<endl ;
//	
//	delete myObjPointer;// delete for a memory leak
//
//	myObjPointer = new MyCoolClass(77);
//	cout << "1 arg favNum: " << myObjPointer->getMyFavNum() << endl;
//
//	delete myObjPointer;// delete for a memory leak
//
//
//	myObjPointer = new MyCoolClass[3];
//	for (int ii = 0; ii < 3; ii++) {
//		cout << ii << ": fav num is" << myObjPointer[ii].getMyFavNum();
//	}
//	delete[] myObjPointer;
//}