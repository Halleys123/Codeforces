#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>
#include <algorithm>

int allowedRatings[] = {800, 1000, 1200, 1400, 1600, 1800, 2000, 2200, 2400, 2600, 2800};

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        std::cout << "Usage: " << argv[0] << " <filename> <rating>" << std::endl;
        return 1;
    }

    std::string fileName = argv[1];
    if (fileName.find(".cpp") == std::string::npos)
    {
        fileName += ".cpp";
    }
    std::string rating = argv[2];

    if (std::find(std::begin(allowedRatings), std::end(allowedRatings), std::stoi(rating)) == std::end(allowedRatings))
    {
        std::cout << "Invalid rating" << std::endl;
        return 1;
    }

    std::filesystem::path path = std::filesystem::current_path() / rating / fileName;
    std::filesystem::path dir = path.parent_path() / path.stem();
    std::filesystem::create_directories(dir);
    path = dir / path.filename();
    std::ofstream file(path);
    if (file.is_open())
    {
        file << "#ifdef LOCAL\n"
             << "#include <fstream>\n"
             << "#include <ostream>\n"
             << "#include <istream>\n"
             << "#endif\n"
             << "#include <iostream>\n\n"
             << "void solution()\n"
             << "{\n"
             << "}\n\n"
             << "int main()\n"
             << "{\n"
             << "#ifdef LOCAL\n"
             << "\tstd::ifstream in(\"input.txt\");\n"
             << "\tstd::ofstream out(\"output.txt\");\n"
             << "\tstd::cin.rdbuf(in.rdbuf());\n"
             << "\tstd::cout.rdbuf(out.rdbuf());\n"
             << "#endif\n\n"
             << "\tint testCase;\n"
             << "\tstd::cin >> testCase;\n"
             << "\twhile (testCase--)\n"
             << "\t{\n"
             << "\t\tsolution();\n"
             << "\t}\n"
             << "}";
        file.close();
    }

    std::ofstream inputFile(dir / "input.txt");
    inputFile.close();
    std::ofstream outputFile(dir / "output.txt");
    outputFile.close();

    return 0;
}