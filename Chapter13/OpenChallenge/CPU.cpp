#include "CPU.h"

void CPU::bufClear() { // 다음 입력을 위해 기존에 저장된 값을 무효화
	
	cmd.clear();
	op1 = op2 = GARBAGE;
}

void CPU::fetch() throw(HardwareException) {

	exc.setMNS("fetch", "명령 라인 없음");

	std::getline(std::cin, instruction);

	if (instruction.empty()) { // 아무런 명령이 없을때의 예외처리
		
		throw exc; 
	}

	std::istringstream iss(instruction); //공백 구분을 위해 istringstream 사용
	
	std::string tmp; // 임시저장소

	int loops = 0;

	while (std::getline(iss, tmp , ' ')) {
		
		switch (loops) {

			case 0: //명령어

				cmd = tmp;
				break;

			case 1: //첫번째 정수 입력
				
				try {

					op1 = stoi(tmp);

				} catch (const std::invalid_argument&) { //잘못된 데이터를 입력시 상위 호출자에게 예외를 던짐

					exc.setMNS("decode", "피연산자 타입 예외");
					throw exc;

				}
				break;

			case 2: //두번째 정수 입력

				try {

					op2 = stoi(tmp);

				} catch (const std::invalid_argument&) { //잘못된 데이터를 입력시 상위 호출자에게 예외를 던짐

					exc.setMNS("decode", "피연산자 타입 예외");
					throw exc;
				}
				break;
		}
		loops++;
	}
}

void CPU::decode() throw(HardwareException) {

	exc.setMNS("decode", "invalid 명령어 예외");

	if (cmd == "ADD") { //더하기
	
		if (op1 == GARBAGE || op2 == GARBAGE) { // op1 op2 중 하나라도 입력을 못받으면 예외를 던짐

			exc.setMsg("피연산자 예외");
			throw exc;
		}
	
	} else if (cmd == "SUB") { //빼기 
		
		if (op1 == GARBAGE || op2 == GARBAGE) { // op1 op2 중 하나라도 입력을 못받으면 예외를 던짐

			exc.setMsg("피연산자 예외");
			throw exc;
		}
	
	} else if (cmd == "MUL") { //곱하기
		
		if (op1 == GARBAGE || op2 == GARBAGE) { // op1 op2 중 하나라도 입력을 못받으면 예외를 던짐

			exc.setMsg("피연산자 예외");
			throw exc;
		}
	
	} else if (cmd == "DIV") { //나누기
		
		if (op1 == GARBAGE || op2 == GARBAGE) { // op1 op2 중 하나라도 입력을 못받으면 예외를 던짐

			exc.setMsg("피연산자 예외");
			throw exc;
		}
	
	} else { //위에 명시된 명령어가 아니면 예외를 던짐
		
		throw exc; 
	}
}

void CPU::excute() throw(HardwareException) {

	exc.setMNS("excute", "0으로 나누는 예외");

	if (cmd == "DIV" && op2 == 0) { //0으로 나누기를 시도하면 예외를 던짐
		
		throw exc; 
	}

	if (cmd == "ADD") { //더하기 결과 출력

		std::cout << "  \t  " << cmd << ' ' << op1 << ' ' << op2 << " : \t\t" << op1 + op2 << std::endl;
		bufClear();

	} else if (cmd == "SUB") { //빼기 결과 출력

		std::cout << "  \t  " << cmd << ' ' << op1 << ' ' << op2 << " : \t\t" << op1 - op2 << std::endl;
		bufClear();

	} else if (cmd == "MUL") { //곱하기 결과 출력

		std::cout << "  \t  " << cmd << ' ' << op1 << ' ' << op2 << " : \t\t" << op1 * op2 << std::endl;
		bufClear();

	} else if (cmd == "DIV") { //나누기 결과 출력

		std::cout << "  \t  " << cmd << ' ' << op1 << ' ' << op2 << " : \t\t" << op1 / op2 << std::endl;
		bufClear();
	}
}

void CPU::init() {

	while (true) {
		
		try {

			fetch();
			decode();
			excute();

		} catch (HardwareException ERR) {

			std::cout << ERR.getStep() << " 스텝, " << ERR.getMsg() << std::endl;
			break;
		}
	}
}