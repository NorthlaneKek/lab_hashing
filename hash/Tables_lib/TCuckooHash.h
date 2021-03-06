#ifndef _T_CUCKOO_HASH_H_
#define _T_CUCKOO_HASH_H_

#include "THashTable.h"

class TCuckooHash :public THashTable 
{
protected:
	virtual int HashFunc1(int key);
	virtual int HashFunc2(int key);
	virtual void GetHashFunc();
	bool FindEmpty(int hash_last, int hash_curr, int iter);

	int coeff[8];
public:
	TCuckooHash(int _size = 0, int _step = 0) :THashTable(_size, _step) { GetHashFunc(); };
	virtual ~TCuckooHash() {};

	virtual bool Find(int key);
	virtual void InsRec(TRecord rec);
};

#endif
