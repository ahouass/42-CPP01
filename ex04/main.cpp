#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty.\n";
        return 1;
    }

    std::ifstream inFile(filename.c_str());
    if (!inFile) {
        std::cerr << "Error: cannot open input file.\n";
        return 1;
    }

    std::string content;
    std::string line;
    while (std::getline(inFile, line)) {
        content += line;
        content += "\n";
    }
    inFile.close();

    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = content.find(s1, pos)) != std::string::npos) {
        result += content.substr(pos, found - pos);
        result += s2;
        pos = found + s1.size();
    }
    result += content.substr(pos);

    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile) {
        std::cerr << "Error: cannot create output file.\n";
        return 1;
    }

    outFile << result;
    outFile.close();

    return 0;
}