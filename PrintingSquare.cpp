#include <iostream>
#include <tchar.h>
#include <chrono>
#include <string>
#include <thread>
#include "constream.hpp"


int _tmain(int argc, _TCHAR* argv[])
{
    using namespace std;
    using namespace conio;
    using namespace std::chrono_literals;
    string strLine("Hello World!!! Printing Square!!! Press Any Key To Exit!!!");
    int nLen = strLine.length();
    clrscr(cout);
    for (int i = 0; i < nLen; i++)
    {
        cout << setcrsrtype(0) << setxy(10 + i, 10) << strLine[i]
        	 << static_cast<char>(0xDB);
        std::this_thread::sleep_for(500ms);
    }
    cout << setcrsrtype(0) << setxy(10, 10) << strLine << " ";
    getch();
    return 0;
}
