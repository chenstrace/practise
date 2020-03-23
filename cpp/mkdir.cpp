#include <iostream>
#include <string>
#include <sys/stat.h>

bool mkpath(const std::string& path)
{
    if (path.empty())
    {
        return false;
    }

    bool bSuccess = false;
    int nRC = ::mkdir(path.c_str(), 0775);
    if (nRC == -1)
    {
        switch (errno)
        {
        case ENOENT:
            if (mkpath(path.substr(0, path.find_last_of('/'))))
                bSuccess = 0 == ::mkdir(path.c_str(), 0775);
            else
                bSuccess = false;
            break;
        case EEXIST:
            bSuccess = true;
            break;
        default:
            bSuccess = false;
            break;
        }
    }
    else
    {
        bSuccess = true;
    }

    return bSuccess;
}

int main()
{
    mkpath("a/b/c/d");
    return 0;
}
