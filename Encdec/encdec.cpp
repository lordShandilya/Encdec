#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

void Encdec(string &inputFile, string &outputFile, string &password) {
    ifstream inFile(inputFile, ios::binary);
    if(!inFile) {
        cerr << "Error: could not open input file .\n";
    }

    ofstream outFile(outputFile, ios::binary);
    if(!outFile) {
        cerr << "Error: could not open output file .\n";
    }

    vector<char> buffer((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
    inFile.close();

    for(size_t i=0; i < buffer.size(); ++i) {
        buffer[i] ^= password[i%password.size()];

    }

    outFile.write(buffer.data(), buffer.size());
    outFile.close();
    cout << "Operation complete.\n";

}

int main(int argc, char*argv[]) {
    if(argc != 5) {
        cerr << "Usage: " << argv[0] << " <encrypt|decrypt> <input_file> <output_file> <password>\n";
    }

    string mode = argv[1];
    string inputFile = argv[2];
    string outputFile = argv[3];
    string password = argv[4];

    

    if(mode == "encrypt" || mode == "decrypt") {
        Encdec(inputFile, outputFile, password);
    } else {
        cerr << "Error: Invalid mode. use either 'encrypt' or 'decrypt'.\n";
        return 1;
    }
    
    return 0;
} 


