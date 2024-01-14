#include <iostream>
#include <fstream>
#include <string>

struct User
{
    std::string name{};
    int age{};
};

int main()
{
    /*std::ofstream file;
    file.open("file.dat", std::ios::out);*/
    /*std::ofstream file("file1.dat", std::ios::binary);
    int n = 1352342;
    float x = 345.908;
    User user;
    user.name = "Tommy";
    user.age = 35;*/

    //file << "\nHello people";

    /*file.write((char*)&user, sizeof(user));
    file.write((char*)&n, sizeof(n));
    file.write((char*)&x, sizeof(x));*/

    //std::ifstream file;
    //file.open("file.dat");
    //std::string s;
    //s.resize(10);

    //file >> s;
    //file.getline(&(s[0]), s.length());

    //while (!file.eof())
    //{
    //    //file >> s;
    //    std::getline(file, s);
    //    std::cout << s << "\n";
    //}
    
    std::ifstream file("file1.dat", std::ios::binary | std::ios::in);
    int a{};
    float b{};
    User c;

    
    file.read((char*)&c, sizeof(c));
    std::cout << c.name << " " << c.age << "\n";
    file.read((char*)&a, sizeof(a));
    file.read((char*)&b, sizeof(b));
    std::cout << a << " " << b << "\n";

    file.close();
}
