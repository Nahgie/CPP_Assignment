#include "HardwareException.h"

HardwareException::HardwareException(std::string step, std::string msg) {
	
	this->step = step;
	this->msg = msg;
}

std::string HardwareException::getMsg() { return this->msg; }

std::string HardwareException::getStep() { return this->step; }

void HardwareException::setMsg(std::string msg) { this->msg = msg; }

void HardwareException::setStep(std::string step) { this->step = step; }

void HardwareException::setMNS(std::string step, std::string msg) {

	this->step = step;
	this->msg = msg;
}