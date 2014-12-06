#include "Room8.h"

using namespace std;

class Member {
	
	Member::Member(bool adminStatus) {
		name = " ";
		description = " ";
		admin = false;
		status = 0;
	}

	string Member::getDescription() {
		return description;
	}

	void Member::setDescription(string desc) {
		this->description = desc;
	}

	void Member::setName(string _name) {
		this->name = _name;
	}

	string Member::getName() {
		return name;
	}

	void Member::setStatus(int _n) {
		this->status = _n;
	}

	int Member::getStatus() {
		return status;
	}
}

