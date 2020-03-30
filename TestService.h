#pragma once
#include "Service.h"

class TestService {
private:
	Service s;
	void testSortByName();
	void testSortByAge();
	void testFilterStudents();
public:
	TestService();
	void runTests();
	~TestService();
};