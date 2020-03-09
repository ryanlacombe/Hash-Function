#pragma once
#include <functional>

namespace HashFunction
{
	typedef std::function<unsigned int(const char*, unsigned int)> HashFunc;

	//implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length);

	//Hash function by Brian Kernighan and Dennis Ritchie
	unsigned int BKDRHash(const char* data, unsigned int length);

	//Color Hash
	unsigned int colorHash(const char* data, unsigned int length);

	//Custom Hash
	unsigned int customHash(const char* data, unsigned int length);

	//a helper to access a default hasfunction
	static HashFunc defaultHash = customHash;
};

