#include "login.h"
#include "account.h"

// TODO: login, logout, delete, init

int main()
{
    std::cout << "Login Authentication app main file" << std::endl;

    session sesja;
    sesja.create_acc();
    return 0;
}