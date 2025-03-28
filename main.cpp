#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <Serie.hpp>
using namespace ftxui;
using namespace std;
int main(int argc, char const *argv[])
{
    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full());
    auto document = hbox({
        vbox(spinner(1,1))
    });
    Render(pantalla, document);
    return EXIT_SUCCESS;
}