#include <bits/stdc++.h>
#include <boost/filesystem/string_file.hpp>
/*
    g++ -g -Wall test.cpp /usr/lib/libboost_system.a /usr/lib/libboost_filesystem.a
    ./a.out < a.out
*/
int main(int argc, char** argv)
{
    std::istreambuf_iterator<char> end;

    //read stdin 
    std::istreambuf_iterator<char> begin(std::cin);
    std::string binary(begin, end);

    //read binary file
    std::ifstream ifs("a.out");
    std::string content(std::istreambuf_iterator<char>(ifs),end); 

    //write binary file
    std::ofstream file;
    file.exceptions(std::ofstream::failbit | std::ofstream::badbit);
    file.open("out.bin", std::ios_base::binary);
    file.write(content.c_str(), content.size());
    file.close();

    //or use boost::filesystem API
    std::string str;
    boost::filesystem::load_string_file("out.bin", str);
    boost::filesystem::save_string_file("out1.bin", str);
    return 0;
}
