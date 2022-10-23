namespace
{
    template<typename Out>
    void split(const std::string& s, char delim, Out result)
	{
        std::stringstream ss;
        ss.str(s);
        std::string item;
        while (std::getline(ss, item, delim))
		{
            *(result++) = item;
        }
    }

    std::vector<std::string> split(const std::string& s, char delim) 
	{
        std::vector<std::string> elems;
        ::split(s, delim, std::back_inserter(elems));
        return elems;
    }
}

namespace mem
{
	uintptr_t FindPattern(const char* pattStr)
	{
		std::vector<std::string> bytesStr = split(pattStr, ' ');

		MODULEINFO modInfo{};
		GetModuleInformation(GetCurrentProcess(), GetModuleHandle(nullptr), &modInfo, sizeof(MODULEINFO));

		auto* start_offset = static_cast<uint8_t*>(modInfo.lpBaseOfDll);
		const auto size = static_cast<uintptr_t>(modInfo.SizeOfImage);

		uintptr_t pos = 0;
		const uintptr_t searchLen = bytesStr.size();
		std::vector<uint8_t> bytes;
		for (auto str : bytesStr)
		{
			if (str == "??" || str == "?") bytes.push_back(0);
			else bytes.push_back(static_cast<uint8_t>(std::strtoul(str.c_str(), nullptr, 16)));
		}

		for (auto* retAddress = start_offset; retAddress < start_offset + size; retAddress++)
		{
			if (bytesStr[pos] == "??" || bytesStr[pos] == "?" || *retAddress == bytes[pos])
			{
				if (pos + 1 == bytesStr.size()) return (reinterpret_cast<uintptr_t>(retAddress) - searchLen + 1);
				pos++;
			}
			else
			{
				pos = 0;
			}
		}
		return 0;
	}
}
