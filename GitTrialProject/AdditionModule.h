// This class is meant to calculate addition between n numbers.
#ifndef  ADDITIONMODULE_H
#define ADDITIONMODULE_H

class Add{

public:
	Add();
	~Add();

private: // attribute
	int a;
	int b;

public: //behaviour
	int getAddResult()const;
	void setValues(int tempa, int tempb);
};

#endif