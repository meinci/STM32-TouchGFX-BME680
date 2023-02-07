#include <gui/screen2_screen/Screen2View.hpp>

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}
void Screen2View::UpdateTemp(float temperature)
{
	Unicode::snprintfFloat(textAreaTempBuffer,TEXTAREATEMP_SIZE,"%.2f",temperature);
	textAreaTemp.invalidate();
}

void Screen2View::UpdateHumi(float humidity)
{
	Unicode::snprintfFloat(textAreaHumiBuffer,TEXTAREAHUMI_SIZE,"%.2f",humidity);
	textAreaHumi.invalidate();
}
void Screen2View::UpdatePres(float pressure)
{
	Unicode::snprintfFloat(textAreaPresBuffer,TEXTAREAPRES_SIZE,"%.2f",pressure);
	textAreaPres.invalidate();
}
void Screen2View::UpdateGas(float gas_resistance)
{
	Unicode::snprintfFloat(textAreaGasBuffer,TEXTAREAGAS_SIZE,"%.f",gas_resistance);
	textAreaGas.invalidate();
}
