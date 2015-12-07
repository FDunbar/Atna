#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main()
{


    string filename;
    vector<string> Text;
    cout << "Input file name" << endl;
    cin >> filename;
    ifstream inFile(filename.c_str());
    string line;

    if(!inFile)
        cout << "missing input file." << endl;
    else
     {
        while(getline(inFile, line))
        {
            Text.push_back(line);
            Text.push_back("");
        }

        cout << Text[0] << endl;
for (int i=0; i < Text.size(); ++i )
{
    cout << Text[i];
}
    }
    return (0);
}
