#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}
void Screen1View::UpdateGraph1(uint16_t value)
{
	dynamicGraph1.addDataPoint(value);
}
void Screen1View::UpdateBar(uint16_t value)
{
	lineProgress1.setValue(value);
}
void Screen1View::UpdateTextArea(uint16_t value)
{
	Unicode::snprintfFloat(textArea_ValueBuffer,TEXTAREA_VALUE_SIZE,"%.f",value);
	textArea_Value.invalidate();
}
