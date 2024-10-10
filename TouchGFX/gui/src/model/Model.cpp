#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "stm32f7xx_hal.h"

extern __IO uint16_t uhADCxConvertedData;
extern __IO uint16_t bmeTemp;
#include "bme680.h"
uint8_t tick1 = 0;
extern struct bme680_field_data data;
extern struct bme680_dev gas_sensor;
extern __IO int8_t rslt;
extern __IO float temperature;
extern __IO float humidity;
extern __IO float pressure;
extern __IO float gas_resistance;
extern __IO uint16_t meas_period;

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
/*	tick1 ++;
		if (tick1 >= 90){
			rslt = bme680_get_sensor_data(&data, &gas_sensor);

			temperature = data.temperature/100;
			humidity = data.humidity/1000;
			pressure = data.pressure / 100;

			if(data.status & BME680_GASM_VALID_MSK)
				gas_resistance = data.gas_resistance;

			if (gas_sensor.power_mode == BME680_FORCED_MODE)
			{
				rslt = bme680_set_sensor_mode(&gas_sensor);
			}
			tick1 = 0;
		}


  */
  modelListener->UpdateTemp(temperature);
  modelListener->UpdateHumi(humidity);
  modelListener->UpdatePres(pressure);
  modelListener->UpdateGas(gas_resistance);


  modelListener->UpdateGraph1(uhADCxConvertedData * 3300 / 4096);
  modelListener->UpdateBar(uhADCxConvertedData * 3300 / 4096);
  modelListener->UpdateTextArea(uhADCxConvertedData * 3300 / 4096);
}
