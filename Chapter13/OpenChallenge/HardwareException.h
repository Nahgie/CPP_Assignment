#pragma once
#include <iostream>
#include <string>

class HardwareException {
private :
	std::string step , msg;

public :
	HardwareException(std::string step="",std::string msg="");
	
	std::string getStep();
	std::string getMsg();

	void setMsg(std::string msg);
	void setStep(std::string step);
	void setMNS(std::string step, std::string msg);
};