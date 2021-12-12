#include <iostream>
#include <string>

#include <core/create/createFolder/create_folder.h>
#include <core/read/readFile/read_file.h>
#include <core/tools/select_info_from_list/select_info_from_list.h>
#include <module/config/path/install_path/install_path.h>

using core::create::CreateFolder;
using core::read::ReadFile;
using core::tools::SelectInfoFromList;
using module::config::path::InstallPath;

int main()
{
    CreateFolder *createFolder = new CreateFolder();
    std::cout << "Holle World!" << std::endl;
    ReadFile *readFile = new ReadFile();
    readFile->SetPath("/etc/profile");
    readFile->SetInfo();
    std::cout << "Holle World!" << std::endl;
    std::vector<std::string> paly = readFile->GetInfo();

    paly = SelectInfoFromList::SelectInfo(paly, "CASSELDB_INSTALL_PATH", true);
    std::cout << "Holle World!" << std::endl;
    for (auto item : paly) {
        std::cout << item << std::endl;
    }

    InstallPath *installPath = new InstallPath();
    std::cout << "Holle World!-" << std::endl;
    std::string install_path = installPath->GetInstallPath();
    std::cout << "Holle World!-" << std::endl;
    std::cout << install_path << std::endl;

    return 0;
}