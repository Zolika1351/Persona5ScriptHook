void WriteToLog(std::string str)
{
	static auto outfile = std::ofstream("P5ScriptHook.log");

	outfile << str;
	outfile << "\n";

	outfile.flush();
}