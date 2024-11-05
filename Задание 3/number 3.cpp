
#include <iostream>
#include <fstream>


using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    std::ofstream File("Oskin.txt");
    File << "hiiamvladandme18yers";
    File.close();
}