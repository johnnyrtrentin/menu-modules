#include "menu.h"
#include "utils.h"

Utils utils;
char *modules = "\n----------------------\n 1 .Sensor A   2. Sensor B\n----------------------\n";

// Display modules
void Menu::displayMenuOptions()
{
    utils.display("Modulos");

    char selection = '0';

    utils.display(modules);

    delay(2000);
    selection = '1';

    this->selectModule(selection);

    delay(2000);
    selection = '2';

    this->selectModule(selection);

    delay(2000);
};

void Menu::selectModule(char selection)
{
    for (int i = 0; i < strlen(modules); i++)
    {
        if (modules[i] == '[' || modules[i] == ']')
        {
            modules[i] = ' ';
        }
    }

    for (int i = 0; i < strlen(modules); i++)
    {
        utils.display(".");
        if (modules[i] == selection)
        {
            modules[i - 1] = '[';
            modules[i + 1] = ']';
        }
    }

    utils.display(modules);
}
