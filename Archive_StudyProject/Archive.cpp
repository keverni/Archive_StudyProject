#include "Archive.h"

Archive::Archive(ArchiveType&& type) :
	m_Type(type)
{
}

Archive::~Archive()
{
}

ArchiveType Archive::GetType() const noexcept
{
	return m_Type;
}

std::string Archive::GetTypeStr() const noexcept
{
	if (m_Type == ArchiveType::Rar)
	{
		return "rar";
	}
	if (m_Type == ArchiveType::Zip)
	{
		return "zip";
	}
	if (m_Type == ArchiveType::Tar)
	{
		return "tar";
	}

	return "";
}
