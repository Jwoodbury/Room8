#include "Room8.cpp"
#include "LinkedList.cpp"

class Group {
	bool invite;

	Group::Group() {
		name = "Group 1";
		this->size = 1;
		admin = true;
		invite = false;
		Member creator = new Member();
		LinkedList memberList = new LinkedList();
	}

	void Group::setGroupSize(int _size) {
		this->size = _size;
	}

	int Group::getGroupSize() {
		return size;
	}

	string Group::getGroupName() {
		return name;
	}

	bool Group::getAdmin() {
		return admin;
	}

	void Group::addMember(const string _name) {
		memberList.add(_name);
	}

	void removeMember(const string _name) {
		memberList.remove(_name);
	}
	void setPrivacy(Member member) {
		if (member.admin() == true) {
			if (invite == false) {
				invite = true;
			} else {
				invite = false;
			}
		} else {
			//insert popup.
		}
	}
}
