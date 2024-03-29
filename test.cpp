#include <fstream>
#include <sstream>
using namespace std;

// ... ...

void citire (){
    ifstream file_in("file.in");
    ofstream file_out ("file.out");
    string str;
    while(getline(file_in, str)) 
    {
        istringstream ss(str);
        string s;
        while(ss >> s)
        {
            file_out << s << " || ";
        }
        file_out << "\n";
    }
}
int main(){
    citire();
}