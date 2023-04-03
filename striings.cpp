#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::string name = "Shubham Patel";

    std::vector<std::string> vec;
    vec.push_back(name);
    vec.push_back("wowww");

    /*
    for(int i = 0; i < vec.size(); i++)
    {
        std::cout<<vec[i]<<std::endl;
        sort(vec[i].begin(), vec[i].end());
        std::cout<<vec[i]<<std::endl;
    }
    */

    //for input
    std::string s = "world";
    //getline(std::cin, s);
    //std::cout << s;

    std::string s2 = "hello";
    std::string s3 = s2 + s;
    std::cout << s3 <<std::endl;

    //from n index to the end of the string
    std::cout << s3.substr(3)<<"\n";

    //from n index, sub string of m length string.substr(2,3);
    std::cout << s3.substr(3,4)<<"\n";

    std::cout<< s3.find("ell")<<"\n";

    int a = 1233;

    std::string intStr = std::to_string(a);
    std::cout<< intStr <<"\n";

    intStr.push_back('6');
    std::cout<< intStr <<"\n";

    //atoi converts string to integer
    a = atoi(intStr.c_str());
    std::cout << a <<"\n";

    return 0;
}
