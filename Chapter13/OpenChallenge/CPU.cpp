#include "CPU.h"

void CPU::bufClear() { // 다음 입력을 위해 기존에 저장된 값을 무효화
	
	this->cmd.clear();
	this->op1 = this->op2 = NULL;
}

void CPU::fetch() throw(HardwareException) {

	exc.setMNS("fetch", "명령 라인 없음");

	std::getline(std::cin, this->instruction);

	if (this->instruction.empty()) { throw exc; } // 아무런 명령이 없을때의 예외처리

	std::istringstream iss(this->instruction); //공백 구분을 위해 istringstream 사용
	
	std::string tmp; // 임시저장소

	int loops = 0;

	while (std::getline(iss, tmp , ' ')) {
		
		switch (loops) {

			case 0: //명령어

				cmd = tmp;
				break;

			case 1: //첫번째 정수 입력
				
				op1 = stoi(tmp);
				break;

			case 2: //두번째 정수 입력

				op2 = stoi(tmp);
				break;
		}
		loops++;
	}
}

void CPU::excute() throw(HardwareException) {

	exc.setMNS("excute", "0으로 나누는 예외");

	if (cmd == "DIV" && op2 == 0) { throw exc; }
}

void CPU::decode() throw(HardwareException) {
	
	exc.setMNS("decode", "invalid 명령어 예외");

	if (cmd == "ADD" && op1 != NULL && op2 != NULL) { //더하기
		
		std::cout << "  \t  " << cmd << ' ' << op1 << ' ' << op2 << " : \t\t" << op1 + op2 << std::endl; 
		bufClear();
	
	} else if (cmd == "SUB" && op1 != NULL && op2 != NULL) { //빼기 
		
		std::cout << "  \t  " << cmd << ' ' << op1 << ' ' << op2 << " : \t\t" << op1 - op2 << std::endl; 
		bufClear();

	} else if (cmd == "MUL" && op1 != NULL && op2 != NULL) { //곱하기
		
		std::cout << "  \t  " << cmd << ' ' << op1 << ' ' << op2 << " : \t\t" << op1 * op2 << std::endl; 
		bufClear();

	} else if (cmd == "DIV" && op1 != NULL && op2 != NULL) { //나누기
		
		std::cout << "  \t  " << cmd << ' ' << op1 << ' ' << op2 << " : \t\t" << op1 / op2 << std::endl; 
		bufClear();
	
	} else if (op1 == NULL || op2 == NULL) {
		
		exc.setMsg("피연산자 예외");
		throw exc;
	}
	else { throw exc; }
}

void CPU::init() {

	while (true) {
		
		try {

			fetch();
			excute();
			decode();

		} catch (HardwareException ERR) {

			std::cout << ERR.getStep() << " 스텝, " << ERR.getMsg() << std::endl;
			break;
		}
	}
}