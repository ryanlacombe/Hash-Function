#include "HashFunction.h"

namespace HashFunction
{
	//implementation of a basic addition hash
	unsigned int badHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash += data[i];
		}

		return hash;
	}

	//Hash function by Brian Kernighan and Dennis Ritchie
	unsigned int BKDRHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash = (hash * 1313) + data[i];
		}

		return (hash & 0x7FFFFFFF);
	}

	//Hash function that creates hex color codes
	unsigned int colorHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash = (hash * 1313) + data[i];
		}

		return (hash & 0xFFFFFF);
	}

	//Custom hash function
	unsigned int customHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash = (hash * 131313) + data[i];
		}

		return (hash & 0xFFFF);
	}
}