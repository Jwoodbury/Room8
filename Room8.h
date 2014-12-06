#include <iostream>
#include <string>
#include <Qtwidgets>

using namespace std;

class Group {

private:
	Group();

	string getGroupName();
	void setGroupName();
	void setGroupSize(int _size);
	int getGroupSize();
	bool getAdmin();
	void setPrivacy();

	bool admin;
	int size;
	string name;
	Member memberList[];
};

class Member {

private:
	Member();

	//void memberSettings();
	string getDescription();
	void setDescription(string desc);
	void setName(string _name);
	string getName();
	void setStatus(int _n);
	int getStatus();
	void makeGroup();
	void joinGroup();
	void addMember(const string _name);
	void removeMember(const string _name);

	string name;

};

class AdminSettings {

private:
	AdminSettings() {

	}
	//gui stuff
	void setPrivacy();
	void setGroupName(const string _name);
	void addMember(const string _name);
	void removeMember(const string _name);

};

