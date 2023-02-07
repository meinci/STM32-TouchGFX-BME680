#include <gui/screen2_screen/Screen2View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>

Screen2Presenter::Screen2Presenter(Screen2View& v)
    : view(v)
{

}

void Screen2Presenter::activate()
{

}

void Screen2Presenter::deactivate()
{

}
void Screen2Presenter::UpdateTemp(float temperature)
{
	view.UpdateTemp(temperature);
}

void Screen2Presenter::UpdateHumi(float humidity)
{
	view.UpdateHumi(humidity);
}
void Screen2Presenter::UpdatePres(float pressure)
{
	view.UpdatePres(pressure);
}
void Screen2Presenter::UpdateGas(float gas_resistance)
{
	view.UpdateGas(gas_resistance);
}
