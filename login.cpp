#include "login.h"
#include "account.h"

int main()
{
    std::cout << "Login Authentication app main file" << std::endl;

    session sesja;
    sesja.create_acc();
    return 0;
}