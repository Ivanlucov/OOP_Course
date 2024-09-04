#pragma once
#include<string>
class A1
{
public:
	void PrintFullname(std::string);
	void PrintPhoneNumber(std::string);

	void GetFullname();
	void GetPhoneNumber();

private:
	std::string m_fulllname;
	std::string m_phoneNumber;
};

