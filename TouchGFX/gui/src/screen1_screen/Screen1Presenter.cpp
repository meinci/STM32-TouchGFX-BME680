#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

Screen1Presenter::Screen1Presenter(Screen1View& v)
    : view(v)
{

}

void Screen1Presenter::activate()
{

}

void Screen1Presenter::deactivate()
{

}
void Screen1Presenter::UpdateGraph1(uint16_t value)
{
	view.UpdateGraph1(value);
}

void Screen1Presenter::UpdateBar(uint16_t value)
{
	view.UpdateBar(value);
}

void Screen1Presenter::UpdateTextArea(uint16_t value)
{
	view.UpdateTextArea(value);
}


