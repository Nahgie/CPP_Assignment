#pragma once
class Exp {

private:
	int base, ExpN;
public:

	Exp() : Exp(1,1){}
	Exp(int BASE) : Exp(BASE , 1){}
	Exp(int BASE, int EXPN) {base = BASE; ExpN = EXPN;}

	inline int getBase() {return base;}
	inline int getExp() {return ExpN;}

	int getValue();
	bool equals(Exp b);

};