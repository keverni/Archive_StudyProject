#include "Rar.h"
#include <iostream>

Rar::Rar():
	Archive(ArchiveType::Rar)
{
}

Rar::~Rar()
{
}

void Rar::Pack(std::string&& file_name)
{
	std::cout << "Pack file: " << file_name <<  " with " << GetTypeStr() << std::endl;
}
