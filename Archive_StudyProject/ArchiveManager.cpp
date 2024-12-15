#include "ArchiveManager.h"
#include "Rar.h"
#include "Zip.h"
#include "Tar.h"
#include <stdexcept>

ArchiveManager::ArchiveManager()
{
	m_Archives.reserve(3);
	m_Archives.emplace_back(std::make_unique<Rar>());
	m_Archives.emplace_back(std::make_unique<Zip>());
	m_Archives.emplace_back(std::make_unique<Tar>());
}

void ArchiveManager::Pack(std::string&& file_name, ArchiveType&& type)
{
	for (const auto& arch : m_Archives)
	{
		if (arch->GetType() == type)
		{
			arch->Pack(std::forward<std::string&&>(file_name));
			break;
		}
	}
}

ArchiveType ArchiveManager::GetType(std::string&& type)
{
	if (type == "Rar")
	{
		return ArchiveType::Rar;
	}
	if (type == "Zip")
	{
		return ArchiveType::Zip;
	}
	if (type == "Tar")
	{
		return ArchiveType::Tar;
	}

	throw std::invalid_argument("Invalid archive type");
}
